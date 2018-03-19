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


#import "JSAPIPropertyDefinitionResource.h"
#import "JSAPIPropertyFieldListResource.h"
@protocol JSAPIPropertyDefinitionResource;
@class JSAPIPropertyDefinitionResource;
@protocol JSAPIPropertyFieldListResource;
@class JSAPIPropertyFieldListResource;



@protocol JSAPIImagePropertyDefinitionResource
@end

@interface JSAPIImagePropertyDefinitionResource : JSAPIPropertyDefinitionResource

/* If provided, a file type that the property must match [optional]
 */
@property(nonatomic) NSString* fileType;
/* If provided, the maximum height of the image [optional]
 */
@property(nonatomic) NSNumber* maxHeight;
/* If provided, the maximum width of the image [optional]
 */
@property(nonatomic) NSNumber* maxWidth;
/* If provided, the minimum height of the image [optional]
 */
@property(nonatomic) NSNumber* minHeight;
/* If provided, the minimum width of the image [optional]
 */
@property(nonatomic) NSNumber* minWidth;


@end