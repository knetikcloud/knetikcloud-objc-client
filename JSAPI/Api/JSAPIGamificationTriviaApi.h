#import <Foundation/Foundation.h>
#import "JSAPIAnswerResource.h"
#import "JSAPIImportJobResource.h"
#import "JSAPILongWrapper.h"
#import "JSAPIPageResourceAnswerResource_.h"
#import "JSAPIPageResourceDeltaResource_.h"
#import "JSAPIPageResourceImportJobResource_.h"
#import "JSAPIPageResourceQuestionResource_.h"
#import "JSAPIPageResourceQuestionTemplateResource_.h"
#import "JSAPIPageResourceString_.h"
#import "JSAPIPatchResource.h"
#import "JSAPIQuestionResource.h"
#import "JSAPIQuestionTemplateResource.h"
#import "JSAPIResult.h"
#import "JSAPIStringWrapper.h"
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



@interface JSAPIGamificationTriviaApi: NSObject <JSAPIApi>

extern NSString* kJSAPIGamificationTriviaApiErrorDomain;
extern NSInteger kJSAPIGamificationTriviaApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Add an answer to a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param questionId The id of the question
/// @param answer The new answer (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAnswerResource*
-(NSURLSessionTask*) addQuestionAnswersWithQuestionId: (NSString*) questionId
    answer: (JSAPIAnswerResource*) answer
    completionHandler: (void (^)(JSAPIAnswerResource* output, NSError* error)) handler;


/// Add a tag to a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the question
/// @param tag The new tag (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) addQuestionTagWithId: (NSString*) _id
    tag: (JSAPIStringWrapper*) tag
    completionHandler: (void (^)(NSError* error)) handler;


/// Add a tag to a batch of questions
/// All questions that dont't have the tag and match filters will have it added. The returned number is the number of questions updated. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param tag The tag to add (optional)
/// @param filterSearch Filter for documents whose question, answers or tags contains provided string (optional)
/// @param filterIdset Filter for documents whose id is in the comma separated list provided (optional)
/// @param filterCategory Filter for questions with specified category, by id (optional)
/// @param filterTag Filter for questions with specified tag (optional)
/// @param filterTagset Filter for questions with specified tags (separated by comma) (optional)
/// @param filterType Filter for questions with specified type (optional)
/// @param filterPublished Filter for questions currenctly published or not (optional)
/// @param filterImportId Filter for questions from a specific import job (optional)
/// 
///  code:200 message:"The number of records updated",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSNumber*
-(NSURLSessionTask*) addTagToQuestionsBatchWithTag: (JSAPIStringWrapper*) tag
    filterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTag: (NSString*) filterTag
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
    completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;


/// Create an import job
/// Set up a job to import a set of trivia questions from a cvs file at a remote url. the file will be validated asynchronously but will not be processed until started manually with the process endpoint. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param request The new import job (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIImportJobResource*
-(NSURLSessionTask*) createImportJobWithRequest: (JSAPIImportJobResource*) request
    completionHandler: (void (^)(JSAPIImportJobResource* output, NSError* error)) handler;


/// Create a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param question The new question (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIQuestionResource*
-(NSURLSessionTask*) createQuestionWithQuestion: (JSAPIQuestionResource*) question
    completionHandler: (void (^)(JSAPIQuestionResource* output, NSError* error)) handler;


/// Create a question template
/// Question templates define a type of question and the properties they have. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN<br /><b>Permissions Needed:</b> POST
///
/// @param questionTemplateResource The question template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIQuestionTemplateResource*
-(NSURLSessionTask*) createQuestionTemplateWithQuestionTemplateResource: (JSAPIQuestionTemplateResource*) questionTemplateResource
    completionHandler: (void (^)(JSAPIQuestionTemplateResource* output, NSError* error)) handler;


/// Delete an import job
/// Also deletes all questions that were imported by it. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the job
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteImportJobWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the question
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteQuestionWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Remove an answer from a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param questionId The id of the question
/// @param _id The id of the answer
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteQuestionAnswersWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a question template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN<br /><b>Permissions Needed:</b> DELETE
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
-(NSURLSessionTask*) deleteQuestionTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Get an import job
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the job
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIImportJobResource*
-(NSURLSessionTask*) getImportJobWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIImportJobResource* output, NSError* error)) handler;


