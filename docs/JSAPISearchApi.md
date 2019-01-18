# JSAPISearchApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**indexDocument**](JSAPISearchApi.md#indexdocument) | **POST** /search/documents | Adds a document to be indexed. For system use only.
[**reindexAll**](JSAPISearchApi.md#reindexall) | **POST** /search/reindex | Triggers a full re-indexing of all documents of the specified type. For system use only.
[**removeDocument**](JSAPISearchApi.md#removedocument) | **DELETE** /search/documents | Remove a document from the index. For system use only.
[**searchCountGET**](JSAPISearchApi.md#searchcountget) | **GET** /search/count/{type} | Count matches with no template
[**searchCountPOST**](JSAPISearchApi.md#searchcountpost) | **POST** /search/count/{type} | Count matches with no template
[**searchDocumentGET**](JSAPISearchApi.md#searchdocumentget) | **GET** /search/documents/{type}/{id} | Get document with no template
[**searchExplainGET**](JSAPISearchApi.md#searchexplainget) | **GET** /search/explain/{type}/{id} | Explain matches with no template
[**searchExplainPOST**](JSAPISearchApi.md#searchexplainpost) | **POST** /search/explain/{type}/{id} | Explain matches with no template
[**searchIndex**](JSAPISearchApi.md#searchindex) | **POST** /search/index/{type} | Search an index with no template
[**searchIndexGET**](JSAPISearchApi.md#searchindexget) | **GET** /search/index/{type} | Search an index with no template
[**searchIndicesGET**](JSAPISearchApi.md#searchindicesget) | **GET** /search/indices | Get indices
[**searchMappingsGET**](JSAPISearchApi.md#searchmappingsget) | **GET** /search/mappings/{type} | Get mapping with no template
[**searchPublicIndex**](JSAPISearchApi.md#searchpublicindex) | **POST** /search/public/{type} | Search public index with no template
[**searchValidateGET**](JSAPISearchApi.md#searchvalidateget) | **GET** /search/validate/{type} | Validate matches with no template
[**searchValidatePOST**](JSAPISearchApi.md#searchvalidatepost) | **POST** /search/validate/{type} | Validate matches with no template


# **indexDocument**
```objc
-(NSURLSessionTask*) indexDocumentWithDocument: (JSAPISearchDocument*) document
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a document to be indexed. For system use only.

<b>Permissions Needed:</b> SEARCH_MANAGEMENT

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPISearchDocument* document = [[JSAPISearchDocument alloc] init]; // document

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Adds a document to be indexed. For system use only.
[apiInstance indexDocumentWithDocument:document
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->indexDocument: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **document** | [**JSAPISearchDocument***](JSAPISearchDocument.md)| document | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **reindexAll**
```objc
-(NSURLSessionTask*) reindexAllWithRequest: (JSAPIReindexRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Triggers a full re-indexing of all documents of the specified type. For system use only.

<b>Permissions Needed:</b> SEARCH_MANAGEMENT

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIReindexRequest* request = [[JSAPIReindexRequest alloc] init]; // request

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Triggers a full re-indexing of all documents of the specified type. For system use only.
[apiInstance reindexAllWithRequest:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->reindexAll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIReindexRequest***](JSAPIReindexRequest.md)| request | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeDocument**
```objc
-(NSURLSessionTask*) removeDocumentWithRequest: (JSAPIDocumentRemoveRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a document from the index. For system use only.

<b>Permissions Needed:</b> SEARCH_MANAGEMENT

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIDocumentRemoveRequest* request = [[JSAPIDocumentRemoveRequest alloc] init]; // request

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Remove a document from the index. For system use only.
[apiInstance removeDocumentWithRequest:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->removeDocument: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIDocumentRemoveRequest***](JSAPIDocumentRemoveRequest.md)| request | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchCountGET**
```objc
-(NSURLSessionTask*) searchCountGETWithType: (NSString*) type
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Count matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Count matches with no template
[apiInstance searchCountGETWithType:type
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchCountGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchCountPOST**
```objc
-(NSURLSessionTask*) searchCountPOSTWithType: (NSString*) type
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Count matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Count matches with no template
[apiInstance searchCountPOSTWithType:type
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchCountPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchDocumentGET**
```objc
-(NSURLSessionTask*) searchDocumentGETWithType: (NSString*) type
    _id: (NSString*) _id
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Get document with no template

This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Get document with no template
[apiInstance searchDocumentGETWithType:type
              _id:_id
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchDocumentGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchExplainGET**
```objc
-(NSURLSessionTask*) searchExplainGETWithType: (NSString*) type
    _id: (NSString*) _id
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Explain matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Explain matches with no template
[apiInstance searchExplainGETWithType:type
              _id:_id
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchExplainGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchExplainPOST**
```objc
-(NSURLSessionTask*) searchExplainPOSTWithType: (NSString*) type
    _id: (NSString*) _id
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Explain matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Explain matches with no template
[apiInstance searchExplainPOSTWithType:type
              _id:_id
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchExplainPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndex**
```objc
-(NSURLSessionTask*) searchIndexWithType: (NSString*) type
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Search an index with no template

This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Search an index with no template
[apiInstance searchIndexWithType:type
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchIndex: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndexGET**
```objc
-(NSURLSessionTask*) searchIndexGETWithType: (NSString*) type
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Search an index with no template

This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Search an index with no template
[apiInstance searchIndexGETWithType:type
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchIndexGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndicesGET**
```objc
-(NSURLSessionTask*) searchIndicesGETWithCompletionHandler: 
        (void (^)(NSObject* output, NSError* error)) handler;
```

Get indices

This is a 1 to 1 mapping of a ElasticSearch call to _cat/indices for indices.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Get indices
[apiInstance searchIndicesGETWithCompletionHandler: 
          ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchIndicesGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchMappingsGET**
```objc
-(NSURLSessionTask*) searchMappingsGETWithType: (NSString*) type
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Get mapping with no template

This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Get mapping with no template
[apiInstance searchMappingsGETWithType:type
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchMappingsGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchPublicIndex**
```objc
-(NSURLSessionTask*) searchPublicIndexWithType: (NSString*) type
    user: (NSNumber*) user
    query: (JSAPISearchQuery*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Search public index with no template

Make an ElasticSearch query against a public index. Results filtered for records the caller has GET permission on. Further information on query format can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSNumber* user = @56; // A user to impersonate for security. Requires SEARCH permission for actual caller (optional)
JSAPISearchQuery* query = [[JSAPISearchQuery alloc] init]; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Search public index with no template
[apiInstance searchPublicIndexWithType:type
              user:user
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchPublicIndex: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **user** | **NSNumber***| A user to impersonate for security. Requires SEARCH permission for actual caller | [optional] 
 **query** | [**JSAPISearchQuery***](JSAPISearchQuery.md)| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchValidateGET**
```objc
-(NSURLSessionTask*) searchValidateGETWithType: (NSString*) type
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Validate matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Validate matches with no template
[apiInstance searchValidateGETWithType:type
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchValidateGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchValidatePOST**
```objc
-(NSURLSessionTask*) searchValidatePOSTWithType: (NSString*) type
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Validate matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Validate matches with no template
[apiInstance searchValidatePOSTWithType:type
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchValidatePOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

