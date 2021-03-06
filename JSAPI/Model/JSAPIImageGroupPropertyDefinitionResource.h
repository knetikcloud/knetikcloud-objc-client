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


#import "JSAPIFileGroupPropertyDefinitionResource.h"
@protocol JSAPIFileGroupPropertyDefinitionResource;
@class JSAPIFileGroupPropertyDefinitionResource;



@protocol JSAPIImageGroupPropertyDefinitionResource
@end

@interface JSAPIImageGroupPropertyDefinitionResource : JSAPIFileGroupPropertyDefinitionResource

/* If provided, the maximum height of each image [optional]
 */
@property(nonatomic) NSNumber* maxHeight;
/* If provided, the maximum width of each image [optional]
 */
@property(nonatomic) NSNumber* maxWidth;
/* If provided, the minimum height of each image [optional]
 */
@property(nonatomic) NSNumber* minHeight;
/* If provided, the minumum width of each image [optional]
 */
@property(nonatomic) NSNumber* minWidth;


@end
