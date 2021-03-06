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





@protocol JSAPIBundledSku
@end

@interface JSAPIBundledSku : JSAPIObject

/* The amount this item will cost inside the bundle instead of its regular price [optional]
 */
@property(nonatomic) NSNumber* priceOverride;
/* The quantity of this item within the bundle 
 */
@property(nonatomic) NSNumber* quantity;
/* The stock keeping unit (SKU) for an item included in the bundle 
 */
@property(nonatomic) NSString* sku;

+ (NSDictionary *)modalDictionary;

@end
