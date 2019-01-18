#import "JSAPIClientCustomizationResource.h"

@implementation JSAPIClientCustomizationResource

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

  return @{ @"credentialText": @"credential_text", @"customCssUrl": @"custom_css_url", @"faviconUrl": @"favicon_url", @"footer": @"footer", @"forgotPasswordText": @"forgot_password_text", @"forgotPasswordUrl": @"forgot_password_url", @"forgotUsernameText": @"forgot_username_text", @"forgotUsernameUrl": @"forgot_username_url", @"header": @"header", @"invalidLoginText": @"invalid_login_text", @"loginButtonText": @"login_button_text", @"logoutText": @"logout_text", @"passwordPlaceholder": @"password_placeholder", @"providerText": @"provider_text", @"signUpText": @"sign_up_text", @"signUpUrl": @"sign_up_url", @"title": @"title", @"usernamePlaceholder": @"username_placeholder" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"credentialText", @"customCssUrl", @"faviconUrl", @"footer", @"forgotPasswordText", @"forgotPasswordUrl", @"forgotUsernameText", @"forgotUsernameUrl", @"header", @"invalidLoginText", @"loginButtonText", @"logoutText", @"passwordPlaceholder", @"providerText", @"signUpText", @"signUpUrl", @"title", @"usernamePlaceholder"];

  return [optionalProperties containsObject:propertyName];
}

@end
