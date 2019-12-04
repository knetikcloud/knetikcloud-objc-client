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

  return @{ @"additionalProperties": @"additional_properties", @"address1": @"address1", @"address2": @"address2", @"billingAddress1": @"billing_address1", @"billingAddress2": @"billing_address2", @"billingCityName": @"billing_city_name", @"billingCountryName": @"billing_country_name", @"billingFullName": @"billing_full_name", @"billingPostalCode": @"billing_postal_code", @"billingStateName": @"billing_state_name", @"cityName": @"city_name", @"countryName": @"country_name", @"email": @"email", @"federalTax": @"federal_tax", @"giftTarget": @"gift_target", @"itemNotes": @"item_notes", @"namePrefix": @"name_prefix", @"paidAmount": @"paid_amount", @"postalCode": @"postal_code", @"priceOverride": @"price_override", @"sku": @"sku", @"stateName": @"state_name", @"stateTax": @"state_tax", @"template": @"template", @"transactionDetails": @"transaction_details", @"transactionType": @"transaction_type", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"address1", @"address2", @"billingAddress1", @"billingAddress2", @"billingCityName", @"billingCountryName", @"billingFullName", @"billingPostalCode", @"billingStateName", @"cityName", @"countryName", @"email", @"federalTax", @"itemNotes", @"namePrefix", @"paidAmount", @"postalCode", @"priceOverride", @"stateName", @"stateTax", @"template", @"transactionDetails", @"userId"];

  return [optionalProperties containsObject:propertyName];
}

@end
