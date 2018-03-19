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





@protocol JSAPICreateBillingAgreementRequest
@end

@interface JSAPICreateBillingAgreementRequest : JSAPIObject

/* The endpoint URL to which PayPal should forward the user if they cancel (do not accept) the agreement 
 */
@property(nonatomic) NSString* cancelUrl;
/* The endpoint URL to which PayPal should forward the user after they accept the agreement. This endpoint will receive information needed for the next step 
 */
@property(nonatomic) NSString* returnUrl;
/* The ID of the user. Defaults to the logged in user [optional]
 */
@property(nonatomic) NSNumber* userId;

+ (NSDictionary *)modalDictionary;

@end
