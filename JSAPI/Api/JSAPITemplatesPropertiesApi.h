#import <Foundation/Foundation.h>
#import "JSAPIPageResourcePropertyFieldListResource_.h"
#import "JSAPIPropertyFieldListResource.h"
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



@interface JSAPITemplatesPropertiesApi: NSObject <JSAPIApi>

extern NSString* kJSAPITemplatesPropertiesApiErrorDomain;
extern NSInteger kJSAPITemplatesPropertiesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get details for a template property type
/// <b>Permissions Needed:</b> ANY<br /><b>Permissions Needed:</b> NONE
///
/// @param type type
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPropertyFieldListResource*
-(NSURLSessionTask*) getTemplatePropertyTypeWithType: (NSString*) type
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPropertyFieldListResource* output, NSError* error)) handler;


/// List template property types
/// <b>Permissions Needed:</b> ANY<br /><b>Permissions Needed:</b> NONE
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourcePropertyFieldListResource_*
-(NSURLSessionTask*) getTemplatePropertyTypesWithCompletionHandler: 
    (void (^)(JSAPIPageResourcePropertyFieldListResource_* output, NSError* error)) handler;



@end
