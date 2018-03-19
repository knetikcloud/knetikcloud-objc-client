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





@protocol JSAPIDiscount
@end

@interface JSAPIDiscount : JSAPIObject


@property(nonatomic) NSString* _description;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* sku;

@property(nonatomic) NSString* uniqueKey;

@property(nonatomic) NSNumber* value;

+ (NSDictionary *)modalDictionary;

@end