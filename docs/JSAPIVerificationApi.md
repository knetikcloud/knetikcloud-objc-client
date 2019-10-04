# JSAPIVerificationApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createRequestTemplate**](JSAPIVerificationApi.md#createrequesttemplate) | **POST** /verification/templates | Create a request template
[**createVerificationRequest**](JSAPIVerificationApi.md#createverificationrequest) | **POST** /verification/requests | Create a new request
[**deleteRequestTemplate**](JSAPIVerificationApi.md#deleterequesttemplate) | **DELETE** /verification/templates/{id} | Delete a request template
[**deleteVerificationRequest**](JSAPIVerificationApi.md#deleteverificationrequest) | **DELETE** /verification/requests/{code} | Delete an existing request
[**getRequestTemplate**](JSAPIVerificationApi.md#getrequesttemplate) | **GET** /verification/templates/{id} | Get a single request template
[**getRequestTemplates**](JSAPIVerificationApi.md#getrequesttemplates) | **GET** /verification/templates | List and search request templates
[**getVerificationRequest**](JSAPIVerificationApi.md#getverificationrequest) | **GET** /verification/requests/{code} | Get a single verification request
[**getVerificationRequests**](JSAPIVerificationApi.md#getverificationrequests) | **GET** /verification/requests | List requests
[**updateRequestTemplate**](JSAPIVerificationApi.md#updaterequesttemplate) | **PATCH** /verification/templates/{id} | Update a request template
[**updateVerificationRequest**](JSAPIVerificationApi.md#updateverificationrequest) | **PUT** /verification/requests/{code} | Update an existing request
[**verifyRequest**](JSAPIVerificationApi.md#verifyrequest) | **POST** /verification/requests/{code}/responses | Verify a request


# **createRequestTemplate**
```objc
-(NSURLSessionTask*) createRequestTemplateWithRequestTemplateResource: (JSAPITemplateResource*) requestTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a request template

Request Templates define a type of request and the properties they have.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* requestTemplateResource = [[JSAPITemplateResource alloc] init]; // The request template resource object (optional)

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Create a request template
[apiInstance createRequestTemplateWithRequestTemplateResource:requestTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->createRequestTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **requestTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The request template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createVerificationRequest**
```objc
-(NSURLSessionTask*) createVerificationRequestWithVerificationRequest: (JSAPIVerificationRequest*) verificationRequest
    originator: (NSNumber*) originator
        completionHandler: (void (^)(JSAPIVerificationRequest* output, NSError* error)) handler;
```

Create a new request

Verification requests ask for a user to respond and confirm something, like their email address of an invitation to join a group.<br /><b>Permissions Needed:</b> POST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIVerificationRequest* verificationRequest = [[JSAPIVerificationRequest alloc] init]; // The request (optional)
NSNumber* originator = @56; // Optional originator id, admin only (optional)

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Create a new request
[apiInstance createVerificationRequestWithVerificationRequest:verificationRequest
              originator:originator
          completionHandler: ^(JSAPIVerificationRequest* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->createVerificationRequest: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **verificationRequest** | [**JSAPIVerificationRequest***](JSAPIVerificationRequest.md)| The request | [optional] 
 **originator** | **NSNumber***| Optional originator id, admin only | [optional] 

### Return type

[**JSAPIVerificationRequest***](JSAPIVerificationRequest.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteRequestTemplate**
```objc
-(NSURLSessionTask*) deleteRequestTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a request template

If cascade = 'detach', it will force delete the template even if it's attached to other objects.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Delete a request template
[apiInstance deleteRequestTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->deleteRequestTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| The value needed to delete used templates | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVerificationRequest**
```objc
-(NSURLSessionTask*) deleteVerificationRequestWithCode: (NSString*) code
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing request

<b>Permissions Needed:</b> DELETE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The code

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Delete an existing request
[apiInstance deleteVerificationRequestWithCode:code
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->deleteVerificationRequest: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The code | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRequestTemplate**
```objc
-(NSURLSessionTask*) getRequestTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single request template

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Get a single request template
[apiInstance getRequestTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->getRequestTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRequestTemplates**
```objc
-(NSURLSessionTask*) getRequestTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search request templates

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

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// List and search request templates
[apiInstance getRequestTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->getRequestTemplates: %@", error);
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

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVerificationRequest**
```objc
-(NSURLSessionTask*) getVerificationRequestWithCode: (NSString*) code
        completionHandler: (void (^)(JSAPIVerificationRequest* output, NSError* error)) handler;
```

Get a single verification request

<b>Permissions Needed:</b> GET

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The code

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Get a single verification request
[apiInstance getVerificationRequestWithCode:code
          completionHandler: ^(JSAPIVerificationRequest* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->getVerificationRequest: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The code | 

### Return type

[**JSAPIVerificationRequest***](JSAPIVerificationRequest.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVerificationRequests**
```objc
-(NSURLSessionTask*) getVerificationRequestsWithFilterTemplate: (NSString*) filterTemplate
    filterTarget: (NSString*) filterTarget
    filterOriginator: (NSString*) filterOriginator
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceVerificationRequest_* output, NSError* error)) handler;
```

List requests

Get a list of verification requests.<br /><b>Permissions Needed:</b> LIST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterTemplate = @"filterTemplate_example"; // Filter for verifications with specified template (optional)
NSString* filterTarget = @"filterTarget_example"; // Filter for verifications with specified user id as the target (optional)
NSString* filterOriginator = @"filterOriginator_example"; // Filter for verifications with specified user id as the originator (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// List requests
[apiInstance getVerificationRequestsWithFilterTemplate:filterTemplate
              filterTarget:filterTarget
              filterOriginator:filterOriginator
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceVerificationRequest_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->getVerificationRequests: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTemplate** | **NSString***| Filter for verifications with specified template | [optional] 
 **filterTarget** | **NSString***| Filter for verifications with specified user id as the target | [optional] 
 **filterOriginator** | **NSString***| Filter for verifications with specified user id as the originator | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceVerificationRequest_***](JSAPIPageResourceVerificationRequest_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateRequestTemplate**
```objc
-(NSURLSessionTask*) updateRequestTemplateWithId: (NSString*) _id
    templatePatchResource: (JSAPIPatchResource*) templatePatchResource
    testValidation: (NSNumber*) testValidation
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update a request template

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPIPatchResource* templatePatchResource = [[JSAPIPatchResource alloc] init]; // The patch resource object (optional)
NSNumber* testValidation = @true; // If true, this will test validation but not submit the patch request (optional)

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Update a request template
[apiInstance updateRequestTemplateWithId:_id
              templatePatchResource:templatePatchResource
              testValidation:testValidation
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->updateRequestTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **templatePatchResource** | [**JSAPIPatchResource***](JSAPIPatchResource.md)| The patch resource object | [optional] 
 **testValidation** | **NSNumber***| If true, this will test validation but not submit the patch request | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVerificationRequest**
```objc
-(NSURLSessionTask*) updateVerificationRequestWithCode: (NSString*) code
    verificationRequest: (JSAPIVerificationRequest*) verificationRequest
        completionHandler: (void (^)(JSAPIVerificationRequest* output, NSError* error)) handler;
```

Update an existing request

<b>Permissions Needed:</b> PUT

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The request code
JSAPIVerificationRequest* verificationRequest = [[JSAPIVerificationRequest alloc] init]; // The request (optional)

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Update an existing request
[apiInstance updateVerificationRequestWithCode:code
              verificationRequest:verificationRequest
          completionHandler: ^(JSAPIVerificationRequest* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->updateVerificationRequest: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The request code | 
 **verificationRequest** | [**JSAPIVerificationRequest***](JSAPIVerificationRequest.md)| The request | [optional] 

### Return type

[**JSAPIVerificationRequest***](JSAPIVerificationRequest.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **verifyRequest**
```objc
-(NSURLSessionTask*) verifyRequestWithCode: (NSString*) code
        completionHandler: (void (^)(JSAPIVerificationRequest* output, NSError* error)) handler;
```

Verify a request

<b>Permissions Needed:</b> VERIFY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The code

JSAPIVerificationApi*apiInstance = [[JSAPIVerificationApi alloc] init];

// Verify a request
[apiInstance verifyRequestWithCode:code
          completionHandler: ^(JSAPIVerificationRequest* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIVerificationApi->verifyRequest: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The code | 

### Return type

[**JSAPIVerificationRequest***](JSAPIVerificationRequest.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

