# JSAPIAccessTypeResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**access** | [**NSArray&lt;JSAPIAccessEntryResource&gt;***](JSAPIAccessEntryResource.md) | The access list. Combines with parent access to determine permission | 
**actions** | **NSArray&lt;NSString*&gt;*** | The actions that are possible for the resource type | [optional] 
**_id** | **NSString*** | The id of the resource we are defining access for (null for top level) | [optional] 
**parentId** | **NSString*** | The id of the parent resource (null if parent top level) | [optional] 
**parentType** | **NSString*** | The type of the parent resource (null for top level) | [optional] 
**subTypes** | [**NSArray&lt;JSAPIAccessSubTypeResource&gt;***](JSAPIAccessSubTypeResource.md) | List of resource types that can inherit from this one, to define default access lists on creation | 
**type** | **NSString*** | The resource type we are defining access for | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


