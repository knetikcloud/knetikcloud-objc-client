#import <Foundation/Foundation.h>
#import "JSAPIPaymentMethodResource.h"
#import "JSAPIResult.h"
#import "JSAPIStringWrapper.h"
#import "JSAPIStripeCreatePaymentMethod.h"
#import "JSAPIStripePaymentRequest.h"
#import "JSAPIApi.h"

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



@interface JSAPIPaymentsStripeApi: NSObject <JSAPIApi>

extern NSString* kJSAPIPaymentsStripeApiErrorDomain;
extern NSInteger kJSAPIPaymentsStripeApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a Stripe payment method for a user
/// Obtain a token from Stripe, following their examples and documentation. Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. Ensure that Stripe itself has been configured with the webhook so that invoices are marked paid. <br><br><b>Permissions Needed:</b> STRIPE_ADMIN or owner
///
/// @param request The request to create a Stripe customer with payment info (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPaymentMethodResource*
-(NSURLSessionTask*) createStripePaymentMethodWithRequest: (JSAPIStripeCreatePaymentMethod*) request
    completionHandler: (void (^)(JSAPIPaymentMethodResource* output, NSError* error)) handler;


/// Pay with a single use token
/// Obtain a token from Stripe, following their examples and documentation. Pays an invoice without creating a payment method. Ensure that Stripe itself has been configured with the webhook so that invoices are marked paid. A 200 status code indicates sucess with a return value of \"succeeded\". \"pending\" status is also a 200 and otherwise a non-200 will be sent for failures. <br><br><b>Permissions Needed:</b> ANY
///
/// @param request The request to pay an invoice (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIStringWrapper*
-(NSURLSessionTask*) payStripeInvoiceWithRequest: (JSAPIStripePaymentRequest*) request
    completionHandler: (void (^)(JSAPIStringWrapper* output, NSError* error)) handler;



@end
