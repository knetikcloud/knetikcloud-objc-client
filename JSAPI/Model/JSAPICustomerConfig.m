#import "JSAPICustomerConfig.h"

@implementation JSAPICustomerConfig

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

  return @{ @"aliases": @"aliases", @"database": @"database", @"forceTemplates": @"force_templates", @"name": @"name", @"s3Config": @"s3_config", @"searchEnabled": @"search_enabled" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"aliases", @"database", @"forceTemplates", @"name", @"s3Config", @"searchEnabled"];

  return [optionalProperties containsObject:propertyName];
}

@end
