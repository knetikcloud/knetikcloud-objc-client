# JSAPIAuthProvidersApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createProvider**](JSAPIAuthProvidersApi.md#createprovider) | **POST** /auth/providers | Create a new OAuth 2 provider
[**deleteProvider**](JSAPIAuthProvidersApi.md#deleteprovider) | **DELETE** /auth/providers/{provider_id} | Delete an existing OAuth 2 provider
[**getProvider**](JSAPIAuthProvidersApi.md#getprovider) | **GET** /auth/providers/{provider_id} | Get an existing OAuth 2 provider
[**getProviders**](JSAPIAuthProvidersApi.md#getproviders) | **GET** /auth/providers | List OAuth 2 providers
[**updateProvider**](JSAPIAuthProvidersApi.md#updateprovider) | **PUT** /auth/providers/{provider_id} | Update an existing OAuth 2 provider


# **createProvider**
```objc
-(NSURLSessionTask*) createProviderWithProviderResource: (JSAPIOAuth2ProviderResource*) providerResource
        completionHandler: (void (^)(JSAPIOAuth2ProviderResource* output, NSError* error)) handler;
```

Create a new OAuth 2 provider

<b>Permissions Needed:</b> POST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIOAuth2ProviderResource* providerResource = [[JSAPIOAuth2ProviderResource alloc] init]; // providerResource

JSAPIAuthProvidersApi*apiInstance = [[JSAPIAuthProvidersApi alloc] init];

// Create a new OAuth 2 provider
[apiInstance createProviderWithProviderResource:providerResource
          completionHandler: ^(JSAPIOAuth2ProviderResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthProvidersApi->createProvider: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **providerResource** | [**JSAPIOAuth2ProviderResource***](JSAPIOAuth2ProviderResource.md)| providerResource | 

### Return type

[**JSAPIOAuth2ProviderResource***](JSAPIOAuth2ProviderResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteProvider**
```objc
-(NSURLSessionTask*) deleteProviderWithProviderId: (NSString*) providerId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing OAuth 2 provider

<b>Permissions Needed:</b> DELETE

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* providerId = @"providerId_example"; // provider_id

JSAPIAuthProvidersApi*apiInstance = [[JSAPIAuthProvidersApi alloc] init];

// Delete an existing OAuth 2 provider
[apiInstance deleteProviderWithProviderId:providerId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthProvidersApi->deleteProvider: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **providerId** | **NSString***| provider_id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getProvider**
```objc
-(NSURLSessionTask*) getProviderWithProviderId: (NSString*) providerId
        completionHandler: (void (^)(JSAPIOAuth2ProviderResource* output, NSError* error)) handler;
```

Get an existing OAuth 2 provider

<b>Permissions Needed:</b> GET

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* providerId = @"providerId_example"; // provider_id

JSAPIAuthProvidersApi*apiInstance = [[JSAPIAuthProvidersApi alloc] init];

// Get an existing OAuth 2 provider
[apiInstance getProviderWithProviderId:providerId
          completionHandler: ^(JSAPIOAuth2ProviderResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthProvidersApi->getProvider: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **providerId** | **NSString***| provider_id | 

### Return type

[**JSAPIOAuth2ProviderResource***](JSAPIOAuth2ProviderResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getProviders**
```objc
-(NSURLSessionTask*) getProvidersWithCompletionHandler: 
        (void (^)(JSAPIPageResourceOAuth2ProviderResource_* output, NSError* error)) handler;
```

List OAuth 2 providers

<b>Permissions Needed:</b> LIST

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIAuthProvidersApi*apiInstance = [[JSAPIAuthProvidersApi alloc] init];

// List OAuth 2 providers
[apiInstance getProvidersWithCompletionHandler: 
          ^(JSAPIPageResourceOAuth2ProviderResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthProvidersApi->getProviders: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**JSAPIPageResourceOAuth2ProviderResource_***](JSAPIPageResourceOAuth2ProviderResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateProvider**
```objc
-(NSURLSessionTask*) updateProviderWithProviderId: (NSString*) providerId
    providerResource: (JSAPIOAuth2ProviderResource*) providerResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing OAuth 2 provider

<b>Permissions Needed:</b> PUT

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* providerId = @"providerId_example"; // provider_id
JSAPIOAuth2ProviderResource* providerResource = [[JSAPIOAuth2ProviderResource alloc] init]; // providerResource

JSAPIAuthProvidersApi*apiInstance = [[JSAPIAuthProvidersApi alloc] init];

// Update an existing OAuth 2 provider
[apiInstance updateProviderWithProviderId:providerId
              providerResource:providerResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthProvidersApi->updateProvider: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **providerId** | **NSString***| provider_id | 
 **providerResource** | [**JSAPIOAuth2ProviderResource***](JSAPIOAuth2ProviderResource.md)| providerResource | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

