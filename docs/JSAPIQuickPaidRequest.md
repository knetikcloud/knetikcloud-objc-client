# JSAPIQuickPaidRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this invoice type, or be an extra not from the template | [optional] 
**giftTarget** | **NSNumber*** | An optional target user to give the item to as a gift | 
**itemNotes** | **NSString*** | An optional note to add to the item | [optional] 
**paidAmount** | **NSNumber*** | The amount already paid. Must match final price to complete purchase. Minimum 0 | 
**priceOverride** | **NSNumber*** | Override the price of an item, if the behavior configuration permits it. Do not send if taking standard pricing. Minimum 0 | [optional] 
**sku** | **NSString*** | SKU of item being purchased | 
**template** | **NSString*** | An invoice template this invoice is validated against (private). May be null and no validation of properties will be done | [optional] 
**transactionDetails** | **NSString*** | Transaction details | [optional] 
**transactionType** | **NSString*** | Transaction type | 
**userId** | **NSNumber*** | ID of the user making the purchase. If null, currently logged in user will be used. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


