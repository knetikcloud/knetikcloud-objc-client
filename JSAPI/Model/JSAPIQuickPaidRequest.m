#import "JSAPIQuickPaidRequest.h"

@implementation JSAPIQuickPaidRequest

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

  return @{ @"giftTarget": @"gift_target", @"itemNotes": @"item_notes", @"paidAmount": @"paid_amount", @"priceOverride": @"price_override", @"sku": @"sku", @"transactionDetails": @"transaction_details", @"transactionType": @"transaction_type", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"itemNotes", @"priceOverride", @"transactionDetails", @"userId"];

  return [optionalProperties containsObject:propertyName];
}

@end
