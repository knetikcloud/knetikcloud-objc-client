# JSAPIVerificationRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**code** | **NSString*** | A unique code to identify the request. May be publically known and use ACL to require the correct user to respond, or private and the ACL allows anyone with the code to verify. default: random | [optional] 
**codelength** | **NSNumber*** | The intended length of the code, if auto-generated. Minimum 3, default 16 | [optional] 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**expirationDate** | **NSNumber*** | The date, as a unix timestamp in seconds, that the request expires | [optional] 
**includeNumbers** | **NSNumber*** | Whether to include numbers, if the code is auto-generated. Default: true | [optional] 
**originator** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The originating user of the request, filled at  | [optional] 
**targetUser** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | An optional user that is expected to respond | [optional] 
**template** | **NSString*** | A template this verification request is validated against. Filled from url | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