/// Get a list of import job
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param filterVendor Filter for jobs by vendor id (optional)
/// @param filterCategory Filter for jobs by category id (optional)
/// @param filterName Filter for jobs which name *STARTS* with the given string (optional)
/// @param filterStatus Filter for jobs that are in a specific set of statuses (comma separated) (optional)
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
/// @return JSAPIPageResourceImportJobResource_*
-(NSURLSessionTask*) getImportJobsWithFilterVendor: (NSString*) filterVendor
    filterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
    filterStatus: (NSString*) filterStatus
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceImportJobResource_* output, NSError* error)) handler;


/// Get a single question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the question
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIQuestionResource*
-(NSURLSessionTask*) getQuestionWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIQuestionResource* output, NSError* error)) handler;


/// Get an answer for a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param questionId The id of the question
/// @param _id The id of the answer
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIAnswerResource*
-(NSURLSessionTask*) getQuestionAnswerWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
    completionHandler: (void (^)(JSAPIAnswerResource* output, NSError* error)) handler;


/// List the answers available for a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param questionId The id of the question
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceAnswerResource_*
-(NSURLSessionTask*) getQuestionAnswersWithQuestionId: (NSString*) questionId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceAnswerResource_* output, NSError* error)) handler;


/// List question deltas in ascending order of updated date
/// The 'since' parameter is important to avoid getting a full list of all questions. Implementors should make sure they pass the updated date of the last resource loaded, not the date of the last request, in order to avoid gaps. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param since Timestamp in seconds (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceDeltaResource_*
-(NSURLSessionTask*) getQuestionDeltasWithSince: (NSNumber*) since
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceDeltaResource_* output, NSError* error)) handler;


/// List the tags for a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the question
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceString_*
-(NSURLSessionTask*) getQuestionTagsWithId: (NSString*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceString_* output, NSError* error)) handler;


/// Get a single question template
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN or TRIVIA_ADMIN<br /><b>Permissions Needed:</b> GET
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIQuestionTemplateResource*
-(NSURLSessionTask*) getQuestionTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIQuestionTemplateResource* output, NSError* error)) handler;


/// List and search question templates
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN or TRIVIA_ADMIN<br /><b>Permissions Needed:</b> LIST
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
/// @return JSAPIPageResourceQuestionTemplateResource_*
-(NSURLSessionTask*) getQuestionTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceQuestionTemplateResource_* output, NSError* error)) handler;


/// List and search questions
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// @param filterSearch Filter for documents whose question, answers or tags contains provided string (optional)
/// @param filterIdset Filter for documents whose id is in the comma separated list provided (optional)
/// @param filterCategory Filter for questions with specified category, by id (optional)
/// @param filterTagset Filter for questions with specified tags (separated by comma) (optional)
/// @param filterTag Filter for questions with specified tag (optional)
/// @param filterType Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) (optional)
/// @param filterPublished Filter for questions currenctly published or not (optional)
/// @param filterImportId Filter for questions from a specific import job (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceQuestionResource_*
-(NSURLSessionTask*) getQuestionsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    filterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterTag: (NSString*) filterTag
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
    completionHandler: (void (^)(JSAPIPageResourceQuestionResource_* output, NSError* error)) handler;


/// Count questions based on filters
/// This is also provided by the list endpoint so you don't need to call this for pagination purposes. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param filterSearch Filter for documents whose question, answers or tags contains provided string (optional)
/// @param filterIdset Filter for documents whose id is in the comma separated list provided (optional)
/// @param filterCategory Filter for questions with specified category, by id (optional)
/// @param filterTag Filter for questions with specified tag (optional)
/// @param filterTagset Filter for questions with specified tags (separated by comma) (optional)
/// @param filterType Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) (optional)
/// @param filterPublished Filter for questions currenctly published or not (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPILongWrapper*
-(NSURLSessionTask*) getQuestionsCountWithFilterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTag: (NSString*) filterTag
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    completionHandler: (void (^)(JSAPILongWrapper* output, NSError* error)) handler;


/// Start processing an import job
/// Will process the CSV file and add new questions asynchronously. The status of the job must be 'VALID'. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the job
/// @param publishNow Whether the new questions should be published live immediately
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIImportJobResource*
-(NSURLSessionTask*) processImportJobWithId: (NSNumber*) _id
    publishNow: (NSNumber*) publishNow
    completionHandler: (void (^)(JSAPIImportJobResource* output, NSError* error)) handler;


