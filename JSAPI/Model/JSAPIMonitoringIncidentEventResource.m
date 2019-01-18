#import "JSAPIMonitoringIncidentEventResource.h"

@implementation JSAPIMonitoringIncidentEventResource

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

  return @{ @"alertId": @"alert_id", @"date": @"date", @"_id": @"id", @"incidentId": @"incident_id", @"levelName": @"level_name", @"status": @"status", @"triggerValue": @"trigger_value" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"date", @"_id", @"incidentId", @"triggerValue"];

  return [optionalProperties containsObject:propertyName];
}

@end
