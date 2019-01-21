#import <Foundation/Foundation.h>
#import "JSAPIPageResourceTemplateResource_.h"
#import "JSAPIPageResourceVerificationRequest_.h"
#import "JSAPIPatchResource.h"
#import "JSAPIResult.h"
#import "JSAPITemplateResource.h"
#import "JSAPIVerificationRequest.h"
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



@interface JSAPIVerificationApi: NSObject <JSAPIApi>

extern NSString* kJSAPIVerificationApiErrorDomain;
extern NSInteger kJSAPIVerificationApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a request template
/// Request Templates define a type of request and the properties they have.
///
/// @param requestTemplateResource The request template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) createRequestTemplateWithRequestTemplateResource: (JSAPITemplateResource*) requestTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Create a new request
/// Verification requests ask for a user to respond and confirm something, like their email address of an invitation to join a group.<br /><b>Permissions Needed:</b> POST
///
/// @param verificationRequest The request (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIVerificationRequest*
-(NSURLSessionTask*) createVerificationRequestWithVerificationRequest: (JSAPIVerificationRequest*) verificationRequest
    completionHandler: (void (^)(JSAPIVerificationRequest* output, NSError* error)) handler;


/// Delete a request template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects.
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteRequestTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an existing request
/// <b>Permissions Needed:</b> DELETE
///
/// @param code The code
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteVerificationRequestWithCode: (NSString*) code
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single request template
/// 
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) getRequestTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// List and search request templates
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceTemplateResource_*
-(NSURLSessionTask*) getRequestTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;


/// Get a single verification request
/// <b>Permissions Needed:</b> GET
///
/// @param code The code
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIVerificationRequest*
-(NSURLSessionTask*) getVerificationRequestWithCode: (NSString*) code
    completionHandler: (void (^)(JSAPIVerificationRequest* output, NSError* error)) handler;


/// List requests
/// Get a list of verification requests.<br /><b>Permissions Needed:</b> LIST
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceVerificationRequest_*
-(NSURLSessionTask*) getVerificationRequestsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceVerificationRequest_* output, NSError* error)) handler;


/// Update a request template
/// 
///
/// @param _id The id of the template
/// @param templatePatchResource The patch resource object (optional)
/// @param testValidation If true, this will test validation but not submit the patch request (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) updateRequestTemplateWithId: (NSString*) _id
    templatePatchResource: (JSAPIPatchResource*) templatePatchResource
    testValidation: (NSNumber*) testValidation
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Update an existing request
/// <b>Permissions Needed:</b> PUT
///
/// @param code The request code
/// @param verificationRequest The request (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIVerificationRequest*
-(NSURLSessionTask*) updateVerificationRequestWithCode: (NSString*) code
    verificationRequest: (JSAPIVerificationRequest*) verificationRequest
    completionHandler: (void (^)(JSAPIVerificationRequest* output, NSError* error)) handler;


/// Verify a request
/// <b>Permissions Needed:</b> VERIFY
///
/// @param code The code
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIVerificationRequest*
-(NSURLSessionTask*) verifyRequestWithCode: (NSString*) code
    completionHandler: (void (^)(JSAPIVerificationRequest* output, NSError* error)) handler;



@end