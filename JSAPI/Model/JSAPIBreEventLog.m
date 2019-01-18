#import "JSAPIBreEventLog.h"

@implementation JSAPIBreEventLog

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

  return @{ @"age": @"age", @"customer": @"customer", @"eventExpansionDuration": @"event_expansion_duration", @"eventId": @"event_id", @"eventLoggingDuration": @"event_logging_duration", @"eventName": @"event_name", @"eventReceivedDate": @"event_received_date", @"eventStartDate": @"event_start_date", @"_id": @"id", @"parameters": @"parameters", @"rules": @"rules", @"runtime": @"runtime" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"age", @"customer", @"eventExpansionDuration", @"eventId", @"eventLoggingDuration", @"eventName", @"eventReceivedDate", @"eventStartDate", @"_id", @"parameters", @"rules", @"runtime"];

  return [optionalProperties containsObject:propertyName];
}

@end
