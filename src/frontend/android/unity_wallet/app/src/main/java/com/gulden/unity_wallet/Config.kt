package com.gulden.unity_wallet

class Config {
    companion object {
        const val COIN = 100000000
        const val PRECISION_SHORT = 2
        const val PRECISION_FULL = 8
        val DEFAULT_CURRENCY_CODE get() = getDefaultCurrencyCode()
        const val USER_AGENT = "/Gulden android:${BuildConfig.VERSION_NAME}/"
        const val BLOCK_EXPLORER_TX_TEMPLATE = "https://www.dactual.com/transaction.php?tx=%s"
        const val BLOCK_EXPLORER_BLOCK_TEMPLATE = "https://blockchain.gulden.com/block/%s"
        const val PURCHASE_TEMPLATE = "https://gulden.com/purchase?receive_address=%s"
        const val AUDIBLE_NOTIFICATIONS_INTERVAL = 30 * 1000
        const val USE_RATE_PRECISION = true

        private fun getDefaultCurrencyCode(): String {
            return AppContext.instance.getString(R.string.default_currency_code)
        }
    }
}
