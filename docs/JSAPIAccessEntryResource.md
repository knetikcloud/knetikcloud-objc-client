# JSAPIAccessEntryResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**actions** | **NSArray&lt;NSString*&gt;*** | The actions that users with the sid can take on this resource. Must match with actions available for the type of resource | 
**fieldBlacklist** | **NSArray&lt;NSString*&gt;*** | Optional list of fields, in JSON Pointer notation (RFC 6901), that are not to be granted the associated actions for. Specifically, this affects LIST, GET, PUT, and POST by not allowing retrieval, edit, or creation of the field. For LIST the fields stripped from return objects based on parent ACL. The ACL is always additive, thus other access entries may grant these actions on these fields anyways | [optional] 
**sid** | **NSString*** | The security id that gets this level of access. Security ids are prefixed with a type, foollowed by a hyphen, then an id. Formats: user-ID, group-UNIQUE_NAME, friend-USER_ID and role-ROLE | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


