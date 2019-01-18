# JSAPIRuleEngineExpressionsApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBREExpression**](JSAPIRuleEngineExpressionsApi.md#getbreexpression) | **GET** /bre/expressions/{type} | Lookup a specific expression
[**getBREExpressions**](JSAPIRuleEngineExpressionsApi.md#getbreexpressions) | **GET** /bre/expressions | Get a list of supported expressions to use in conditions or actions.
[**getExpressionAsText**](JSAPIRuleEngineExpressionsApi.md#getexpressionastext) | **POST** /bre/expressions | Returns the textual representation of an expression


# **getBREExpression**
```objc
-(NSURLSessionTask*) getBREExpressionWithType: (NSString*) type
        completionHandler: (void (^)(JSAPIExpressionResource* output, NSError* error)) handler;
```

Lookup a specific expression

<b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // Specifiy the type of expression as returned by the listing endpoint

JSAPIRuleEngineExpressionsApi*apiInstance = [[JSAPIRuleEngineExpressionsApi alloc] init];

// Lookup a specific expression
[apiInstance getBREExpressionWithType:type
          completionHandler: ^(JSAPIExpressionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineExpressionsApi->getBREExpression: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| Specifiy the type of expression as returned by the listing endpoint | 

### Return type

[**JSAPIExpressionResource***](JSAPIExpressionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREExpressions**
```objc
-(NSURLSessionTask*) getBREExpressionsWithFilterTypeGroup: (NSString*) filterTypeGroup
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceExpressionResource_* output, NSError* error)) handler;
```

Get a list of supported expressions to use in conditions or actions.

Each resource contains a type and a definition that are read-only, all the other fields must be provided when using the expression in a rule. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterTypeGroup = @"filterTypeGroup_example"; // Filter for expressions by type group (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIRuleEngineExpressionsApi*apiInstance = [[JSAPIRuleEngineExpressionsApi alloc] init];

// Get a list of supported expressions to use in conditions or actions.
[apiInstance getBREExpressionsWithFilterTypeGroup:filterTypeGroup
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceExpressionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineExpressionsApi->getBREExpressions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTypeGroup** | **NSString***| Filter for expressions by type group | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceExpressionResource_***](JSAPIPageResourceExpressionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getExpressionAsText**
```objc
-(NSURLSessionTask*) getExpressionAsTextWithExpression: (JSAPIExpressionResource*) expression
        completionHandler: (void (^)(JSAPIStringWrapper* output, NSError* error)) handler;
```

Returns the textual representation of an expression

<b>Permissions Needed:</b> BRE_RULE_ENGINE_EXPRESSIONS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIExpressionResource* expression = [[JSAPIExpressionResource alloc] init]; // The expression resource to be converted (optional)

JSAPIRuleEngineExpressionsApi*apiInstance = [[JSAPIRuleEngineExpressionsApi alloc] init];

// Returns the textual representation of an expression
[apiInstance getExpressionAsTextWithExpression:expression
          completionHandler: ^(JSAPIStringWrapper* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineExpressionsApi->getExpressionAsText: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **expression** | [**JSAPIExpressionResource***](JSAPIExpressionResource.md)| The expression resource to be converted | [optional] 

### Return type

[**JSAPIStringWrapper***](JSAPIStringWrapper.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

