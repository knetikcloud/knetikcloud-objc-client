#import <Foundation/Foundation.h>
#import "JSAPIPageResourceUsageInfo_.h"
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



@interface JSAPIReportingUsageApi: NSObject <JSAPIApi>

extern NSString* kJSAPIReportingUsageApiErrorDomain;
extern NSInteger kJSAPIReportingUsageApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Returns aggregated endpoint usage information by day
/// <b>Permissions Needed:</b> USAGE_ADMIN
///
/// @param startDate The beginning of the range being requested, unix timestamp in seconds
/// @param endDate The ending of the range being requested, unix timestamp in seconds
/// @param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
/// @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
/// @param url Filter for a certain endpoint.  Must include method as well to work (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUsageInfo_*
-(NSURLSessionTask*) getUsageByDayWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;


/// Returns aggregated endpoint usage information by hour
/// <b>Permissions Needed:</b> USAGE_ADMIN
///
/// @param startDate The beginning of the range being requested, unix timestamp in seconds
/// @param endDate The ending of the range being requested, unix timestamp in seconds
/// @param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
/// @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
/// @param url Filter for a certain endpoint.  Must include method as well to work (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUsageInfo_*
-(NSURLSessionTask*) getUsageByHourWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;


/// Returns aggregated endpoint usage information by minute
/// <b>Permissions Needed:</b> USAGE_ADMIN
///
/// @param startDate The beginning of the range being requested, unix timestamp in seconds
/// @param endDate The ending of the range being requested, unix timestamp in seconds
/// @param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
/// @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
/// @param url Filter for a certain endpoint.  Must include method as well to work (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUsageInfo_*
-(NSURLSessionTask*) getUsageByMinuteWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;


/// Returns aggregated endpoint usage information by month
/// <b>Permissions Needed:</b> USAGE_ADMIN
///
/// @param startDate The beginning of the range being requested, unix timestamp in seconds
/// @param endDate The ending of the range being requested, unix timestamp in seconds
/// @param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
/// @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
/// @param url Filter for a certain endpoint.  Must include method as well to work (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUsageInfo_*
-(NSURLSessionTask*) getUsageByMonthWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;


/// Returns aggregated endpoint usage information by year
/// <b>Permissions Needed:</b> USAGE_ADMIN
///
/// @param startDate The beginning of the range being requested, unix timestamp in seconds
/// @param endDate The ending of the range being requested, unix timestamp in seconds
/// @param combineEndpoints Whether to combine counts from different endpoints. Removes the url and method from the result object (optional) (default to false)
/// @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
/// @param url Filter for a certain endpoint.  Must include method as well to work (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUsageInfo_*
-(NSURLSessionTask*) getUsageByYearWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;


/// Returns list of endpoints called (method and url)
/// <b>Permissions Needed:</b> USAGE_ADMIN
///
/// @param startDate The beginning of the range being requested, unix timestamp in seconds
/// @param endDate The ending of the range being requested, unix timestamp in seconds
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<NSString*>*
-(NSURLSessionTask*) getUsageEndpointsWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;



@end