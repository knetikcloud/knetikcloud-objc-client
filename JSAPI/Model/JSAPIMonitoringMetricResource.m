#import "JSAPIMonitoringMetricResource.h"

@implementation JSAPIMonitoringMetricResource

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

  return @{ @"dimensionKeys": @"dimension_keys", @"_id": @"id", @"metricType": @"metric_type", @"name": @"name", @"parentMetricId": @"parent_metric_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"dimensionKeys", @"name", @"parentMetricId"];

  return [optionalProperties containsObject:propertyName];
}

@end
