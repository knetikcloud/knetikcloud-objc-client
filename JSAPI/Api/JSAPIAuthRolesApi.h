#import <Foundation/Foundation.h>
#import "JSAPIClientResource.h"
#import "JSAPIPageResourceRoleResource_.h"
#import "JSAPIResult.h"
#import "JSAPIRoleResource.h"
#import "JSAPIUserResource.h"
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



@interface JSAPIAuthRolesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIAuthRolesApiErrorDomain;
extern NSInteger kJSAPIAuthRolesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new role
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param roleResource The role resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIRoleResource*
-(NSURLSessionTask*) createRoleWithRoleResource: (JSAPIRoleResource*) roleResource
    completionHandler: (void (^)(JSAPIRoleResource* output, NSError* error)) handler;


/// Delete a role
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param role The role value
/// @param force If true, removes role from users/clients (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteRoleWithRole: (NSString*) role
    force: (NSNumber*) force
    completionHandler: (void (^)(NSError* error)) handler;


/// Get roles for a client
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param clientKey The client key
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceRoleResource_*
-(NSURLSessionTask*) getClientRolesWithClientKey: (NSString*) clientKey
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceRoleResource_* output, NSError* error)) handler;


/// Get a single role
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param role The role value
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIRoleResource*
-(NSURLSessionTask*) getRoleWithRole: (NSString*) role
    completionHandler: (void (^)(JSAPIRoleResource* output, NSError* error)) handler;


/// List and search roles
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param filterName Filter for roles that have a name starting with specified string (optional)
/// @param filterRole Filter for roles that have a role starting with specified string (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceRoleResource_*
-(NSURLSessionTask*) getRolesWithFilterName: (NSString*) filterName
    filterRole: (NSString*) filterRole
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceRoleResource_* output, NSError* error)) handler;


/// Get roles for a user
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param userId The user&#39;s id
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceRoleResource_*
-(NSURLSessionTask*) getUserRolesWithUserId: (NSNumber*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceRoleResource_* output, NSError* error)) handler;


/// Set roles for a client
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param clientKey The client key
/// @param rolesList The list of unique roles (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIClientResource*
-(NSURLSessionTask*) setClientRolesWithClientKey: (NSString*) clientKey
    rolesList: (NSArray<NSString*>*) rolesList
    completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler;


/// Set permissions for a role
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param role The role value
/// @param permissionsList The list of unique permissions (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIRoleResource*
-(NSURLSessionTask*) setPermissionsForRoleWithRole: (NSString*) role
    permissionsList: (NSArray<NSString*>*) permissionsList
    completionHandler: (void (^)(JSAPIRoleResource* output, NSError* error)) handler;


/// Set roles for a user
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param userId The user&#39;s id
/// @param rolesList The list of unique roles (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIUserResource*
-(NSURLSessionTask*) setUserRolesWithUserId: (NSNumber*) userId
    rolesList: (NSArray<NSString*>*) rolesList
    completionHandler: (void (^)(JSAPIUserResource* output, NSError* error)) handler;


/// Update a role
/// <b>Permissions Needed:</b> ROLES_ADMIN
///
/// @param role The role value
/// @param roleResource The role resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIRoleResource*
-(NSURLSessionTask*) updateRoleWithRole: (NSString*) role
    roleResource: (JSAPIRoleResource*) roleResource
    completionHandler: (void (^)(JSAPIRoleResource* output, NSError* error)) handler;



@end
