# JSAPIQuickPaidRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**giftTarget** | **NSNumber*** | An optional target user to give the item to as a gift | 
**itemNotes** | **NSString*** | An optional note to add to the item | [optional] 
**paidAmount** | **NSNumber*** | The amount already paid. Must match final price to complete purchase. Minimum 0 | 
**priceOverride** | **NSNumber*** | Override the price of an item, if the behavior configuration permits it. Do not send if taking standard pricing. Minimum 0 | [optional] 
**sku** | **NSString*** | SKU of item being purchased | 
**transactionDetails** | **NSString*** | Transaction details | [optional] 
**transactionType** | **NSString*** | Transaction type | 
**userId** | **NSNumber*** | ID of the user making the purchase. If null, currently logged in user will be used. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


