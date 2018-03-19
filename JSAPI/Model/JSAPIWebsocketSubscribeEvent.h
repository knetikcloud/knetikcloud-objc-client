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


#import "JSAPIBroadcastableEvent.h"
#import "JSAPITopic.h"
#import "JSAPIUserResource.h"
@protocol JSAPIBroadcastableEvent;
@class JSAPIBroadcastableEvent;
@protocol JSAPITopic;
@class JSAPITopic;
@protocol JSAPIUserResource;
@class JSAPIUserResource;



@protocol JSAPIWebsocketSubscribeEvent
@end

@interface JSAPIWebsocketSubscribeEvent : JSAPIBroadcastableEvent


@property(nonatomic) JSAPITopic* topic;

@property(nonatomic) JSAPIUserResource* userResource;


@end