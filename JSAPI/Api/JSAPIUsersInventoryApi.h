#import <Foundation/Foundation.h>
#import "JSAPIEntitlementGrantRequest.h"
#import "JSAPIEntitlementItem.h"
#import "JSAPIInventoryStatusWrapper.h"
#import "JSAPIInvoiceResource.h"
#import "JSAPIItemTemplateResource.h"
#import "JSAPIPageResourceEntitlementItem_.h"
#import "JSAPIPageResourceItemTemplateResource_.h"
#import "JSAPIPageResourceUserInventoryResource_.h"
#import "JSAPIPageResourceUserItemLogResource_.h"
#import "JSAPIPatchResource.h"
#import "JSAPIResult.h"
#import "JSAPIUserInventoryAddRequest.h"
#import "JSAPIUserInventoryResource.h"
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



@interface JSAPIUsersInventoryApi: NSObject <JSAPIApi>

extern NSString* kJSAPIUsersInventoryApiErrorDomain;
extern NSInteger kJSAPIUsersInventoryApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Adds an item to the user inventory
/// The inventory is fulfilled asynchronously UNLESS the invoice is explicitely skipped. Depending on the use case, it might require the client to verify that the entitlement was added after the fact or configure a BRE rule to get a notification in real time. <br><br><b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param _id The id of the user
/// @param userInventoryAddRequest The user inventory add request object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIInvoiceResource*
-(NSURLSessionTask*) addItemToUserInventoryWithId: (NSNumber*) _id
    userInventoryAddRequest: (JSAPIUserInventoryAddRequest*) userInventoryAddRequest
    completionHandler: (void (^)(JSAPIInvoiceResource* output, NSError* error)) handler;


/// Check for access to an item without consuming
/// Useful for pre-check and accounts for all various buisness rules. <br><br><b>Permissions Needed:</b> INVENTORY_ADMIN or owner
///
/// @param userId The id of the user to check for or &#39;me&#39; for logged in user
/// @param itemId The id of the item
/// @param sku The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) checkUserEntitlementItemWithUserId: (NSString*) userId
    itemId: (NSNumber*) itemId
    sku: (NSString*) sku
    completionHandler: (void (^)(NSError* error)) handler;


/// Create an entitlement item
/// <b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
/// @param entitlementItem The entitlement item object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIEntitlementItem*
-(NSURLSessionTask*) createEntitlementItemWithCascade: (NSNumber*) cascade
    entitlementItem: (JSAPIEntitlementItem*) entitlementItem
    completionHandler: (void (^)(JSAPIEntitlementItem* output, NSError* error)) handler;


/// Create an entitlement template
/// Entitlement templates define a type of entitlement and the properties they have.<br /><b>Permissions Needed:</b> POST
///
/// @param template The entitlement template to be created (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) createEntitlementTemplateWithTemplate: (JSAPIItemTemplateResource*) template
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// Delete an entitlement item
/// <b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param entitlementId The id of the entitlement
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteEntitlementItemWithEntitlementId: (NSNumber*) entitlementId
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an entitlement template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects.<br /><b>Permissions Needed:</b> DELETE
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteEntitlementTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single entitlement item
/// <b>Permissions Needed:</b> ANY
///
/// @param entitlementId The id of the entitlement
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIEntitlementItem*
-(NSURLSessionTask*) getEntitlementItemWithEntitlementId: (NSNumber*) entitlementId
    completionHandler: (void (^)(JSAPIEntitlementItem* output, NSError* error)) handler;


/// List and search entitlement items
/// <b>Permissions Needed:</b> ANY
///
/// @param filterTemplate Filter for entitlements using a specified template (optional)
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
/// @return JSAPIPageResourceEntitlementItem_*
-(NSURLSessionTask*) getEntitlementItemsWithFilterTemplate: (NSString*) filterTemplate
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceEntitlementItem_* output, NSError* error)) handler;


/// Get a single entitlement template
/// <b>Permissions Needed:</b> GET
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) getEntitlementTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// List and search entitlement templates
/// <b>Permissions Needed:</b> LIST
///
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
/// @return JSAPIPageResourceItemTemplateResource_*
-(NSURLSessionTask*) getEntitlementTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;


/// List the user inventory entries for all users
/// <b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param inactive If true, accepts inactive user inventories (optional) (default to false)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param filterItemName Filter by items whose name starts with a string (optional)
/// @param filterItemId Filter by item id (optional)
/// @param filterUsername Filter by entries owned by the user with the specified username (optional)
/// @param filterGroup Filter by entries owned by the users in a given group, by unique name (optional)
/// @param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUserInventoryResource_*
-(NSURLSessionTask*) getInventoryListWithInactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterItemId: (NSNumber*) filterItemId
    filterUsername: (NSString*) filterUsername
    filterGroup: (NSString*) filterGroup
    filterDate: (NSString*) filterDate
    completionHandler: (void (^)(JSAPIPageResourceUserInventoryResource_* output, NSError* error)) handler;


