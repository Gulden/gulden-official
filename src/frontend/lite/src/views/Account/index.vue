<template>
  <component :is="accountType" :account="account" />
</template>

<script>
import { mapGetters } from "vuex";

import SpendingAccount from "./SpendingAccount";

export default {
  name: "Account",
  data() {
    return {
      accountType: "div"
    };
  },
  props: {
    id: null
  },
  components: {
    SpendingAccount
  },
  computed: {
    ...mapGetters("wallet", ["account"])
  },
  watch: {
    account() {
      this.onAccountChanged();
    }
  },
  mounted() {
    this.onAccountChanged();
  },
  methods: {
    onAccountChanged() {
      if (this.account) {
        this.accountType = SpendingAccount;
      }
    }
  }
};
</script>
