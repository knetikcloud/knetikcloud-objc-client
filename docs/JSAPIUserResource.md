# JSAPIUserResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template | [optional] 
**address** | **NSString*** | The first line of the user&#39;s address (private) | [optional] 
**address2** | **NSString*** | The second line of user&#39;s address (private) | [optional] 
**avatarUrl** | **NSString*** | The url of the user&#39;s avatar image | [optional] 
**city** | **NSString*** | The user&#39;s city (private) | [optional] 
**dateOfBirth** | **NSNumber*** | The user&#39;s date of birth (private) as a unix timestamp | [optional] 
**_description** | **NSString*** | The user&#39;s self description (private) | [optional] 
**displayName** | **NSString*** | The chosen display name of the user, defaults to username if not present | [optional] 
**email** | **NSString*** | The user&#39;s email address (private). May be required and/or unique depending on system configuration (both on by default). Must match standard email requirements if provided (RFC 2822) | 
**firstName** | **NSString*** | The user&#39;s first name (private) | [optional] 
**fullname** | **NSString*** | The user&#39;s full name (private) | [optional] 
**gender** | **NSString*** | The user&#39;s gender (private) | [optional] 
**_id** | **NSNumber*** | The id of the user | [optional] 
**lastActivity** | **NSNumber*** | The date the user last interacted with the API (private) | [optional] 
**lastName** | **NSString*** | The user&#39;s last name (private) | [optional] 
**lastUpdated** | **NSNumber*** | The date the user&#39;s info was last updated as a unix timestamp | [optional] 
**memberSince** | **NSNumber*** | The user&#39;s date of registration as a unix timestamp | [optional] 
**mobileNumber** | **NSString*** | The user&#39;s mobile phone number (private) | [optional] 
**password** | **NSString*** | The plain text password for the new user account. Required for registration; ignored on profile update.  Use password specific endpoints for editing | [optional] 
**postalCode** | **NSString*** | The user&#39;s postal code (private) | [optional] 
**state** | **NSString*** | The user&#39;s state (private) | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | Tags on the user. Can only be set by admin. Max length per tag is 64 characters | [optional] 
**template** | **NSString*** | A user template this user is validated against (private). May be null and no validation of properties will be done | [optional] 
**username** | **NSString*** | The login username for the user (private). May be set to match email if system does not require usernames separately. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


