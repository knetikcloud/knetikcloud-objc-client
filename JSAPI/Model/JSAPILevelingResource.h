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
#import "JSAPITierResource.h"
@protocol JSAPIProperty;
@class JSAPIProperty;
@protocol JSAPITierResource;
@class JSAPITierResource;



@protocol JSAPILevelingResource
@end

@interface JSAPILevelingResource : JSAPIObject

/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type [optional]
 */
@property(nonatomic) NSDictionary* additionalProperties;
/* The date the leveling schema was created [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The description of the leveling schema [optional]
 */
@property(nonatomic) NSString* _description;
/* The name of the leveling schema.  IMMUTABLE 
 */
@property(nonatomic) NSString* name;
/* The template being used [optional]
 */
@property(nonatomic) NSString* template;
/* A set of tiers that contain experience boundaries [optional]
 */
@property(nonatomic) NSArray<JSAPITierResource>* tiers;
/* The name of an event that will add one progress to this level when fired [optional]
 */
@property(nonatomic) NSString* triggerEventName;
/* The date the leveling schema was updated [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

+ (NSDictionary *)modalDictionary;

@end