/// Remove a tag from a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the question
/// @param tag The tag to remove
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) removeQuestionTagWithId: (NSString*) _id
    tag: (NSString*) tag
    completionHandler: (void (^)(NSError* error)) handler;


/// Remove a tag from a batch of questions
/// ll questions that have the tag and match filters will have it removed. The returned number is the number of questions updated. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param tag The tag to remove
/// @param filterSearch Filter for documents whose question, answers or tags contains provided string (optional)
/// @param filterIdset Filter for documents whose id is in the comma separated list provided (optional)
/// @param filterCategory Filter for questions with specified category, by id (optional)
/// @param filterTag Filter for questions with specified tag (optional)
/// @param filterTagset Filter for questions with specified tags (separated by comma) (optional)
/// @param filterType Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) (optional)
/// @param filterPublished Filter for questions currenctly published or not (optional)
/// @param filterImportId Filter for questions from a specific import job (optional)
/// 
///  code:200 message:"The number of records updated",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSNumber*
-(NSURLSessionTask*) removeTagToQuestionsBatchWithTag: (NSString*) tag
    filterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTag: (NSString*) filterTag
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
    completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;


/// List and search tags by the beginning of the string
/// For performance reasons, search & category filters are mutually exclusive. If category is specified, search filter will be ignored in order to do fast matches for typeahead. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param filterSearch Filter for tags starting with the given text (optional)
/// @param filterCategory Filter for tags on questions from a specific category (optional)
/// @param filterImportId Filter for tags on questions from a specific import job (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceString_*
-(NSURLSessionTask*) searchQuestionTagsWithFilterSearch: (NSString*) filterSearch
    filterCategory: (NSString*) filterCategory
    filterImportId: (NSNumber*) filterImportId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceString_* output, NSError* error)) handler;


/// Update an import job
/// Changes should be made before process is started for there to be any effect. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the job
/// @param request The updated job (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIImportJobResource*
-(NSURLSessionTask*) updateImportJobWithId: (NSNumber*) _id
    request: (JSAPIImportJobResource*) request
    completionHandler: (void (^)(JSAPIImportJobResource* output, NSError* error)) handler;


/// Update a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param _id The id of the question
/// @param question The updated question (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIQuestionResource*
-(NSURLSessionTask*) updateQuestionWithId: (NSString*) _id
    question: (JSAPIQuestionResource*) question
    completionHandler: (void (^)(JSAPIQuestionResource* output, NSError* error)) handler;


/// Update an answer for a question
/// <b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param questionId The id of the question
/// @param _id The id of the answer
/// @param answer The updated answer (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateQuestionAnswerWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
    answer: (JSAPIAnswerResource*) answer
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a question template
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN<br /><b>Permissions Needed:</b> PUT
///
/// @param _id The id of the template
/// @param templatePatchResource The patch resource object (optional)
/// @param testValidation If true, this will test validation but not submit the patch request (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return JSAPIQuestionTemplateResource*
-(NSURLSessionTask*) updateQuestionTemplateWithId: (NSString*) _id
    templatePatchResource: (JSAPIPatchResource*) templatePatchResource
    testValidation: (NSNumber*) testValidation
    completionHandler: (void (^)(JSAPIQuestionTemplateResource* output, NSError* error)) handler;


/// Bulk update questions
/// Will update all questions that match filters used (or all questions in system if no filters used). Body should match a question resource with only those properties you wish to set. Null values will be ignored. Returned number is how many were updated. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN
///
/// @param question New values for a set of question fields (optional)
/// @param filterSearch Filter for documents whose question, answers or tags contains provided string (optional)
/// @param filterIdset Filter for documents whose id is in the comma separated list provided (optional)
/// @param filterCategory Filter for questions with specified category, by id (optional)
/// @param filterTagset Filter for questions with specified tags (separated by comma) (optional)
/// @param filterType Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) (optional)
/// @param filterPublished Filter for questions currenctly published or not (optional)
/// @param filterImportId Filter for questions from a specific import job (optional)
/// 
///  code:200 message:"The number of records updated",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSNumber*
-(NSURLSessionTask*) updateQuestionsInBulkWithQuestion: (JSAPIQuestionResource*) question
    filterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
    completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;



@end
