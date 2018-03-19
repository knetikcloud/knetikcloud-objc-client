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


#import "JSAPIErrorResource.h"
@protocol JSAPIErrorResource;
@class JSAPIErrorResource;



@protocol JSAPIResult
@end

@interface JSAPIResult : JSAPIObject

/* The JSAPI error code [optional]
 */
@property(nonatomic) NSNumber* code;
/* The id used for debugging lookup [optional]
 */
@property(nonatomic) NSString* requestId;
/* The error object [optional]
 */
@property(nonatomic) NSArray<JSAPIErrorResource>* result;

+ (NSDictionary *)modalDictionary;

@end
