#import <Foundation/Foundation.h>
#import "JSAPIMetricResource.h"
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



@interface JSAPIGamificationMetricsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIGamificationMetricsApiErrorDomain;
extern NSInteger kJSAPIGamificationMetricsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Add a metric
/// Post a new score/stat for an activity occurrence without ending the occurrence itself
///
/// @param metric The new metric (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) addMetricWithMetric: (JSAPIMetricResource*) metric
    completionHandler: (void (^)(NSError* error)) handler;



@end
