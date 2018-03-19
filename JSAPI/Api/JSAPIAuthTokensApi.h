#import <Foundation/Foundation.h>
#import "JSAPIOauthAccessTokenResource.h"
#import "JSAPIPageResourceOauthAccessTokenResource_.h"
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



@interface JSAPIAuthTokensApi: NSObject <JSAPIApi>

extern NSString* kJSAPIAuthTokensApiErrorDomain;
extern NSInteger kJSAPIAuthTokensApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Delete tokens by username, client id, or both
/// <b>Permissions Needed:</b> TOKENS_ADMIN
///
/// @param username The username of the user (optional)
/// @param clientId The id of the client (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteTokensWithUsername: (NSString*) username
    clientId: (NSString*) clientId
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single token by username and client id
/// <b>Permissions Needed:</b> TOKENS_ADMIN
///
/// @param username The username of the user
/// @param clientId The id of the client
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIOauthAccessTokenResource*
-(NSURLSessionTask*) getTokenWithUsername: (NSString*) username
    clientId: (NSString*) clientId
    completionHandler: (void (^)(JSAPIOauthAccessTokenResource* output, NSError* error)) handler;


/// List usernames and client ids
/// Token value not shown. <br><br><b>Permissions Needed:</b> TOKENS_ADMIN
///
/// @param filterClientId Filters for token whose client id matches provided string (optional)
/// @param filterUsername Filters for token whose username matches provided string (optional)
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
/// @return JSAPIPageResourceOauthAccessTokenResource_*
-(NSURLSessionTask*) getTokensWithFilterClientId: (NSString*) filterClientId
    filterUsername: (NSString*) filterUsername
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceOauthAccessTokenResource_* output, NSError* error)) handler;



@end
