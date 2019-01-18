# JSAPITemplatesApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createTemplate**](JSAPITemplatesApi.md#createtemplate) | **POST** /templates/{type_hint} | Create a template
[**deleteTemplate**](JSAPITemplatesApi.md#deletetemplate) | **DELETE** /templates/{type_hint}/{id} | Delete a template
[**getTemplate**](JSAPITemplatesApi.md#gettemplate) | **GET** /templates/{type_hint}/{id} | Get a template
[**getTemplates**](JSAPITemplatesApi.md#gettemplates) | **GET** /templates/{type_hint} | List and search templates
[**patchTemplate**](JSAPITemplatesApi.md#patchtemplate) | **PATCH** /templates/{type_hint}/{id} | Patch a template
[**validate**](JSAPITemplatesApi.md#validate) | **POST** /templates/{type_hint}/validate | Validate a templated resource


# **createTemplate**
```objc
-(NSURLSessionTask*) createTemplateWithTypeHint: (NSString*) typeHint
    template: (JSAPITemplateResource*) template
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a template

<b>Permissions Needed:</b> TEMPLATES_ADMIN<br /><b>Permissions Needed:</b> POST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
JSAPITemplateResource* template = [[JSAPITemplateResource alloc] init]; // The template (optional)

JSAPITemplatesApi*apiInstance = [[JSAPITemplatesApi alloc] init];

// Create a template
[apiInstance createTemplateWithTypeHint:typeHint
              template:template
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesApi->createTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **template** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The template | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTemplate**
```objc
-(NSURLSessionTask*) deleteTemplateWithTypeHint: (NSString*) typeHint
    _id: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a template

<b>Permissions Needed:</b> TEMPLATES_ADMIN<br /><b>Permissions Needed:</b> DELETE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = cascade_example; // How to cascade the delete (optional)

JSAPITemplatesApi*apiInstance = [[JSAPITemplatesApi alloc] init];

// Delete a template
[apiInstance deleteTemplateWithTypeHint:typeHint
              _id:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesApi->deleteTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| How to cascade the delete | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplate**
```objc
-(NSURLSessionTask*) getTemplateWithTypeHint: (NSString*) typeHint
    _id: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a template

<b>Permissions Needed:</b> TEMPLATES_ADMIN<br /><b>Permissions Needed:</b> GET

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
NSString* _id = @"_id_example"; // The id of the template

JSAPITemplatesApi*apiInstance = [[JSAPITemplatesApi alloc] init];

// Get a template
[apiInstance getTemplateWithTypeHint:typeHint
              _id:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesApi->getTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplates**
```objc
-(NSURLSessionTask*) getTemplatesWithTypeHint: (NSString*) typeHint
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search templates

<b>Permissions Needed:</b> TEMPLATES_ADMIN<br /><b>Permissions Needed:</b> LIST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPITemplatesApi*apiInstance = [[JSAPITemplatesApi alloc] init];

// List and search templates
[apiInstance getTemplatesWithTypeHint:typeHint
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesApi->getTemplates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patchTemplate**
```objc
-(NSURLSessionTask*) patchTemplateWithTypeHint: (NSString*) typeHint
    _id: (NSString*) _id
    templatePatchResource: (JSAPIPatchResource*) templatePatchResource
    testValidation: (NSNumber*) testValidation
        completionHandler: (void (^)(NSError* error)) handler;
```

Patch a template

<b>Permissions Needed:</b> TEMPLATES_ADMIN<br /><b>Permissions Needed:</b> PUT

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
NSString* _id = @"_id_example"; // The id of the template
JSAPIPatchResource* templatePatchResource = [[JSAPIPatchResource alloc] init]; // The patch resource object (optional)
NSNumber* testValidation = @true; // If true, this will test validation but not submit the patch request (optional)

JSAPITemplatesApi*apiInstance = [[JSAPITemplatesApi alloc] init];

// Patch a template
[apiInstance patchTemplateWithTypeHint:typeHint
              _id:_id
              templatePatchResource:templatePatchResource
              testValidation:testValidation
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesApi->patchTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **_id** | **NSString***| The id of the template | 
 **templatePatchResource** | [**JSAPIPatchResource***](JSAPIPatchResource.md)| The patch resource object | [optional] 
 **testValidation** | **NSNumber***| If true, this will test validation but not submit the patch request | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **validate**
```objc
-(NSURLSessionTask*) validateWithTypeHint: (NSString*) typeHint
    resource: (JSAPIBasicTemplatedResource*) resource
        completionHandler: (void (^)(NSError* error)) handler;
```

Validate a templated resource

Error code thrown if invalid.<br><br><b>Permissions Needed:</b> TEMPLATES_ADMIN<br /><b>Permissions Needed:</b> GET

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
JSAPIBasicTemplatedResource* resource = [[JSAPIBasicTemplatedResource alloc] init]; // The resource to validate (optional)

JSAPITemplatesApi*apiInstance = [[JSAPITemplatesApi alloc] init];

// Validate a templated resource
[apiInstance validateWithTypeHint:typeHint
              resource:resource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesApi->validate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **resource** | [**JSAPIBasicTemplatedResource***](JSAPIBasicTemplatedResource.md)| The resource to validate | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

