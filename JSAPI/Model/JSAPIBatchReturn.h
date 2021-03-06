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





@protocol JSAPIBatchReturn
@end

@interface JSAPIBatchReturn : JSAPIObject

/* The result body [optional]
 */
@property(nonatomic) NSObject* body;
/* The HTTP response code [optional]
 */
@property(nonatomic) NSNumber* code;
/* Full URI of REST call [optional]
 */
@property(nonatomic) NSString* uri;

+ (NSDictionary *)modalDictionary;

@end
