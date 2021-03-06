#import <Foundation/Foundation.h>
#import "JSAPIAccessResourceCreateRequest.h"
#import "JSAPIAccessTypeResource.h"
#import "JSAPIPageResourceAccessResultsResource_.h"
#import "JSAPIPageResourceAccessTypeResource_.h"
#import "JSAPIResult.h"
#import "JSAPIApi.h"

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



@interface JSAPIAuthTypesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIAuthTypesApiErrorDomain;
extern NSInteger kJSAPIAuthTypesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get allowed action
/// Checks for which actions can be taken against a given resource by the caller. <b>Types Needed:</b> any
///
/// @param type The type value
/// @param _id The resource id
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceAccessResultsResource_*
-(NSURLSessionTask*) allowedResourceActionsWithType: (NSString*) type
    _id: (NSString*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceAccessResultsResource_* output, NSError* error)) handler;


/// Get allowed actions on a type
/// Checks for which actions can be taken against a given type by the caller. <b>Types Needed:</b> any
///
/// @param type The type value
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceAccessResultsResource_*
-(NSURLSessionTask*) allowedTypeActionsWithType: (NSString*) type
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceAccessResultsResource_* output, NSError* error)) handler;


/// Create or update resource
/// Creates the access control for a resource if it does not exist, and updates parent information if it does not.<b>Resources Needed:</b> ROLE_SUPER_ADMIN
///
/// @param type The resource type
/// @param accessResource The access rules for the resource (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAccessTypeResource*
-(NSURLSessionTask*) createResourceWithType: (NSString*) type
    accessResource: (JSAPIAccessResourceCreateRequest*) accessResource
    completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;


/// Create a new type
/// <b>Types Needed:</b> ROLE_SUPER_ADMIN
///
/// @param typeResource The type resource object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAccessTypeResource*
-(NSURLSessionTask*) createTypeWithTypeResource: (JSAPIAccessTypeResource*) typeResource
    completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;


/// Delete all resources of a type
/// <b>Types Needed:</b> ROLE_SUPER_ADMIN
///
/// @param type The type value
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteAllOfTypeWithType: (NSString*) type
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a resource
/// Deletes a non-root level type<br /><b>Types Needed:</b> ROLE_SUPER_ADMIN
///
/// @param type The type value
/// @param _id The resource id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteResourceWithType: (NSString*) type
    _id: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a root type
/// Deletes a root level type with no id<br /><b>Types Needed:</b> ROLE_SUPER_ADMIN
///
/// @param type The type value
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteTypeWithType: (NSString*) type
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single resource
/// <b>Types Needed:</b> VIEW_ACCESS
///
/// @param type The type value
/// @param _id The resource id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAccessTypeResource*
-(NSURLSessionTask*) getResourceWithType: (NSString*) type
    _id: (NSString*) _id
    completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;


/// List and search resources
/// <b>Types Needed:</b> ROLE_SUPER_ADMIN
///
/// @param type The type value
/// @param filterType Filter for a specific type (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to type:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceAccessTypeResource_*
-(NSURLSessionTask*) getResourcesWithType: (NSString*) type
    filterType: (NSString*) filterType
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceAccessTypeResource_* output, NSError* error)) handler;


/// Get a single root type
/// <b>Types Needed:</b> VIEW_ACCESS
///
/// @param type The type value
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAccessTypeResource*
-(NSURLSessionTask*) getTypeWithType: (NSString*) type
    completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;


/// List and search types
/// <b>Types Needed:</b> ROLE_SUPER_ADMIN
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to type:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceAccessTypeResource_*
-(NSURLSessionTask*) getTypesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceAccessTypeResource_* output, NSError* error)) handler;


/// Update a resource
/// <b>Types Needed:</b> ACCESS_CONTROL
///
/// @param type The type value
/// @param _id The resource id
/// @param typeResource The resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAccessTypeResource*
-(NSURLSessionTask*) updateResourceWithType: (NSString*) type
    _id: (NSString*) _id
    typeResource: (JSAPIAccessTypeResource*) typeResource
    completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;


/// Update a root type
/// <b>Types Needed:</b> ACCESS_CONTROL
///
/// @param type The type value
/// @param typeResource The type resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAccessTypeResource*
-(NSURLSessionTask*) updateTypeWithType: (NSString*) type
    typeResource: (JSAPIAccessTypeResource*) typeResource
    completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;



@end
