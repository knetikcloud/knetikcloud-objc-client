#import <Foundation/Foundation.h>
#import "JSAPIArticleResource.h"
#import "JSAPIPageResourceArticleResource_.h"
#import "JSAPIPageResourceTemplateResource_.h"
#import "JSAPIPatchResource.h"
#import "JSAPIResult.h"
#import "JSAPITemplateResource.h"
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



@interface JSAPIContentArticlesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIContentArticlesApiErrorDomain;
extern NSInteger kJSAPIContentArticlesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new article
/// Articles are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.<br /><b>Permissions Needed:</b> POST
///
/// @param articleResource The new article (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIArticleResource*
-(NSURLSessionTask*) createArticleWithArticleResource: (JSAPIArticleResource*) articleResource
    completionHandler: (void (^)(JSAPIArticleResource* output, NSError* error)) handler;


/// Create an article template
/// Article Templates define a type of article and the properties they have.<br /><b>Permissions Needed:</b> POST
///
/// @param articleTemplateResource The article template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) createArticleTemplateWithArticleTemplateResource: (JSAPITemplateResource*) articleTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Delete an existing article
/// <b>Permissions Needed:</b> DELETE
///
/// @param _id The article id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteArticleWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an article template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects.<br /><b>Permissions Needed:</b> DELETE
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
-(NSURLSessionTask*) deleteArticleTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single article
/// <b>Permissions Needed:</b> GET
///
/// @param _id The article id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIArticleResource*
-(NSURLSessionTask*) getArticleWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIArticleResource* output, NSError* error)) handler;


/// Get a single article template
/// <b>Permissions Needed:</b> GET
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
-(NSURLSessionTask*) getArticleTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// List and search article templates
/// <b>Permissions Needed:</b> LIST
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
-(NSURLSessionTask*) getArticleTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;


/// List and search articles
/// Get a list of articles with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single article' to retrieve the full resource with assets for a given item as needed.<br /><b>Permissions Needed:</b> LIST
///
/// @param filterActiveOnly Filter for articles that are active (true) or inactive (false) (optional)
/// @param filterCategory Filter for articles from a specific category by id (optional)
/// @param filterTagset Filter for articles with at least one of a specified set of tags (separated by comma) (optional)
/// @param filterTagIntersection Filter for articles with all of a specified set of tags (separated by comma) (optional)
/// @param filterTagExclusion Filter for articles with none of a specified set of tags (separated by comma) (optional)
/// @param filterTitle Filter for articles whose title contains a string (optional)
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
/// @return JSAPIPageResourceArticleResource_*
-(NSURLSessionTask*) getArticlesWithFilterActiveOnly: (NSNumber*) filterActiveOnly
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterTagIntersection: (NSString*) filterTagIntersection
    filterTagExclusion: (NSString*) filterTagExclusion
    filterTitle: (NSString*) filterTitle
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceArticleResource_* output, NSError* error)) handler;


/// Update an existing article
/// <b>Permissions Needed:</b> PUT
///
/// @param _id The article id
/// @param articleResource The article object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIArticleResource*
-(NSURLSessionTask*) updateArticleWithId: (NSString*) _id
    articleResource: (JSAPIArticleResource*) articleResource
    completionHandler: (void (^)(JSAPIArticleResource* output, NSError* error)) handler;


/// Update an article template
/// <b>Permissions Needed:</b> PUT
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
-(NSURLSessionTask*) updateArticleTemplateWithId: (NSString*) _id
    templatePatchResource: (JSAPIPatchResource*) templatePatchResource
    testValidation: (NSNumber*) testValidation
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;



@end
