#import <Foundation/Foundation.h>
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



@interface JSAPISearchApi: NSObject <JSAPIApi>

extern NSString* kJSAPISearchApiErrorDomain;
extern NSInteger kJSAPISearchApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Count matches with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchCountGETWithType: (NSString*) type
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Count matches with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param query The query to be used for the search (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchCountPOSTWithType: (NSString*) type
    query: (NSObject*) query
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Count matches with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param template The index template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchCountWithTemplateGETWithType: (NSString*) type
    template: (NSString*) template
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Count matches with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param template The index template
/// @param query The query to be used for the search (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchCountWithTemplatePOSTWithType: (NSString*) type
    template: (NSString*) template
    query: (NSObject*) query
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Get document with no template
/// This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param _id The index id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchDocumentGETWithType: (NSString*) type
    _id: (NSString*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Get document with a template
/// This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param _id The index id
/// @param template The index template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchDocumentWithTemplateGETWithType: (NSString*) type
    _id: (NSString*) _id
    template: (NSString*) template
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Explain matches with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param _id The index id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchExplainGETWithType: (NSString*) type
    _id: (NSString*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Explain matches with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param _id The index id
/// @param query The query to be used for the search (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchExplainPOSTWithType: (NSString*) type
    _id: (NSString*) _id
    query: (NSObject*) query
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Explain matches with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param _id The index id
/// @param template The index template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchExplainWithTemplateGETWithType: (NSString*) type
    _id: (NSString*) _id
    template: (NSString*) template
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Explain matches with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param _id The index id
/// @param template The index template
/// @param query The query to be used for the search (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchExplainWithTemplatePOSTWithType: (NSString*) type
    _id: (NSString*) _id
    template: (NSString*) template
    query: (NSObject*) query
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Search an index with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param query The query to be used for the search (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchIndexWithType: (NSString*) type
    query: (NSObject*) query
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Search an index with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchIndexGETWithType: (NSString*) type
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Search an index with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param template The index template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchIndexWithTemplateGETWithType: (NSString*) type
    template: (NSString*) template
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Search an index with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param template The index template
/// @param query The query to be used for the search (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchIndexWithTemplatePOSTWithType: (NSString*) type
    template: (NSString*) template
    query: (NSObject*) query
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Get indices
/// This is a 1 to 1 mapping of a ElasticSearch call to _cat/indices for indices.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchIndicesGETWithCompletionHandler: 
    (void (^)(NSObject* output, NSError* error)) handler;


/// Get mapping with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchMappingsGETWithType: (NSString*) type
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Get mapping with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param template The index template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchMappingsWithTemplateGETWithType: (NSString*) type
    template: (NSString*) template
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Validate matches with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchValidateGETWithType: (NSString*) type
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Validate matches with no template
/// This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param query The query to be used for the search (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchValidatePOSTWithType: (NSString*) type
    query: (NSObject*) query
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Validate matches with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param template The index template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchValidateWithTemplateGETWithType: (NSString*) type
    template: (NSString*) template
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Validate matches with a template
/// This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN
///
/// @param type The index type
/// @param template The index template
/// @param query The query to be used for the search (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) searchValidateWithTemplatePOSTWithType: (NSString*) type
    template: (NSString*) template
    query: (NSObject*) query
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end