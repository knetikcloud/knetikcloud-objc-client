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


#import "JSAPITemplatedEmail.h"
@protocol JSAPITemplatedEmail;
@class JSAPITemplatedEmail;



@protocol JSAPIMessageContentResource
@end

@interface JSAPIMessageContentResource : JSAPIObject

/* The content of the email [optional]
 */
@property(nonatomic) NSString* email;
/* The content of the mobile app push notification [optional]
 */
@property(nonatomic) NSString* push;
/* The content of the sms [optional]
 */
@property(nonatomic) NSString* sms;
/* The content of the templated email [optional]
 */
@property(nonatomic) JSAPITemplatedEmail* templatedEmail;
/* The content of the websocket message [optional]
 */
@property(nonatomic) NSObject* websocket;

+ (NSDictionary *)modalDictionary;

@end