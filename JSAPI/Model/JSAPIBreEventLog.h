#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

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


#import "JSAPIBreRuleLog.h"
@protocol JSAPIBreRuleLog;
@class JSAPIBreRuleLog;



@protocol JSAPIBreEventLog
@end

@interface JSAPIBreEventLog : JSAPIObject

/* The difference between received and handlded in ms [optional]
 */
@property(nonatomic) NSNumber* age;
/* The customer [optional]
 */
@property(nonatomic) NSString* customer;
/* The time it took to expand the event parameters [optional]
 */
@property(nonatomic) NSNumber* eventExpansionDuration;
/* The event id [optional]
 */
@property(nonatomic) NSString* eventId;
/* The time it took to log the event in IO [optional]
 */
@property(nonatomic) NSNumber* eventLoggingDuration;
/* The event name [optional]
 */
@property(nonatomic) NSString* eventName;
/* The date the event was fired [optional]
 */
@property(nonatomic) NSNumber* eventReceivedDate;
/* The date the event was handled [optional]
 */
@property(nonatomic) NSNumber* eventStartDate;
/* The id [optional]
 */
@property(nonatomic) NSString* _id;
/* The event paramters [optional]
 */
@property(nonatomic) NSObject* parameters;
/* The rules [optional]
 */
@property(nonatomic) NSArray<JSAPIBreRuleLog>* rules;
/* The time it took to run all the rules for that event [optional]
 */
@property(nonatomic) NSNumber* runtime;

+ (NSDictionary *)modalDictionary;

@end
