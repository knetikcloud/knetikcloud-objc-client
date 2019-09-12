#import "JSAPIVerificationRequest.h"

@implementation JSAPIVerificationRequest

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

  return @{ @"additionalProperties": @"additional_properties", @"code": @"code", @"codelength": @"codelength", @"createdDate": @"created_date", @"expirationDate": @"expiration_date", @"includeLetters": @"include_letters", @"includeNumbers": @"include_numbers", @"originator": @"originator", @"targetUser": @"target_user", @"template": @"template", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"code", @"codelength", @"createdDate", @"expirationDate", @"includeLetters", @"includeNumbers", @"originator", @"targetUser", @"template", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
