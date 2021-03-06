#import "JSAPIUserInventoryAddRequest.h"

@implementation JSAPIUserInventoryAddRequest

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

  return @{ @"invoiceId": @"invoice_id", @"note": @"note", @"overrides": @"overrides", @"skipInvoice": @"skip_invoice", @"sku": @"sku" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"invoiceId", @"overrides", ];

  return [optionalProperties containsObject:propertyName];
}

@end
