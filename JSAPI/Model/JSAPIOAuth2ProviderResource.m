#import "JSAPIOAuth2ProviderResource.h"

@implementation JSAPIOAuth2ProviderResource

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:[self modalDictionary]];
}

+ (NSDictionary *)modalDictionary {

  return @{ @"authorizationGrantType": @"authorization_grant_type", @"authorizationUri": @"authorization_uri", @"clientAuthenticationMethod": @"client_authentication_method", @"clientId": @"client_id", @"clientName": @"client_name", @"clientSecret": @"client_secret", @"color": @"color", @"icon": @"icon", @"jwkSetUri": @"jwk_set_uri", @"oidcCompliant": @"oidc_compliant", @"providerDetails": @"provider_details", @"providerId": @"provider_id", @"scopes": @"scopes", @"tokenUri": @"token_uri", @"userInfoEndpointUri": @"user_info_endpoint_uri", @"userInfoEndpointUserNameAttributeName": @"user_info_endpoint_user_name_attribute_name" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"authorizationGrantType", @"authorizationUri", @"clientAuthenticationMethod", @"clientId", @"clientName", @"clientSecret", @"color", @"icon", @"jwkSetUri", @"oidcCompliant", @"providerDetails", @"providerId", @"scopes", @"tokenUri", @"userInfoEndpointUri", @"userInfoEndpointUserNameAttributeName"];

  return [optionalProperties containsObject:propertyName];
}

@end
