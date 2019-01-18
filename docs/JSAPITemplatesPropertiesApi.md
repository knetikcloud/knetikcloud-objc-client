# JSAPITemplatesPropertiesApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTemplatePropertyType**](JSAPITemplatesPropertiesApi.md#gettemplatepropertytype) | **GET** /templates/properties/{type} | Get details for a template property type
[**getTemplatePropertyTypes**](JSAPITemplatesPropertiesApi.md#gettemplatepropertytypes) | **GET** /templates/properties | List template property types


# **getTemplatePropertyType**
```objc
-(NSURLSessionTask*) getTemplatePropertyTypeWithType: (NSString*) type
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPropertyFieldListResource* output, NSError* error)) handler;
```

Get details for a template property type

<b>Permissions Needed:</b> ANY<br /><b>Permissions Needed:</b> NONE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // type
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPITemplatesPropertiesApi*apiInstance = [[JSAPITemplatesPropertiesApi alloc] init];

// Get details for a template property type
[apiInstance getTemplatePropertyTypeWithType:type
              size:size
              page:page
          completionHandler: ^(JSAPIPropertyFieldListResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesPropertiesApi->getTemplatePropertyType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| type | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPropertyFieldListResource***](JSAPIPropertyFieldListResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplatePropertyTypes**
```objc
-(NSURLSessionTask*) getTemplatePropertyTypesWithCompletionHandler: 
        (void (^)(JSAPIPageResourcePropertyFieldListResource_* output, NSError* error)) handler;
```

List template property types

<b>Permissions Needed:</b> ANY<br /><b>Permissions Needed:</b> NONE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPITemplatesPropertiesApi*apiInstance = [[JSAPITemplatesPropertiesApi alloc] init];

// List template property types
[apiInstance getTemplatePropertyTypesWithCompletionHandler: 
          ^(JSAPIPageResourcePropertyFieldListResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesPropertiesApi->getTemplatePropertyTypes: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**JSAPIPageResourcePropertyFieldListResource_***](JSAPIPageResourcePropertyFieldListResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

