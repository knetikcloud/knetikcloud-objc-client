#import "JSAPIAccessResourceCreateRequest.h"

@implementation JSAPIAccessResourceCreateRequest

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

  return @{ @"access": @"access", @"_id": @"id", @"parentId": @"parent_id", @"parentType": @"parent_type", @"sidReplacements": @"sid_replacements" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"access", @"parentId", @"sidReplacements"];

  return [optionalProperties containsObject:propertyName];
}

@end
