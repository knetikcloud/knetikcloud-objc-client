# JSAPIAuthUsersApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addSid**](JSAPIAuthUsersApi.md#addsid) | **POST** /access/users/{user_id}/sids | Add a sid to a user
[**getSid**](JSAPIAuthUsersApi.md#getsid) | **GET** /access/users/{user_id}/sids/{sid} | Get a user sid
[**getSids**](JSAPIAuthUsersApi.md#getsids) | **GET** /access/users/{user_id}/sids | List and search user sids
[**removeSid**](JSAPIAuthUsersApi.md#removesid) | **DELETE** /access/users/{user_id}/sids/{sid} | Remove a sid from a user


# **addSid**
```objc
-(NSURLSessionTask*) addSidWithUserId: (NSNumber*) userId
    sid: (JSAPIUserSidResource*) sid
        completionHandler: (void (^)(JSAPIUserSidResource* output, NSError* error)) handler;
```

Add a sid to a user

No error returned if the user already has the sid. <b>Resources Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The resource type
JSAPIUserSidResource* sid = [[JSAPIUserSidResource alloc] init]; // The new sid for the user (optional)

JSAPIAuthUsersApi*apiInstance = [[JSAPIAuthUsersApi alloc] init];

// Add a sid to a user
[apiInstance addSidWithUserId:userId
              sid:sid
          completionHandler: ^(JSAPIUserSidResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthUsersApi->addSid: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The resource type | 
 **sid** | [**JSAPIUserSidResource***](JSAPIUserSidResource.md)| The new sid for the user | [optional] 

### Return type

[**JSAPIUserSidResource***](JSAPIUserSidResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSid**
```objc
-(NSURLSessionTask*) getSidWithUserId: (NSNumber*) userId
    sid: (NSString*) sid
        completionHandler: (void (^)(JSAPIUserSidResource* output, NSError* error)) handler;
```

Get a user sid

Http error 404 means the user does not have the sid<b>Resources Needed:</b> VIEW_ACCESS

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The resource type
NSString* sid = @"sid_example"; // The resource id

JSAPIAuthUsersApi*apiInstance = [[JSAPIAuthUsersApi alloc] init];

// Get a user sid
[apiInstance getSidWithUserId:userId
              sid:sid
          completionHandler: ^(JSAPIUserSidResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthUsersApi->getSid: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The resource type | 
 **sid** | **NSString***| The resource id | 

### Return type

[**JSAPIUserSidResource***](JSAPIUserSidResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSids**
```objc
-(NSURLSessionTask*) getSidsWithUserId: (NSNumber*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceUserSidResource_* output, NSError* error)) handler;
```

List and search user sids

<b>Resources Needed:</b> VIEW_ACCESS

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The resource type
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"resource:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to resource:ASC)

JSAPIAuthUsersApi*apiInstance = [[JSAPIAuthUsersApi alloc] init];

// List and search user sids
[apiInstance getSidsWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceUserSidResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthUsersApi->getSids: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The resource type | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to resource:ASC]

### Return type

[**JSAPIPageResourceUserSidResource_***](JSAPIPageResourceUserSidResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeSid**
```objc
-(NSURLSessionTask*) removeSidWithUserId: (NSNumber*) userId
    sid: (NSString*) sid
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a sid from a user

No error returned if the suer does not have the sid. <b>Resources Needed:</b> ROLE_SUPER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user id
NSString* sid = @"sid_example"; // The security id

JSAPIAuthUsersApi*apiInstance = [[JSAPIAuthUsersApi alloc] init];

// Remove a sid from a user
[apiInstance removeSidWithUserId:userId
              sid:sid
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthUsersApi->removeSid: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user id | 
 **sid** | **NSString***| The security id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

