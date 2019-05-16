#import "JSAPIUserResource.h"

@implementation JSAPIUserResource

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

  return @{ @"additionalProperties": @"additional_properties", @"address": @"address", @"address2": @"address2", @"avatarUrl": @"avatar_url", @"city": @"city", @"dateOfBirth": @"date_of_birth", @"_description": @"description", @"displayName": @"display_name", @"email": @"email", @"firstName": @"first_name", @"fullname": @"fullname", @"gender": @"gender", @"_id": @"id", @"lastActivity": @"last_activity", @"lastName": @"last_name", @"lastUpdated": @"last_updated", @"memberSince": @"member_since", @"mobileNumber": @"mobile_number", @"password": @"password", @"postalCode": @"postal_code", @"state": @"state", @"tags": @"tags", @"template": @"template", @"username": @"username" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"address", @"address2", @"avatarUrl", @"city", @"dateOfBirth", @"_description", @"displayName", @"firstName", @"fullname", @"gender", @"_id", @"lastActivity", @"lastName", @"lastUpdated", @"memberSince", @"mobileNumber", @"password", @"postalCode", @"state", @"tags", @"template", ];

  return [optionalProperties containsObject:propertyName];
}

@end
