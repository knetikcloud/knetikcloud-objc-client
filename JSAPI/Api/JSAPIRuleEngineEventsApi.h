#import <Foundation/Foundation.h>
#import "JSAPIBreEvent.h"
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



@interface JSAPIRuleEngineEventsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIRuleEngineEventsApiErrorDomain;
extern NSInteger kJSAPIRuleEngineEventsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Fire a new event, based on an existing trigger
/// Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.  Returns request id, which will be used as the event id. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_EVENTS_USER
///
/// @param breEvent The BRE event object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIStringWrapper*
-(NSURLSessionTask*) sendBREEventWithBreEvent: (JSAPIBreEvent*) breEvent
    completionHandler: (void (^)(JSAPIStringWrapper* output, NSError* error)) handler;



@end
