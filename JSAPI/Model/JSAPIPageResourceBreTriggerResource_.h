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


#import "JSAPIBreTriggerResource.h"
#import "JSAPIOrder.h"
@protocol JSAPIBreTriggerResource;
@class JSAPIBreTriggerResource;
@protocol JSAPIOrder;
@class JSAPIOrder;



@protocol JSAPIPageResourceBreTriggerResource_
@end

@interface JSAPIPageResourceBreTriggerResource_ : JSAPIObject


@property(nonatomic) NSArray<JSAPIBreTriggerResource>* content;

@property(nonatomic) NSNumber* first;

@property(nonatomic) NSNumber* last;

@property(nonatomic) NSNumber* number;

@property(nonatomic) NSNumber* numberOfElements;

@property(nonatomic) NSNumber* size;

@property(nonatomic) NSArray<JSAPIOrder>* sort;

@property(nonatomic) NSNumber* totalElements;

@property(nonatomic) NSNumber* totalPages;

+ (NSDictionary *)modalDictionary;

@end
