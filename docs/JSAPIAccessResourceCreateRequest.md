# JSAPIAccessResourceCreateRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**access** | [**NSArray&lt;JSAPIAccessEntryResource&gt;***](JSAPIAccessEntryResource.md) | The access list for the resource. If null on create, will take default from type | [optional] 
**_id** | **NSString*** | The id of the resource we are defining access for | 
**parentId** | **NSString*** | The id of the parent resource (null if parent top level) | [optional] 
**parentType** | **NSString*** | The type of the parent resource (null for top level) | 
**sidReplacements** | **NSDictionary&lt;NSString*, NSString*&gt;*** | Sid placeholders mapped to sid replacement value. Useful for injecting owner/creator id. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


