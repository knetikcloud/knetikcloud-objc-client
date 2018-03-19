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


#import "JSAPIRewardCurrencyResource.h"
#import "JSAPIRewardItemResource.h"
#import "JSAPISimpleUserResource.h"
@protocol JSAPIRewardCurrencyResource;
@class JSAPIRewardCurrencyResource;
@protocol JSAPIRewardItemResource;
@class JSAPIRewardItemResource;
@protocol JSAPISimpleUserResource;
@class JSAPISimpleUserResource;



@protocol JSAPIUserActivityResults
@end

@interface JSAPIUserActivityResults : JSAPIObject

/* Any currency rewarded to this user [optional]
 */
@property(nonatomic) NSArray<JSAPIRewardCurrencyResource>* currencyRewards;
/* Any items rewarded to this user [optional]
 */
@property(nonatomic) NSArray<JSAPIRewardItemResource>* itemRewards;
/* The position of the user in the leaderboard. Null means non-compete or disqualification [optional]
 */
@property(nonatomic) NSNumber* rank;
/* The raw score in this leaderboard. Null means non-compete or disqualification [optional]
 */
@property(nonatomic) NSNumber* score;
/* Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 10 tags and 50 characters each [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* The number of users tied at this rank, including this user. 1 means no tie [optional]
 */
@property(nonatomic) NSNumber* ties;
/* The date this score was recorded or updated. Unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The player for this entry 
 */
@property(nonatomic) JSAPISimpleUserResource* user;

+ (NSDictionary *)modalDictionary;

@end