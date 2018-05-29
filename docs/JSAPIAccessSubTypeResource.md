# JSAPIAccessSubTypeResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**actions** | **NSArray&lt;NSString*&gt;*** | The actions that are possible for the resource type | 
**defaultAccess** | [**NSArray&lt;JSAPIAccessEntryResource&gt;***](JSAPIAccessEntryResource.md) | An access list to be copied into new resources of this sub type under this parent. Can include SIDs from the replacement_sid list, which will be replaced when the sub resource if first created | 
**inheritedAccess** | [**NSArray&lt;JSAPIAccessEntryResource&gt;***](JSAPIAccessEntryResource.md) | An access list to provide blanket access to all sub resources of this type under this parent | 
**replacementSids** | **NSArray&lt;NSString*&gt;*** | A list of placeholder sids that can be included in the access list to be replaced when a resource is first created | [optional] 
**subTypes** | [**NSArray&lt;JSAPIAccessSubTypeResource&gt;***](JSAPIAccessSubTypeResource.md) | List of resource types that can inherit from this one, to define default access lists on creation | 
**type** | **NSString*** | The sub type we are defining access for | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


