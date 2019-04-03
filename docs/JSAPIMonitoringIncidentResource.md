# JSAPIMonitoringIncidentResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**alert** | [**JSAPISimpleReferenceResourceString_***](JSAPISimpleReferenceResourceString_.md) | The alert this incident is for | 
**currentLevel** | **NSString*** | The name of the current alert level | 
**endDate** | **NSNumber*** | The endDate as a unix timestamp in seconds the incident was manually ended. Null if still open | [optional] 
**_id** | **NSString*** | The id of the incident. Cannot be changed | 
**insufficientData** | **NSNumber*** | Whether the most recent check for any level had too little data to determine status, and alert level missing_data_policy is &#39;missing&#39; | [optional] 
**levels** | [**NSArray&lt;JSAPIMonitoringIncidentLevelResource&gt;***](JSAPIMonitoringIncidentLevelResource.md) | The statuses of each level | 
**startDate** | **NSNumber*** | The startDate as a unix timestamp in seconds the incident first started | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


