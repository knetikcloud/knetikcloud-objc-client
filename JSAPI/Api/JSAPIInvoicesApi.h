#import <Foundation/Foundation.h>
#import "JSAPIAddressResource.h"
#import "JSAPIInvoiceCreateRequest.h"
#import "JSAPIInvoicePaymentStatusRequest.h"
#import "JSAPIInvoiceResource.h"
#import "JSAPIPageResourceInvoiceLogEntry_.h"
#import "JSAPIPageResourceInvoiceResource_.h"
#import "JSAPIPageResourceString_.h"
#import "JSAPIPageResourceTemplateResource_.h"
#import "JSAPIPatchResource.h"
#import "JSAPIPayBySavedMethodRequest.h"
#import "JSAPIResult.h"
#import "JSAPIStringWrapper.h"
#import "JSAPITemplateResource.h"
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



@interface JSAPIInvoicesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIInvoicesApiErrorDomain;
extern NSInteger kJSAPIInvoicesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create an invoice
/// Create an invoice(s) by providing a cart GUID. Note that there may be multiple invoices created, one per vendor. <br><br><b>Permissions Needed:</b> INVOICES_USER or INVOICES_ADMIN
///
/// @param req Invoice to be created (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIInvoiceResource>*
-(NSURLSessionTask*) createInvoiceWithReq: (JSAPIInvoiceCreateRequest*) req
    completionHandler: (void (^)(NSArray<JSAPIInvoiceResource>* output, NSError* error)) handler;


/// Create a invoice template
/// Invoice templates define a type of invoice and the properties they have.
///
/// @param invoiceTemplateResource The invoice template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) createInvoiceTemplateWithInvoiceTemplateResource: (JSAPITemplateResource*) invoiceTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Delete a invoice template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects.
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
-(NSURLSessionTask*) deleteInvoiceTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Lists available fulfillment statuses
/// <b>Permissions Needed:</b> ANY
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceString_*
-(NSURLSessionTask*) getFulFillmentStatusesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceString_* output, NSError* error)) handler;


/// Retrieve an invoice
/// <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIInvoiceResource*
-(NSURLSessionTask*) getInvoiceWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIInvoiceResource* output, NSError* error)) handler;


/// List invoice logs
/// <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceInvoiceLogEntry_*
-(NSURLSessionTask*) getInvoiceLogsWithId: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceInvoiceLogEntry_* output, NSError* error)) handler;


/// Get a single invoice template
/// 
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) getInvoiceTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// List and search invoice templates
/// 
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
/// @return JSAPIPageResourceTemplateResource_*
-(NSURLSessionTask*) getInvoiceTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;


/// Retrieve invoices
/// Without INVOICES_ADMIN permission the results are automatically filtered for only the logged in user's invoices. It is recomended however that filter_user be added to avoid issues for admin users accidentally getting additional invoices. <br><br><b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
///
/// @param filterUser The id of a user to get invoices for. Automtically added if not being called with admin permissions. (optional)
/// @param filterEmail Filters invoices by customer&#39;s email. Admins only. (optional)
/// @param filterFulfillmentStatus Filters invoices by fulfillment status type. Can be a comma separated list of statuses (optional)
/// @param filterPaymentStatus Filters invoices by payment status type. Can be a comma separated list of statuses (optional)
/// @param filterItemName Filters invoices by item name containing the given string (optional)
/// @param filterExternalRef Filters invoices by external reference. (optional)
/// @param filterCreatedDate Filters invoices by creation date. Multiple values possible for range search. Format: filter_created_date&#x3D;OP,ts&amp;... where OP in (GT, LT, GOE, LOE, EQ) and ts is a unix timestamp in seconds. Ex: filter_created_date&#x3D;GT,1452154258,LT,1554254874 (optional)
/// @param filterVendorIds Filters invoices for ones from one of the vendors whose id is in the given comma separated list (optional)
/// @param filterCurrency Filters invoices by currency. ISO3 currency code (optional)
/// @param filterShippingStateName Filters invoices by shipping address: Exact match state name (optional)
/// @param filterShippingCountryName Filters invoices by shipping address: Exact match country name (optional)
/// @param filterShipping Filters invoices by shipping price. Multiple values possible for range search. Format: filter_shipping&#x3D;OP,ts&amp;... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_shipping&#x3D;GT,14.58,LT,15.54 (optional)
/// @param filterVendorName Filters invoices by vendor name starting with given string (optional)
/// @param filterSku Filters invoices by item sku (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceInvoiceResource_*
-(NSURLSessionTask*) getInvoicesWithFilterUser: (NSNumber*) filterUser
    filterEmail: (NSString*) filterEmail
    filterFulfillmentStatus: (NSString*) filterFulfillmentStatus
    filterPaymentStatus: (NSString*) filterPaymentStatus
    filterItemName: (NSString*) filterItemName
    filterExternalRef: (NSString*) filterExternalRef
    filterCreatedDate: (NSString*) filterCreatedDate
    filterVendorIds: (NSString*) filterVendorIds
    filterCurrency: (NSString*) filterCurrency
    filterShippingStateName: (NSString*) filterShippingStateName
    filterShippingCountryName: (NSString*) filterShippingCountryName
    filterShipping: (NSString*) filterShipping
    filterVendorName: (NSString*) filterVendorName
    filterSku: (NSString*) filterSku
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceInvoiceResource_* output, NSError* error)) handler;


