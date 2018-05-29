# JSAPISearchObjectDefinition

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**dataSupplierUrl** | **NSString*** | The relative URL of the service that will provide the initial data to index. Assumed to be compliant with KnetikCloud pagination standards. Ex: /locations. | [optional] 
**idField** | **NSString*** | The name of the field representing the unique identifier of the document. Ex: UserResource -&gt; id | [optional] 
**mappings** | [**NSArray&lt;JSAPISearchReferenceMapping&gt;***](JSAPISearchReferenceMapping.md) | Describe how nested resources should be mapped to documents if needed. Search service will copy the already indexed dependant documents and use them to replace the listed fields at runtime. Ex: comment.user is a user document | [optional] 
**templateField** | **NSString*** | The name of the property that holds the template ID for custom objects. (ex: template or template_id) | [optional] 
**type** | **NSString*** | The name of the index where the documents will be stored. Be convention, the name of the resource w/o suffix. Ex: UserResource -&gt; users | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


