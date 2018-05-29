#import "JSAPIAccessTypeResource.h"

@implementation JSAPIAccessTypeResource

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

  return @{ @"access": @"access", @"actions": @"actions", @"_id": @"id", @"parentId": @"parent_id", @"parentType": @"parent_type", @"subTypes": @"sub_types", @"type": @"type" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"actions", @"_id", @"parentId", @"parentType", ];

  return [optionalProperties containsObject:propertyName];
}

@end
