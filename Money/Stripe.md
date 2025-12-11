# Stripe

* Webhook API

* Test Credit Card Numbers: [URL](https://zenn.dev/manase/scraps/9cf7225a2f80e1)

### Your account” VS “Connected accounts"
* When you create a Connect webhook, you must configure it to receive Connect webhook events.
* When creating it in the Dashboard, for Listen to, select “Events on Connected accounts.”

### Account Types
* Standard: Full Stripe Dashboard access. fully managed by stripe
* Express: Limited Dashboard access, managed by the platform.
* Custom: No Dashboard access, fully managed by the platform.


### Standard vs. Connect account

* Standard account: 
    * `Developers → Webhooks → Add endpoint`
* Connect account: 
    * `Developers → Webhooks → “Connect” Tab`
    * **Connected and v2 accounts**
    * Receives events from all connected accounts.
    * Multi-tenant payment.

### Platform
* Parent Account
<--> Connected Accounts

**Merchant Model**: Merchants will collect payments directly”
**Marketplace Model**:  Sell to buyers yourself and send funds to recipients” 

### v2 Accounts API

* Customer(Buy) and Connected Account(Sell) is merged into a single Account object. 

### sandbox
* Test mode
> !! Account(including API key) will be different from the live mode.

### Branding settings

### Invoice
* Billing details

### Stripe Terminal
* Physical card readers for in-person payments.