#import "JSAPIMonitoringIncidentResource.h"

@implementation JSAPIMonitoringIncidentResource

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

  return @{ @"alert": @"alert", @"currentLevel": @"current_level", @"endDate": @"end_date", @"_id": @"id", @"insufficientData": @"insufficient_data", @"levels": @"levels", @"startDate": @"start_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"endDate", @"insufficientData", @"startDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
