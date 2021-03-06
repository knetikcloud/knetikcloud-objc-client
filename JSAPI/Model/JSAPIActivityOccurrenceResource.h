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


#import "JSAPIActivityEntitlementResource.h"
#import "JSAPIActivityUserResource.h"
#import "JSAPICoreActivityOccurrenceSettings.h"
#import "JSAPISelectedSettingResource.h"
#import "JSAPISimpleUserResource.h"
@protocol JSAPIActivityEntitlementResource;
@class JSAPIActivityEntitlementResource;
@protocol JSAPIActivityUserResource;
@class JSAPIActivityUserResource;
@protocol JSAPICoreActivityOccurrenceSettings;
@class JSAPICoreActivityOccurrenceSettings;
@protocol JSAPISelectedSettingResource;
@class JSAPISelectedSettingResource;
@protocol JSAPISimpleUserResource;
@class JSAPISimpleUserResource;



@protocol JSAPIActivityOccurrenceResource
@end

@interface JSAPIActivityOccurrenceResource : JSAPIObject

/* The id of the activity 
 */
@property(nonatomic) NSNumber* activityId;
/* The ids of banned users that cannot join the occurrence. See occurrence-user delete endpoint [optional]
 */
@property(nonatomic) NSArray<NSNumber*>* bans;
/* The id of the challenge activity (as part of the event, required if eventId set) [optional]
 */
@property(nonatomic) NSNumber* challengeActivityId;
/* Defines core settings about the activity occurrence that affect how it behaves in the system. Validated against core settings in activity/challenge-activity. [optional]
 */
@property(nonatomic) JSAPICoreActivityOccurrenceSettings* coreSettings;
/* The date this occurrence was created, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity [optional]
 */
@property(nonatomic) JSAPIActivityEntitlementResource* entitlement;
/* The id of the event [optional]
 */
@property(nonatomic) NSNumber* eventId;
/* The host of the occurrence, if not a participant (will be left out of users array). Must be the caller that creates the occurrence unless admin. Requires activity/challenge to allow host_option of 'non_player' if not admin as well [optional]
 */
@property(nonatomic) JSAPISimpleUserResource* host;
/* The id of the activity occurrence [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Indicate if the rewards have been given out already [optional]
 */
@property(nonatomic) NSString* rewardStatus;
/* The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity. [optional]
 */
@property(nonatomic) NSArray<JSAPISelectedSettingResource>* settings;
/* Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials [optional]
 */
@property(nonatomic) NSNumber* simulated;
/* The date this occurrence was started, unix timestamp in seconds. null if not yet started [optional]
 */
@property(nonatomic) NSNumber* startDate;
/* The current status of the occurrence (default: OPEN) [optional]
 */
@property(nonatomic) NSString* status;
/* The date this occurrence was last updated, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission [optional]
 */
@property(nonatomic) NSArray<JSAPIActivityUserResource>* users;

+ (NSDictionary *)modalDictionary;

@end