/// Lists available payment statuses
/// <b>Permissions Needed:</b> ANY
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceString_*
-(NSURLSessionTask*) getPaymentStatusesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceString_* output, NSError* error)) handler;


/// Pay an invoice using a saved payment method
/// <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// @param request The payment method details. Will default to the appropriate user&#39;s wallet in the invoice currency if ommited. (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIStringWrapper*
-(NSURLSessionTask*) payInvoiceWithId: (NSNumber*) _id
    request: (JSAPIPayBySavedMethodRequest*) request
    completionHandler: (void (^)(JSAPIStringWrapper* output, NSError* error)) handler;


/// Set the fulfillment status of a bundled invoice item
/// This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// @param bundleSku The sku of the bundle in the invoice that contains the given target
/// @param sku The sku of an item in the bundle in the invoice
/// @param status The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  &#39;unfulfilled&#39;, &#39;fulfilled&#39;, &#39;not fulfillable&#39;, &#39;failed&#39;, &#39;processing&#39;, &#39;failed_permanent&#39;, &#39;delayed&#39;
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setBundledInvoiceItemFulfillmentStatusWithId: (NSNumber*) _id
    bundleSku: (NSString*) bundleSku
    sku: (NSString*) sku
    status: (JSAPIStringWrapper*) status
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the external reference of an invoice
/// <b>Permissions Needed:</b> INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// @param externalRef External reference info (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setExternalRefWithId: (NSNumber*) _id
    externalRef: (JSAPIStringWrapper*) externalRef
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the fulfillment status of an invoice item
/// This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// @param sku The sku of an item in the invoice
/// @param status The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  &#39;unfulfilled&#39;, &#39;fulfilled&#39;, &#39;not fulfillable&#39;, &#39;failed&#39;, &#39;processing&#39;, &#39;failed_permanent&#39;, &#39;delayed&#39;
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setInvoiceItemFulfillmentStatusWithId: (NSNumber*) _id
    sku: (NSString*) sku
    status: (JSAPIStringWrapper*) status
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the order notes of an invoice
/// <b>Permissions Needed:</b> INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// @param orderNotes Payment status info (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setOrderNotesWithId: (NSNumber*) _id
    orderNotes: (JSAPIStringWrapper*) orderNotes
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the payment status of an invoice
/// This may trigger fulfillment if setting the status to 'paid'. This is mainly intended to support external payment systems that cannot be incorporated into the payment method system. Payment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// @param request Payment status info (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setPaymentStatusWithId: (NSNumber*) _id
    request: (JSAPIInvoicePaymentStatusRequest*) request
    completionHandler: (void (^)(NSError* error)) handler;


/// Set or update billing info
/// <b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN
///
/// @param _id The id of the invoice
/// @param billingInfoRequest Address info (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateBillingInfoWithId: (NSNumber*) _id
    billingInfoRequest: (JSAPIAddressResource*) billingInfoRequest
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a invoice template
/// 
///
/// @param _id The id of the template
/// @param templatePatchResource The patch resource object (optional)
/// @param testValidation If true, this will test validation but not submit the patch request (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) updateInvoiceTemplateWithId: (NSString*) _id
    templatePatchResource: (JSAPIPatchResource*) templatePatchResource
    testValidation: (NSNumber*) testValidation
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;



@end
