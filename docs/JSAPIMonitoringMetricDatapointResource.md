# JSAPIMonitoringMetricDatapointResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**dimensions** | **NSDictionary&lt;NSString*, NSString*&gt;*** | Dimensions giving context to the datapoint. Map of keys to values (example: {\&quot;location\&quot;: \&quot;USA\&quot;, \&quot;user\&quot;: \&quot;75\&quot;}). Cannot include the | symbol | [optional] 
**_id** | **NSString*** | The id of the metric. Required for batch endpoint | [optional] 
**timestamp** | **NSNumber*** | The unix timestamp in seconds the datapoint occurred, default: now | [optional] 
**value** | **NSNumber*** | The value of the datapoint | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


