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





@protocol JSAPIPropertyDefinitionResource
@end

@interface JSAPIPropertyDefinitionResource : JSAPIObject

/* The description of the property [optional]
 */
@property(nonatomic) NSString* _description;
/* The friendly front-facing name of the property [optional]
 */
@property(nonatomic) NSString* friendlyName;
/* The name of the property. Must start with a letter 
 */
@property(nonatomic) NSString* name;
/* The JSON path to the option label [optional]
 */
@property(nonatomic) NSString* optionLabelPath;
/* The JSON path to the option value [optional]
 */
@property(nonatomic) NSString* optionValuePath;
/* URL of service containing the property options (assumed JSON array) [optional]
 */
@property(nonatomic) NSString* optionsUrl;
/* Whether the property is required 
 */
@property(nonatomic) NSNumber* required;
/* The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties. 
 */
@property(nonatomic) NSString* type;

+ (NSDictionary *)modalDictionary;

@end
