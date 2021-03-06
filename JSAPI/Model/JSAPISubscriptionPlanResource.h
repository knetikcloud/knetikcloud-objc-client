#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "JSAPIProperty.h"
@protocol JSAPIProperty;
@class JSAPIProperty;



@protocol JSAPISubscriptionPlanResource
@end

@interface JSAPISubscriptionPlanResource : JSAPIObject

/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this subscription [optional]
 */
@property(nonatomic) NSDictionary* additionalProperties;
/* The length of the billing cycle in number of billing cycle unit 
 */
@property(nonatomic) NSNumber* billingCycleLength;
/* The time period unit to apply to the length of billing cycles 
 */
@property(nonatomic) NSString* billingCycleUnit;
/* Whether this plan will be renewed on the consolidated billing cycle 
 */
@property(nonatomic) NSNumber* consolidated;
/* The ISO3 currency code to use for the fees 
 */
@property(nonatomic) NSString* currencyCode;
/* Used to schedule plan availability end date [optional]
 */
@property(nonatomic) NSNumber* endDate;
/* Optional override for the length of the first billing cycle before the first recurring billing [optional]
 */
@property(nonatomic) NSNumber* firstBillingCycleLength;
/* The time period unit to apply to the length of the first billing cycle. Required when first_billing_cycle_length is specified [optional]
 */
@property(nonatomic) NSString* firstBillingCycleUnit;
/* The number of late payment days before a subscription is canceled 
 */
@property(nonatomic) NSNumber* gracePeriod;
/* The id of the plan used to generate the SKUs [optional]
 */
@property(nonatomic) NSString* _id;
/* The fee charged when the subscription is purchased 
 */
@property(nonatomic) NSNumber* initialFee;
/* The SKU to be used when purchasing the subscription through the cart [optional]
 */
@property(nonatomic) NSString* initialSku;
/* The fee to add to the bill when an invoice has gone unpaid passed the grace period 
 */
@property(nonatomic) NSNumber* latePaymentFee;
/* The SKU that will show on the invoice when the subscription is delinquent [optional]
 */
@property(nonatomic) NSString* latePaymentSku;
/* Whether this plan is locked because it has been purchased by at least one user.  When locked, a number of properties can no longer be changed [optional]
 */
@property(nonatomic) NSNumber* locked;
/* The number of charge attempts before the subscription becomes delinquent 
 */
@property(nonatomic) NSNumber* maxBillAttempts;
/* Maximum number of renewals. If a migration plan is provided, the subscription will automatically switch to it when this limit is reached [optional]
 */
@property(nonatomic) NSNumber* maxCycles;
/* Automatically migrate to the specified plan when the subscription is first renewed [optional]
 */
@property(nonatomic) NSString* migrateToPlan;
/* The minimum number of renewals to charge for [optional]
 */
@property(nonatomic) NSNumber* minCycles;
/* The name of the plan used to generate the SKUs 
 */
@property(nonatomic) NSString* name;
/* Whether this plan is currently available 
 */
@property(nonatomic) NSNumber* published;
/* The fee to charge when a suspended subscription is to be re-activated 
 */
@property(nonatomic) NSNumber* reactivationFee;
/* The SKU that will show on the invoice when the subscription is re-activated after a suspension [optional]
 */
@property(nonatomic) NSString* reactivationSku;
/* The recurring fee to charge for each renewal 
 */
@property(nonatomic) NSNumber* recurringFee;
/* The SKU that will show on the invoice when the subscription is activated [optional]
 */
@property(nonatomic) NSString* recurringSku;
/* Used to schedule plan availability start date [optional]
 */
@property(nonatomic) NSNumber* startDate;

+ (NSDictionary *)modalDictionary;

@end
