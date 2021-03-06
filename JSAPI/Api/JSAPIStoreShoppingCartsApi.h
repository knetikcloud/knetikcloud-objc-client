#import <Foundation/Foundation.h>
#import "JSAPICart.h"
#import "JSAPICartItemRequest.h"
#import "JSAPICartShippableResponse.h"
#import "JSAPICartShippingAddressRequest.h"
#import "JSAPICouponDefinition.h"
#import "JSAPIIntWrapper.h"
#import "JSAPIPageResourceCartSummary_.h"
#import "JSAPIResult.h"
#import "JSAPISampleCountriesResponse.h"
#import "JSAPISkuRequest.h"
#import "JSAPIStringWrapper.h"
#import "JSAPIApi.h"

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



@interface JSAPIStoreShoppingCartsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIStoreShoppingCartsApiErrorDomain;
extern NSInteger kJSAPIStoreShoppingCartsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Adds a custom discount to the cart
/// <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN
///
/// @param _id The id of the cart
/// @param customDiscount The details of the discount to add (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) addCustomDiscountWithId: (NSString*) _id
    customDiscount: (JSAPICouponDefinition*) customDiscount
    completionHandler: (void (^)(NSError* error)) handler;


/// Adds a discount coupon to the cart
/// <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// @param skuRequest The request of the sku (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) addDiscountToCartWithId: (NSString*) _id
    skuRequest: (JSAPISkuRequest*) skuRequest
    completionHandler: (void (^)(NSError* error)) handler;


/// Add an item to the cart
/// Currently, carts cannot contain virtual and real currency items at the same time. Furthermore, the API only support a single virtual item at the moment. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// @param cartItemRequest The cart item request object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) addItemToCartWithId: (NSString*) _id
    cartItemRequest: (JSAPICartItemRequest*) cartItemRequest
    completionHandler: (void (^)(NSError* error)) handler;


/// Create a cart
/// You don't have to have a user to create a cart but the API requires authentication to checkout. <br><br><b>Permissions Needed:</b> ANY
///
/// @param owner Set the owner of a cart. If not specified, defaults to the calling user&#39;s id. If specified and is not the calling user&#39;s id, SHOPPING_CARTS_ADMIN permission is required (optional)
/// @param currencyCode Set the currency for the cart, by currency code. May be disallowed by site settings. (optional)
/// 
///  code:200 message:"the cart has been created, use the returned GUID to manage the cart",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIStringWrapper*
-(NSURLSessionTask*) createCartWithOwner: (NSNumber*) owner
    currencyCode: (NSString*) currencyCode
    completionHandler: (void (^)(JSAPIStringWrapper* output, NSError* error)) handler;


/// Returns the cart with the given GUID
/// <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICart*
-(NSURLSessionTask*) getCartWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPICart* output, NSError* error)) handler;


/// Get a list of carts
/// <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param filterOwnerId Filter by the id of the owner (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceCartSummary_*
-(NSURLSessionTask*) getCartsWithFilterOwnerId: (NSNumber*) filterOwnerId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceCartSummary_* output, NSError* error)) handler;


/// Returns whether a cart requires shipping
/// <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPICartShippableResponse*
-(NSURLSessionTask*) getShippableWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPICartShippableResponse* output, NSError* error)) handler;


/// Get the list of available shipping countries per vendor
/// Since a cart can have multiple vendors with different shipping options, the countries are broken down by vendors. Please see notes about the response object as the fields are variable. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPISampleCountriesResponse*
-(NSURLSessionTask*) getShippingCountriesWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPISampleCountriesResponse* output, NSError* error)) handler;


/// Removes a discount coupon from the cart
/// <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// @param code The SKU code of the coupon to remove
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) removeDiscountFromCartWithId: (NSString*) _id
    code: (NSString*) code
    completionHandler: (void (^)(NSError* error)) handler;


/// Sets the currency to use for the cart
/// May be disallowed by site settings. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// @param currencyCode The code of the currency (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setCartCurrencyWithId: (NSString*) _id
    currencyCode: (JSAPIStringWrapper*) currencyCode
    completionHandler: (void (^)(NSError* error)) handler;


/// Sets the owner of a cart if none is set already
/// <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// @param userId The id of the user (optional)
/// 
///  code:202 message:"Accepted",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setCartOwnerWithId: (NSString*) _id
    userId: (JSAPIIntWrapper*) userId
    completionHandler: (void (^)(NSError* error)) handler;


/// Changes the quantity of an item already in the cart
/// A quantity of zero will remove the item from the cart altogether. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// @param cartItemRequest The cart item request object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateItemInCartWithId: (NSString*) _id
    cartItemRequest: (JSAPICartItemRequest*) cartItemRequest
    completionHandler: (void (^)(NSError* error)) handler;


/// Modifies or sets the order shipping address
/// <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
///
/// @param _id The id of the cart
/// @param cartShippingAddressRequest The cart shipping address request object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateShippingAddressWithId: (NSString*) _id
    cartShippingAddressRequest: (JSAPICartShippingAddressRequest*) cartShippingAddressRequest
    completionHandler: (void (^)(NSError* error)) handler;



@end
