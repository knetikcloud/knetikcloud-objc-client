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


#import "JSAPILeaderboardEntryResource.h"
@protocol JSAPILeaderboardEntryResource;
@class JSAPILeaderboardEntryResource;



@protocol JSAPILeaderboardResource
@end

@interface JSAPILeaderboardResource : JSAPIObject

/* The paginated list of user results, in order from best to worst [optional]
 */
@property(nonatomic) NSArray<JSAPILeaderboardEntryResource>* entries;
/* The id of the leaderboard [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The name of the strategy that defines how entries are stored and compared [optional]
 */
@property(nonatomic) NSString* strategy;

+ (NSDictionary *)modalDictionary;

@end
