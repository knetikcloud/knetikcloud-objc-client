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





@protocol JSAPIPatchActionResource
@end

@interface JSAPIPatchActionResource : JSAPIObject

/* The action you wish to perform on the resource 
 */
@property(nonatomic) NSString* op;
/* The JSON Pointer (JSON key) you wish to patch 
 */
@property(nonatomic) NSString* path;
/* The new value for the JSON path [optional]
 */
@property(nonatomic) NSObject* value;

+ (NSDictionary *)modalDictionary;

@end
