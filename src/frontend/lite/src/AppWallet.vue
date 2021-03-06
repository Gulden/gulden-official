<template>
  <div class="app-wallet">
    <app-loader v-if="showLoader" />
    <modal-dialog v-model="modal" />
    <component :is="layout">
      <router-view />
    </component>
  </div>
</template>

<script>
import { mapState } from "vuex";
import AppStatus from "./AppStatus";
import AppLoader from "./components/AppLoader";
import ModalDialog from "./components/ModalDialog";
import EventBus from "./EventBus.js";

import SetupLayout from "./layouts/SetupLayout";
import WalletLayout from "./layouts/WalletLayout";

export default {
  name: "AppWallet",
  data() {
    return {
      modal: null
    };
  },
  components: {
    AppLoader,
    ModalDialog,
    SetupLayout,
    WalletLayout
  },
  created() {
    this.onStatusChanged();
  },
  mounted() {
    EventBus.$on("close-dialog", this.closeModal);
    EventBus.$on("show-dialog", this.showModal);
  },
  beforeDestroy() {
    EventBus.$off("close-dialog", this.closeModal);
    EventBus.$off("show-dialog", this.showModal);
  },
  computed: {
    ...mapState("app", ["splashReady", "status"]),
    layout() {
      return this.$route.meta.layout || WalletLayout;
    },
    showLoader() {
      return (
        this.splashReady === false ||
        (this.status !== AppStatus.ready && this.status !== AppStatus.setup)
      );
    }
  },
  watch: {
    status() {
      this.onStatusChanged();
    }
  },
  methods: {
    onStatusChanged() {
      let routeName;
      switch (this.status) {
        case AppStatus.setup:
          routeName = "setup";
          break;
        case AppStatus.synchronize:
          routeName = "transactions";
          break;
        case AppStatus.ready:
          routeName = "transactions";
          break;
      }
      if (routeName === undefined || this.$route.name === routeName) return;
      this.$router.push({ name: routeName });
    },
    closeModal() {
      this.modal = null;
    },
    showModal(modal) {
      this.modal = modal;
    }
  }
};
</script>
