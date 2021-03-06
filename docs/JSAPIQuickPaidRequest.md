# JSAPIQuickPaidRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this invoice type, or be an extra not from the template | [optional] 
**address1** | **NSString*** | Line one of the customer&#39;s shipping address | [optional] 
**address2** | **NSString*** | Line two of the customer&#39;s shipping address | [optional] 
**billingAddress1** | **NSString*** | Line one of the customer&#39;s billing address | [optional] 
**billingAddress2** | **NSString*** | Line two of the customer&#39;s billing address | [optional] 
**billingCityName** | **NSString*** | The city for the customer&#39;s billing address | [optional] 
**billingCountryName** | **NSString*** | The country for the customer&#39;s billing address | [optional] 
**billingFullName** | **NSString*** | The customer&#39;s name for the billing address | [optional] 
**billingPostalCode** | **NSString*** | The postal code for the customer&#39;s billing address | [optional] 
**billingStateName** | **NSString*** | The state for the customer&#39;s billing address | [optional] 
**cityName** | **NSString*** | The city for the customer&#39;s shipping address | [optional] 
**countryName** | **NSString*** | The country for the customer&#39;s shipping address | [optional] 
**email** | **NSString*** | The customer&#39;s email address | [optional] 
**federalTax** | **NSNumber*** | The amount of federal tax to add (increases final price of invoice even if using price override). Minimum 0 | [optional] 
**giftTarget** | **NSNumber*** | An optional target user to give the item to as a gift | 
**itemNotes** | **NSString*** | An optional note to add to the item | [optional] 
**namePrefix** | **NSString*** | The customer&#39;s name prefix | [optional] 
**paidAmount** | **NSNumber*** | The amount already paid. Must match final price to complete purchase. Ignored for non-paid endpoints. Minimum 0 | [optional] 
**postalCode** | **NSString*** | The postal code for the customer&#39;s shipping address | [optional] 
**priceOverride** | **NSNumber*** | Override the price of an item, if the behavior configuration permits it. Do not send if taking standard pricing. Minimum 0 | [optional] 
**sku** | **NSString*** | SKU of item being purchased | 
**stateName** | **NSString*** | The state for the customer&#39;s shipping address | [optional] 
**stateTax** | **NSNumber*** | The amount of state tax to add (increases final price of invoice even if using price override). Minimum 0 | [optional] 
**template** | **NSString*** | An invoice template this invoice is validated against (private). May be null and no validation of properties will be done | [optional] 
**transactionDetails** | **NSString*** | Transaction details | [optional] 
**transactionType** | **NSString*** | Transaction type | 
**userId** | **NSNumber*** | ID of the user making the purchase. If null, currently logged in user will be used. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


