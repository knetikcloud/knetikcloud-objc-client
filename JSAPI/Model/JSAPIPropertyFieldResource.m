#import "JSAPIPropertyFieldResource.h"

@implementation JSAPIPropertyFieldResource

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

  return @{ @"_description": @"description", @"innerType": @"inner_type", @"innerTypeFields": @"inner_type_fields", @"name": @"name", @"required": @"required", @"type": @"type", @"validValues": @"valid_values" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_description", @"innerType", @"innerTypeFields", @"name", @"required", @"type", @"validValues"];

  return [optionalProperties containsObject:propertyName];
}

@end
