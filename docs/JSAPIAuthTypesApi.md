# JSAPIAuthTypesApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**allowedResourceActions**](JSAPIAuthTypesApi.md#allowedresourceactions) | **GET** /access/resources/{type}/{id}/actions | Get allowed action
[**allowedTypeActions**](JSAPIAuthTypesApi.md#allowedtypeactions) | **GET** /access/types/{type}/actions | Get allowed actions on a type
[**createResource**](JSAPIAuthTypesApi.md#createresource) | **POST** /access/resources/{type} | Create or update resource
[**createType**](JSAPIAuthTypesApi.md#createtype) | **POST** /access/types | Create a new type
[**deleteAllOfType**](JSAPIAuthTypesApi.md#deletealloftype) | **DELETE** /access/resources/{type} | Delete all resources of a type
[**deleteResource**](JSAPIAuthTypesApi.md#deleteresource) | **DELETE** /access/resources/{type}/{id} | Delete a resource
[**deleteType**](JSAPIAuthTypesApi.md#deletetype) | **DELETE** /access/types/{type} | Delete a root type
[**getResource**](JSAPIAuthTypesApi.md#getresource) | **GET** /access/resources/{type}/{id} | Get a single resource
[**getResources**](JSAPIAuthTypesApi.md#getresources) | **GET** /access/resources/{type} | List and search resources
[**getType**](JSAPIAuthTypesApi.md#gettype) | **GET** /access/types/{type} | Get a single root type
[**getTypes**](JSAPIAuthTypesApi.md#gettypes) | **GET** /access/types | List and search types
[**updateResource**](JSAPIAuthTypesApi.md#updateresource) | **PUT** /access/resources/{type}/{id} | Update a resource
[**updateType**](JSAPIAuthTypesApi.md#updatetype) | **PUT** /access/types/{type} | Update a root type


# **allowedResourceActions**
```objc
-(NSURLSessionTask*) allowedResourceActionsWithType: (NSString*) type
    _id: (NSString*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceAccessResultsResource_* output, NSError* error)) handler;
```

Get allowed action

Checks for which actions can be taken against a given resource by the caller. <b>Types Needed:</b> any

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value
NSString* _id = @"_id_example"; // The resource id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Get allowed action
[apiInstance allowedResourceActionsWithType:type
              _id:_id
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceAccessResultsResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->allowedResourceActions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 
 **_id** | **NSString***| The resource id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceAccessResultsResource_***](JSAPIPageResourceAccessResultsResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **allowedTypeActions**
```objc
-(NSURLSessionTask*) allowedTypeActionsWithType: (NSString*) type
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceAccessResultsResource_* output, NSError* error)) handler;
```

Get allowed actions on a type

Checks for which actions can be taken against a given type by the caller. <b>Types Needed:</b> any

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Get allowed actions on a type
[apiInstance allowedTypeActionsWithType:type
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceAccessResultsResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->allowedTypeActions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceAccessResultsResource_***](JSAPIPageResourceAccessResultsResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createResource**
```objc
-(NSURLSessionTask*) createResourceWithType: (NSString*) type
    accessResource: (JSAPIAccessResourceCreateRequest*) accessResource
        completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;
```

Create or update resource

Creates the access control for a resource if it does not exist, and updates parent information if it does not.<b>Resources Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The resource type
JSAPIAccessResourceCreateRequest* accessResource = [[JSAPIAccessResourceCreateRequest alloc] init]; // The access rules for the resource (optional)

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Create or update resource
[apiInstance createResourceWithType:type
              accessResource:accessResource
          completionHandler: ^(JSAPIAccessTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->createResource: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The resource type | 
 **accessResource** | [**JSAPIAccessResourceCreateRequest***](JSAPIAccessResourceCreateRequest.md)| The access rules for the resource | [optional] 

### Return type

[**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createType**
```objc
-(NSURLSessionTask*) createTypeWithTypeResource: (JSAPIAccessTypeResource*) typeResource
        completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;
```

Create a new type

<b>Types Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIAccessTypeResource* typeResource = [[JSAPIAccessTypeResource alloc] init]; // The type resource object (optional)

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Create a new type
[apiInstance createTypeWithTypeResource:typeResource
          completionHandler: ^(JSAPIAccessTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->createType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeResource** | [**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)| The type resource object | [optional] 

### Return type

[**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAllOfType**
```objc
-(NSURLSessionTask*) deleteAllOfTypeWithType: (NSString*) type
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete all resources of a type

<b>Types Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Delete all resources of a type
[apiInstance deleteAllOfTypeWithType:type
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->deleteAllOfType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteResource**
```objc
-(NSURLSessionTask*) deleteResourceWithType: (NSString*) type
    _id: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a resource

Deletes a non-root level type<br /><b>Types Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value
NSString* _id = @"_id_example"; // The resource id

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Delete a resource
[apiInstance deleteResourceWithType:type
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->deleteResource: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 
 **_id** | **NSString***| The resource id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteType**
```objc
-(NSURLSessionTask*) deleteTypeWithType: (NSString*) type
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a root type

Deletes a root level type with no id<br /><b>Types Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Delete a root type
[apiInstance deleteTypeWithType:type
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->deleteType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getResource**
```objc
-(NSURLSessionTask*) getResourceWithType: (NSString*) type
    _id: (NSString*) _id
        completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;
```

Get a single resource

<b>Types Needed:</b> VIEW_ACCESS

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value
NSString* _id = @"_id_example"; // The resource id

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Get a single resource
[apiInstance getResourceWithType:type
              _id:_id
          completionHandler: ^(JSAPIAccessTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->getResource: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 
 **_id** | **NSString***| The resource id | 

### Return type

[**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getResources**
```objc
-(NSURLSessionTask*) getResourcesWithType: (NSString*) type
    filterType: (NSString*) filterType
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceAccessTypeResource_* output, NSError* error)) handler;
```

List and search resources

<b>Types Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value
NSString* filterType = @"filterType_example"; // Filter for a specific type (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"type:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to type:ASC)

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// List and search resources
[apiInstance getResourcesWithType:type
              filterType:filterType
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceAccessTypeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->getResources: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 
 **filterType** | **NSString***| Filter for a specific type | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to type:ASC]

### Return type

[**JSAPIPageResourceAccessTypeResource_***](JSAPIPageResourceAccessTypeResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getType**
```objc
-(NSURLSessionTask*) getTypeWithType: (NSString*) type
        completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;
```

Get a single root type

<b>Types Needed:</b> VIEW_ACCESS

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Get a single root type
[apiInstance getTypeWithType:type
          completionHandler: ^(JSAPIAccessTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->getType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 

### Return type

[**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTypes**
```objc
-(NSURLSessionTask*) getTypesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceAccessTypeResource_* output, NSError* error)) handler;
```

List and search types

<b>Types Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"type:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to type:ASC)

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// List and search types
[apiInstance getTypesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceAccessTypeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->getTypes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to type:ASC]

### Return type

[**JSAPIPageResourceAccessTypeResource_***](JSAPIPageResourceAccessTypeResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateResource**
```objc
-(NSURLSessionTask*) updateResourceWithType: (NSString*) type
    _id: (NSString*) _id
    typeResource: (JSAPIAccessTypeResource*) typeResource
        completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;
```

Update a resource

<b>Types Needed:</b> ACCESS_CONTROL

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value
NSString* _id = @"_id_example"; // The resource id
JSAPIAccessTypeResource* typeResource = [[JSAPIAccessTypeResource alloc] init]; // The resource object (optional)

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Update a resource
[apiInstance updateResourceWithType:type
              _id:_id
              typeResource:typeResource
          completionHandler: ^(JSAPIAccessTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->updateResource: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 
 **_id** | **NSString***| The resource id | 
 **typeResource** | [**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)| The resource object | [optional] 

### Return type

[**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateType**
```objc
-(NSURLSessionTask*) updateTypeWithType: (NSString*) type
    typeResource: (JSAPIAccessTypeResource*) typeResource
        completionHandler: (void (^)(JSAPIAccessTypeResource* output, NSError* error)) handler;
```

Update a root type

<b>Types Needed:</b> ACCESS_CONTROL

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The type value
JSAPIAccessTypeResource* typeResource = [[JSAPIAccessTypeResource alloc] init]; // The type resource object (optional)

JSAPIAuthTypesApi*apiInstance = [[JSAPIAuthTypesApi alloc] init];

// Update a root type
[apiInstance updateTypeWithType:type
              typeResource:typeResource
          completionHandler: ^(JSAPIAccessTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTypesApi->updateType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The type value | 
 **typeResource** | [**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)| The type resource object | [optional] 

### Return type

[**JSAPIAccessTypeResource***](JSAPIAccessTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

