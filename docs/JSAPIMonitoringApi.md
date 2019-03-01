# JSAPIMonitoringApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAlert**](JSAPIMonitoringApi.md#createalert) | **POST** /monitoring/alerts | Create a new alert
[**createMetric**](JSAPIMonitoringApi.md#createmetric) | **POST** /monitoring/metrics | Create a new metric
[**deleteAlert**](JSAPIMonitoringApi.md#deletealert) | **DELETE** /monitoring/alerts/{id} | Delete an existing alert
[**deleteDatapoint**](JSAPIMonitoringApi.md#deletedatapoint) | **DELETE** /monitoring/metrics/{id}/datapoints | Delete a metric datapoint
[**deleteIncident**](JSAPIMonitoringApi.md#deleteincident) | **DELETE** /monitoring/incidents/{id} | End an existing incident
[**deleteMetric**](JSAPIMonitoringApi.md#deletemetric) | **DELETE** /monitoring/metrics/{id} | Delete an existing metric
[**getAlert**](JSAPIMonitoringApi.md#getalert) | **GET** /monitoring/alerts/{id} | Get a single alert
[**getAlerts**](JSAPIMonitoringApi.md#getalerts) | **GET** /monitoring/alerts | List and search alerts
[**getIncident**](JSAPIMonitoringApi.md#getincident) | **GET** /monitoring/incidents/{id} | Get a single incident
[**getIncidentEvents**](JSAPIMonitoringApi.md#getincidentevents) | **GET** /monitoring/incidents/{id}/events | Get the events of an incident
[**getIncidents**](JSAPIMonitoringApi.md#getincidents) | **GET** /monitoring/incidents | List and search incidents
[**getMetric**](JSAPIMonitoringApi.md#getmetric) | **GET** /monitoring/metrics/{id} | Get a single metric
[**getMetrics**](JSAPIMonitoringApi.md#getmetrics) | **GET** /monitoring/metrics | List and search metrics
[**postBatch**](JSAPIMonitoringApi.md#postbatch) | **POST** /monitoring/metrics/datapoints | Post a metric datapoint batch
[**postDatapoint**](JSAPIMonitoringApi.md#postdatapoint) | **POST** /monitoring/metrics/{id}/datapoints | Post a metric datapoint
[**receiveEvent**](JSAPIMonitoringApi.md#receiveevent) | **POST** /monitoring/incidents | Report an incident event
[**startRecordMetric**](JSAPIMonitoringApi.md#startrecordmetric) | **POST** /monitoring/metrics/{id}/start | Start recording a metric
[**stopRecordMetric**](JSAPIMonitoringApi.md#stoprecordmetric) | **POST** /monitoring/metrics/{id}/stop | Stop recording a metric
[**updateAlert**](JSAPIMonitoringApi.md#updatealert) | **PUT** /monitoring/alerts/{id} | Update an existing alert
[**updateMetric**](JSAPIMonitoringApi.md#updatemetric) | **PUT** /monitoring/metrics/{id} | Update an existing metric


# **createAlert**
```objc
-(NSURLSessionTask*) createAlertWithAlertResource: (JSAPIMonitoringAlertResource*) alertResource
        completionHandler: (void (^)(JSAPIMonitoringAlertResource* output, NSError* error)) handler;
```

Create a new alert

<br><br><b>Permissions:</b> POST<br /><b>Permissions Needed:</b> POST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMonitoringAlertResource* alertResource = [[JSAPIMonitoringAlertResource alloc] init]; // The alert object (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Create a new alert
[apiInstance createAlertWithAlertResource:alertResource
          completionHandler: ^(JSAPIMonitoringAlertResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->createAlert: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **alertResource** | [**JSAPIMonitoringAlertResource***](JSAPIMonitoringAlertResource.md)| The alert object | [optional] 

### Return type

[**JSAPIMonitoringAlertResource***](JSAPIMonitoringAlertResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createMetric**
```objc
-(NSURLSessionTask*) createMetricWithMetricResource: (JSAPIMonitoringMetricResource*) metricResource
        completionHandler: (void (^)(JSAPIMonitoringMetricResource* output, NSError* error)) handler;
```

Create a new metric

<br><br><b>Permissions:</b> POST<br /><b>Permissions Needed:</b> POST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMonitoringMetricResource* metricResource = [[JSAPIMonitoringMetricResource alloc] init]; // The new metric (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Create a new metric
[apiInstance createMetricWithMetricResource:metricResource
          completionHandler: ^(JSAPIMonitoringMetricResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->createMetric: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricResource** | [**JSAPIMonitoringMetricResource***](JSAPIMonitoringMetricResource.md)| The new metric | [optional] 

### Return type

[**JSAPIMonitoringMetricResource***](JSAPIMonitoringMetricResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAlert**
```objc
-(NSURLSessionTask*) deleteAlertWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing alert

<b>Permissions Needed:</b> DELETE<br /><b>Permissions Needed:</b> DELETE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The alert id

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Delete an existing alert
[apiInstance deleteAlertWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->deleteAlert: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The alert id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDatapoint**
```objc
-(NSURLSessionTask*) deleteDatapointWithId: (NSString*) _id
    dimensions: (NSString*) dimensions
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a metric datapoint

Only works for counter and guage type. <b>Permissions Needed:</b> RECORD<br /><b>Permissions Needed:</b> RECORD

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The metric id
NSString* dimensions = @"dimensions_example"; // The dimensions of the specific datapoint to delete, in the form key1:value1,key2:val2 (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Delete a metric datapoint
[apiInstance deleteDatapointWithId:_id
              dimensions:dimensions
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->deleteDatapoint: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The metric id | 
 **dimensions** | **NSString***| The dimensions of the specific datapoint to delete, in the form key1:value1,key2:val2 | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteIncident**
```objc
-(NSURLSessionTask*) deleteIncidentWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

End an existing incident

Does not delete the incident, but marks it as resolved by setting the end date.<b>Permissions Needed:</b> DELETE<br /><b>Permissions Needed:</b> DELETE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The incident id

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// End an existing incident
[apiInstance deleteIncidentWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->deleteIncident: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The incident id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteMetric**
```objc
-(NSURLSessionTask*) deleteMetricWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing metric

This will delete all metrics referencing this metric as its parent.  <br><b>Permissions Needed:</b> DELETE<br /><b>Permissions Needed:</b> DELETE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The metric id

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Delete an existing metric
[apiInstance deleteMetricWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->deleteMetric: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The metric id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAlert**
```objc
-(NSURLSessionTask*) getAlertWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIMonitoringAlertResource* output, NSError* error)) handler;
```

Get a single alert

<b>Permissions Needed:</b> GET<br /><b>Permissions Needed:</b> GET

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The alert id

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Get a single alert
[apiInstance getAlertWithId:_id
          completionHandler: ^(JSAPIMonitoringAlertResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->getAlert: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The alert id | 

### Return type

[**JSAPIMonitoringAlertResource***](JSAPIMonitoringAlertResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAlerts**
```objc
-(NSURLSessionTask*) getAlertsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceMonitoringAlertResource_* output, NSError* error)) handler;
```

List and search alerts

Get a list of alerts with optional filtering. <br><br><b>Permissions Needed:</b> LIST<br /><b>Permissions Needed:</b> NONE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// List and search alerts
[apiInstance getAlertsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceMonitoringAlertResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->getAlerts: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceMonitoringAlertResource_***](JSAPIPageResourceMonitoringAlertResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getIncident**
```objc
-(NSURLSessionTask*) getIncidentWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIMonitoringIncidentResource* output, NSError* error)) handler;
```

Get a single incident

<b>Permissions Needed:</b> GET<br /><b>Permissions Needed:</b> GET

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The incident id

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Get a single incident
[apiInstance getIncidentWithId:_id
          completionHandler: ^(JSAPIMonitoringIncidentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->getIncident: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The incident id | 

### Return type

[**JSAPIMonitoringIncidentResource***](JSAPIMonitoringIncidentResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getIncidentEvents**
```objc
-(NSURLSessionTask*) getIncidentEventsWithId: (NSString*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceMonitoringIncidentEventResource_* output, NSError* error)) handler;
```

Get the events of an incident

<b>Permissions Needed:</b> LIST<br /><b>Permissions Needed:</b> LIST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The incident id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Get the events of an incident
[apiInstance getIncidentEventsWithId:_id
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceMonitoringIncidentEventResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->getIncidentEvents: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The incident id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceMonitoringIncidentEventResource_***](JSAPIPageResourceMonitoringIncidentEventResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getIncidents**
```objc
-(NSURLSessionTask*) getIncidentsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceMonitoringIncidentResource_* output, NSError* error)) handler;
```

List and search incidents

Get a list of incidents with optional filtering. <br><br><b>Permissions Needed:</b> LIST<br /><b>Permissions Needed:</b> NONE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// List and search incidents
[apiInstance getIncidentsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceMonitoringIncidentResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->getIncidents: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceMonitoringIncidentResource_***](JSAPIPageResourceMonitoringIncidentResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMetric**
```objc
-(NSURLSessionTask*) getMetricWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIMonitoringMetricResource* output, NSError* error)) handler;
```

Get a single metric

<b>Permissions Needed:</b> GET<br /><b>Permissions Needed:</b> GET

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The metric id

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Get a single metric
[apiInstance getMetricWithId:_id
          completionHandler: ^(JSAPIMonitoringMetricResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->getMetric: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The metric id | 

### Return type

[**JSAPIMonitoringMetricResource***](JSAPIMonitoringMetricResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMetrics**
```objc
-(NSURLSessionTask*) getMetricsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceMonitoringMetricResource_* output, NSError* error)) handler;
```

List and search metrics

Get a list of metrics with optional filtering. <br><br><b>Permissions Needed:</b> LIST<br /><b>Permissions Needed:</b> LIST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// List and search metrics
[apiInstance getMetricsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceMonitoringMetricResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->getMetrics: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceMonitoringMetricResource_***](JSAPIPageResourceMonitoringMetricResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postBatch**
```objc
-(NSURLSessionTask*) postBatchWithBatch: (NSArray<JSAPIMonitoringMetricDatapointResource>*) batch
        completionHandler: (void (^)(NSError* error)) handler;
```

Post a metric datapoint batch

Only works with counter and gauge metrics. Re-submit the entire batch in case of failure. <br><br><b>Permissions Needed:</b> RECORD<br /><b>Permissions Needed:</b> NONE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSArray<JSAPIMonitoringMetricDatapointResource>* batch = @[[[JSAPIMonitoringMetricDatapointResource alloc] init]]; // The metric datapoints (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Post a metric datapoint batch
[apiInstance postBatchWithBatch:batch
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->postBatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **batch** | [**NSArray&lt;JSAPIMonitoringMetricDatapointResource&gt;***](JSAPIMonitoringMetricDatapointResource.md)| The metric datapoints | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postDatapoint**
```objc
-(NSURLSessionTask*) postDatapointWithId: (NSString*) _id
    metricDatapoint: (JSAPIMonitoringMetricDatapointResource*) metricDatapoint
        completionHandler: (void (^)(NSError* error)) handler;
```

Post a metric datapoint

Only works with counter and gauge metrics. <br><br><b>Permissions Needed:</b> RECORD<br /><b>Permissions Needed:</b> RECORD

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The metric id
JSAPIMonitoringMetricDatapointResource* metricDatapoint = [[JSAPIMonitoringMetricDatapointResource alloc] init]; // The metric datapoint (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Post a metric datapoint
[apiInstance postDatapointWithId:_id
              metricDatapoint:metricDatapoint
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->postDatapoint: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The metric id | 
 **metricDatapoint** | [**JSAPIMonitoringMetricDatapointResource***](JSAPIMonitoringMetricDatapointResource.md)| The metric datapoint | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **receiveEvent**
```objc
-(NSURLSessionTask*) receiveEventWithIncidentResource: (JSAPIMonitoringIncidentEventResource*) incidentResource
        completionHandler: (void (^)(JSAPIMonitoringIncidentResource* output, NSError* error)) handler;
```

Report an incident event

Updates the current incident for an alert or starts a new one if none current. <br><br><b>Permissions:</b> POST<br /><b>Permissions Needed:</b> POST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMonitoringIncidentEventResource* incidentResource = [[JSAPIMonitoringIncidentEventResource alloc] init]; // The new incident (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Report an incident event
[apiInstance receiveEventWithIncidentResource:incidentResource
          completionHandler: ^(JSAPIMonitoringIncidentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->receiveEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **incidentResource** | [**JSAPIMonitoringIncidentEventResource***](JSAPIMonitoringIncidentEventResource.md)| The new incident | [optional] 

### Return type

[**JSAPIMonitoringIncidentResource***](JSAPIMonitoringIncidentResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **startRecordMetric**
```objc
-(NSURLSessionTask*) startRecordMetricWithId: (NSString*) _id
    metricRecord: (JSAPIMonitoringMetricRecordResource*) metricRecord
        completionHandler: (void (^)(NSError* error)) handler;
```

Start recording a metric

Only works with delta and timer metrics. <br><br><b>Permissions Needed:</b> RECORD<br /><b>Permissions Needed:</b> RECORD

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The metric id
JSAPIMonitoringMetricRecordResource* metricRecord = [[JSAPIMonitoringMetricRecordResource alloc] init]; // The metric record (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Start recording a metric
[apiInstance startRecordMetricWithId:_id
              metricRecord:metricRecord
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->startRecordMetric: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The metric id | 
 **metricRecord** | [**JSAPIMonitoringMetricRecordResource***](JSAPIMonitoringMetricRecordResource.md)| The metric record | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **stopRecordMetric**
```objc
-(NSURLSessionTask*) stopRecordMetricWithId: (NSString*) _id
    metricRecord: (JSAPIMonitoringMetricRecordResource*) metricRecord
        completionHandler: (void (^)(NSError* error)) handler;
```

Stop recording a metric

Only works with delta and timer metrics. <br><br><b>Permissions Needed:</b> RECORD<br /><b>Permissions Needed:</b> RECORD

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The metric id
JSAPIMonitoringMetricRecordResource* metricRecord = [[JSAPIMonitoringMetricRecordResource alloc] init]; // The metric record (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Stop recording a metric
[apiInstance stopRecordMetricWithId:_id
              metricRecord:metricRecord
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->stopRecordMetric: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The metric id | 
 **metricRecord** | [**JSAPIMonitoringMetricRecordResource***](JSAPIMonitoringMetricRecordResource.md)| The metric record | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAlert**
```objc
-(NSURLSessionTask*) updateAlertWithId: (NSString*) _id
    alertResource: (JSAPIMonitoringAlertResource*) alertResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing alert

<b>Permissions Needed:</b> PUT<br /><b>Permissions Needed:</b> PUT

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The alert id
JSAPIMonitoringAlertResource* alertResource = [[JSAPIMonitoringAlertResource alloc] init]; // The alert object (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Update an existing alert
[apiInstance updateAlertWithId:_id
              alertResource:alertResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->updateAlert: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The alert id | 
 **alertResource** | [**JSAPIMonitoringAlertResource***](JSAPIMonitoringAlertResource.md)| The alert object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMetric**
```objc
-(NSURLSessionTask*) updateMetricWithId: (NSString*) _id
    metricResource: (JSAPIMonitoringMetricResource*) metricResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing metric

<b>Permissions Needed:</b> PUT<br /><b>Permissions Needed:</b> PUT

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The metric id
JSAPIMonitoringMetricResource* metricResource = [[JSAPIMonitoringMetricResource alloc] init]; // The metric object (optional)

JSAPIMonitoringApi*apiInstance = [[JSAPIMonitoringApi alloc] init];

// Update an existing metric
[apiInstance updateMetricWithId:_id
              metricResource:metricResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMonitoringApi->updateMetric: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The metric id | 
 **metricResource** | [**JSAPIMonitoringMetricResource***](JSAPIMonitoringMetricResource.md)| The metric object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

