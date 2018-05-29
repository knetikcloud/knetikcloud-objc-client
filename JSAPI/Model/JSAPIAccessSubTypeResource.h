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



@protocol JSAPIAccessSubTypeResource
@end

@interface JSAPIAccessSubTypeResource : JSAPIObject

/* The actions that are possible for the resource type 
 */
@property(nonatomic) NSArray<NSString*>* actions;
/* An access list to be copied into new resources of this sub type under this parent. Can include SIDs from the replacement_sid list, which will be replaced when the sub resource if first created 
 */
@property(nonatomic) NSArray<JSAPIAccessEntryResource>* defaultAccess;
/* An access list to provide blanket access to all sub resources of this type under this parent 
 */
@property(nonatomic) NSArray<JSAPIAccessEntryResource>* inheritedAccess;
/* A list of placeholder sids that can be included in the access list to be replaced when a resource is first created [optional]
 */
@property(nonatomic) NSArray<NSString*>* replacementSids;
/* List of resource types that can inherit from this one, to define default access lists on creation 
 */
@property(nonatomic) NSArray<JSAPIAccessSubTypeResource>* subTypes;
/* The sub type we are defining access for 
 */
@property(nonatomic) NSString* type;

+ (NSDictionary *)modalDictionary;

@end