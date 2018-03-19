#import "JSAPIVideoGroupPropertyDefinitionResource.h"

@implementation JSAPIVideoGroupPropertyDefinitionResource

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
  NSMutableDictionary * mutableDictionary = [[NSMutableDictionary alloc] initWithDictionary:[super modalDictionary] copyItems:NO];
    
  [mutableDictionary addEntriesFromDictionary:@{ @"maxHeight": @"max_height", @"maxLength": @"max_length", @"maxWidth": @"max_width", @"minHeight": @"min_height", @"minLength": @"min_length", @"minWidth": @"min_width" }];
    
  return mutableDictionary;
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"maxHeight", @"maxLength", @"maxWidth", @"minHeight", @"minLength", @"minWidth"];
  return [super propertyIsOptional:propertyName] | [optionalProperties containsObject:propertyName];
}

@end
