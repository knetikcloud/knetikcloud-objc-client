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


#import "JSAPISimpleUserResource.h"
@protocol JSAPISimpleUserResource;
@class JSAPISimpleUserResource;



@protocol JSAPIDispositionResource
@end

@interface JSAPIDispositionResource : JSAPIObject

/* The context of that resource. Required when passed to /dispositions rather than context specific endpoint [optional]
 */
@property(nonatomic) NSString* context;
/* The context_id of that resource. Required when passed to /dispositions rather than context specific endpoint [optional]
 */
@property(nonatomic) NSString* contextId;
/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The unique ID for that resource [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The name of the disposition, 1-20 characters. (ex: like/dislike/favorite, etc) 
 */
@property(nonatomic) NSString* name;
/* The user [optional]
 */
@property(nonatomic) JSAPISimpleUserResource* user;

+ (NSDictionary *)modalDictionary;

@end
