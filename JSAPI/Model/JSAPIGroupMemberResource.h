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
#import "JSAPISimpleGroupResource.h"
#import "JSAPISimpleUserResource.h"
@protocol JSAPIProperty;
@class JSAPIProperty;
@protocol JSAPISimpleGroupResource;
@class JSAPISimpleGroupResource;
@protocol JSAPISimpleUserResource;
@class JSAPISimpleUserResource;



@protocol JSAPIGroupMemberResource
@end

@interface JSAPIGroupMemberResource : JSAPIObject

/* A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this type, or be an extra not from the template [optional]
 */
@property(nonatomic) NSDictionary* additionalProperties;
/* The group. Id is the unique name [optional]
 */
@property(nonatomic) JSAPISimpleGroupResource* group;
/* Whether this membership is explicit (the user was added directly to the group) or implicit (the user was added only to one or more child groups) [optional]
 */
@property(nonatomic) NSNumber* implicit;
/* The id of the membership entry [optional]
 */
@property(nonatomic) NSNumber* membershipId;
/* The position of the member in the group if applicable. Read notes for details [optional]
 */
@property(nonatomic) NSString* order;
/* The member's access level. Default: member [optional]
 */
@property(nonatomic) NSString* status;
/* A template this member additional properties are validated against (private). May be null and no validation of properties will be done [optional]
 */
@property(nonatomic) NSString* template;
/* The user 
 */
@property(nonatomic) JSAPISimpleUserResource* user;

+ (NSDictionary *)modalDictionary;

@end