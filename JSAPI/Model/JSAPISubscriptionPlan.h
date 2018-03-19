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



@protocol JSAPISubscriptionPlan
@end

@interface JSAPISubscriptionPlan : JSAPIObject


@property(nonatomic) NSDictionary* additionalProperties;

@property(nonatomic) NSString* availability;

@property(nonatomic) NSNumber* billGraceDays;

@property(nonatomic) NSNumber* consolidated;

@property(nonatomic) NSNumber* firstBill;

@property(nonatomic) NSString* firstBillUnitOfTime;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* latePaymentSku;

@property(nonatomic) NSNumber* locked;

@property(nonatomic) NSNumber* maxAutoRenew;

@property(nonatomic) NSNumber* maxBillAttempts;

@property(nonatomic) NSString* migrationPlan;

@property(nonatomic) NSNumber* minimumTerm;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* primarySku;

@property(nonatomic) NSString* reactivationSku;

@property(nonatomic) NSString* recurringSku;

@property(nonatomic) NSNumber* renewPeriod;

@property(nonatomic) NSString* renewPeriodUnitOfTime;

@property(nonatomic) NSNumber* subscriptionId;

+ (NSDictionary *)modalDictionary;

@end