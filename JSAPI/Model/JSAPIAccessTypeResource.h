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


#import "JSAPIAccessEntryResource.h"
#import "JSAPIAccessSubTypeResource.h"
@protocol JSAPIAccessEntryResource;
@class JSAPIAccessEntryResource;
@protocol JSAPIAccessSubTypeResource;
@class JSAPIAccessSubTypeResource;



@protocol JSAPIAccessTypeResource
@end

@interface JSAPIAccessTypeResource : JSAPIObject

/* The access list. Combines with parent access to determine permission 
 */
@property(nonatomic) NSArray<JSAPIAccessEntryResource>* access;
/* The actions that are possible for the resource type [optional]
 */
@property(nonatomic) NSArray<NSString*>* actions;
/* The id of the resource we are defining access for (null for top level) [optional]
 */
@property(nonatomic) NSString* _id;
/* The id of the parent resource (null if parent top level) [optional]
 */
@property(nonatomic) NSString* parentId;
/* The type of the parent resource (null for top level) [optional]
 */
@property(nonatomic) NSString* parentType;
/* List of resource types that can inherit from this one, to define default access lists on creation 
 */
@property(nonatomic) NSArray<JSAPIAccessSubTypeResource>* subTypes;
/* The resource type we are defining access for 
 */
@property(nonatomic) NSString* type;

+ (NSDictionary *)modalDictionary;

@end
