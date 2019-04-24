// Copyright (c) 2018 The Gulden developers
// Authored by: Malcolm MacLeod (mmacleod@webmail.co.za) & Willem de Jonge (willem@isnapp.nl)
// Distributed under the GULDEN software license, see the accompanying
// file COPYING

package com.gulden.unity_wallet

import android.content.Intent
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity

class IntroActivity : AppCompatActivity(), UnityCore.Observer
{
    override fun createNewWallet(): Boolean {
        // upgrade old wallet when a protobuf wallet file is present and is not marked as upgraded
        val upgradedMarkerFile = getFileStreamPath(Constants.OLD_WALLET_PROTOBUF_FILENAME+".upgraded")
        if (!upgradedMarkerFile.exists() && getFileStreamPath(Constants.OLD_WALLET_PROTOBUF_FILENAME).exists())
            gotoActivity(UpgradeActivity::class.java)
        else
            gotoActivity(WelcomeActivity::class.java)
        return true
    }

    override fun haveExistingWallet(): Boolean {
        return true
    }

    override fun onCoreReady(): Boolean {
        if (UnityCore.receivedExistingWalletEvent)
            gotoActivity(WalletActivity::class.java)
        return true
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val core = UnityCore.instance

        UnityCore.instance.addObserver(this, fun (callback:() -> Unit) { runOnUiThread { callback() }})
        core.startCore()

        // If core is already ready we are resuming a session and can go directly to the wallet
        // (there will be no further coreReady or haveExistingWallet event)
        if (core.isCoreReady())
            gotoActivity(WalletActivity::class.java)
        // If we have already previously received a create new wallet event and not handled it
        // Then we are inside some edge case (e.g. someone opened and closed a URI handler with no wallet)
        // So create the wallet now
        else if(!UnityCore.receivedExistingWalletEvent && UnityCore.receivedCreateNewWalletEvent)
            createNewWallet()

    }

    override fun onDestroy() {
        super.onDestroy()

        UnityCore.instance.removeObserver(this)
    }

    private fun gotoActivity(cls: Class<*> )
    {
            val intent = Intent(this, cls)
            intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK or Intent.FLAG_ACTIVITY_CLEAR_TASK)
            startActivity(intent)

            finish()
    }
}