/// List the user inventory entries for a given user
/// <b>Permissions Needed:</b> INVENTORY_ADMIN or owner
///
/// @param _id The id of the user
/// @param inactive If true, accepts inactive user inventories (optional) (default to false)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param filterItemName Filter by items whose name starts with a string (optional)
/// @param filterItemId Filter by item id (optional)
/// @param filterUsername Filter by entries owned by the user with the specified username (optional)
/// @param filterGroup Filter by entries owned by the users in a given group, by unique name (optional)
/// @param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUserInventoryResource_*
-(NSURLSessionTask*) getUserInventoriesWithId: (NSNumber*) _id
    inactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterItemId: (NSNumber*) filterItemId
    filterUsername: (NSString*) filterUsername
    filterGroup: (NSString*) filterGroup
    filterDate: (NSString*) filterDate
    completionHandler: (void (^)(JSAPIPageResourceUserInventoryResource_* output, NSError* error)) handler;


/// Get an inventory entry
/// <b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param userId The id of the inventory owner or &#39;me&#39; for the logged in user
/// @param _id The id of the user inventory
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIUserInventoryResource*
-(NSURLSessionTask*) getUserInventoryWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIUserInventoryResource* output, NSError* error)) handler;


/// List the log entries for this inventory entry
/// <b>Permissions Needed:</b> INVENTORY_ADMIN or owner
///
/// @param userId The id of the inventory owner or &#39;me&#39; for the logged in user
/// @param _id The id of the user inventory
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUserItemLogResource_*
-(NSURLSessionTask*) getUserInventoryLogWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUserItemLogResource_* output, NSError* error)) handler;


/// Grant an entitlement
/// <b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param userId The id of the user to grant the entitlement to
/// @param grantRequest grantRequest
/// 
///  code:202 message:"Accepted",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) grantUserEntitlementWithUserId: (NSNumber*) userId
    grantRequest: (JSAPIEntitlementGrantRequest*) grantRequest
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an entitlement item
/// <b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param entitlementId The id of the entitlement
/// @param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
/// @param entitlementItem The entitlement item object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateEntitlementItemWithEntitlementId: (NSNumber*) entitlementId
    cascade: (NSNumber*) cascade
    entitlementItem: (JSAPIEntitlementItem*) entitlementItem
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an entitlement template
/// <b>Permissions Needed:</b> PUT
///
/// @param _id The id of the template
/// @param templatePatchResource The patch resource object (optional)
/// @param testValidation If true, this will test validation but not submit the patch request (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return JSAPIItemTemplateResource*
-(NSURLSessionTask*) updateEntitlementTemplateWithId: (NSString*) _id
    templatePatchResource: (JSAPIPatchResource*) templatePatchResource
    testValidation: (NSNumber*) testValidation
    completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;


/// Set the behavior data for an inventory entry
/// <b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param userId The id of the user
/// @param _id The id of the user inventory
/// @param data The data map (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateUserInventoryBehaviorDataWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    data: (NSObject*) data
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the expiration date
/// Will change the current grace period for a subscription but not the bill date (possibly even ending before having the chance to re-bill). <br><br><b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param userId user_id
/// @param _id The id of the user inventory
/// @param timestamp The new expiration date as a unix timestamp in seconds. May be null (no body). (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateUserInventoryExpiresWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    timestamp: (NSNumber*) timestamp
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the status for an inventory entry
/// <b>Permissions Needed:</b> INVENTORY_ADMIN
///
/// @param userId The id of the user
/// @param _id The id of the user inventory
/// @param inventoryStatus The inventory status object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateUserInventoryStatusWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    inventoryStatus: (JSAPIInventoryStatusWrapper*) inventoryStatus
    completionHandler: (void (^)(NSError* error)) handler;


/// Use an item
/// <b>Permissions Needed:</b> INVENTORY_ADMIN or owner
///
/// @param userId The id of the user to check for or &#39;me&#39; for logged in user
/// @param itemId The id of the item
/// @param sku The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)
/// @param info Any additional info to add to the log about this use (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) useUserEntitlementItemWithUserId: (NSString*) userId
    itemId: (NSNumber*) itemId
    sku: (NSString*) sku
    info: (NSString*) info
    completionHandler: (void (^)(NSError* error)) handler;



@end
