#import "JSAPIGroupMemberResource.h"

@implementation JSAPIGroupMemberResource

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

  return @{ @"additionalProperties": @"additional_properties", @"group": @"group", @"implicit": @"implicit", @"memberSince": @"member_since", @"membershipId": @"membership_id", @"order": @"order", @"status": @"status", @"template": @"template", @"updatedDate": @"updated_date", @"user": @"user" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"group", @"implicit", @"memberSince", @"membershipId", @"order", @"status", @"template", @"updatedDate", ];

  return [optionalProperties containsObject:propertyName];
}

@end
