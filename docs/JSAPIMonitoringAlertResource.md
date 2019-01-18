# JSAPIMonitoringAlertResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**enabled** | **NSNumber*** | Whether the alert is live and should be evaluated. Default: true | [optional] 
**_id** | **NSString*** | The id of the alert. Cannot be changed | 
**levels** | [**NSArray&lt;JSAPIMonitoringAlertLevel&gt;***](JSAPIMonitoringAlertLevel.md) | The levels of alert to raise. Minimum 1 and maximum 10 entries. The alert level will be the one with the last one in the list that is passed its threshold | 
**metric** | [**JSAPISimpleReferenceResourceString_***](JSAPISimpleReferenceResourceString_.md) | The id of the metric the alert is monitoring | 
**name** | **NSString*** | The name of the alert, for display purposes | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


