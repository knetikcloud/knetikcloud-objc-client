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





@protocol JSAPISimpleGroupResource
@end

@interface JSAPISimpleGroupResource : JSAPIObject

/* The name of the group. Max 50 characters 
 */
@property(nonatomic) NSString* name;
/* Unique name used in url and references. Uppercase, lowercase, numbers and hyphens only. Max 50 characters. Cannot be altered once created. Default: random UUID [optional]
 */
@property(nonatomic) NSString* uniqueName;

+ (NSDictionary *)modalDictionary;

@end
