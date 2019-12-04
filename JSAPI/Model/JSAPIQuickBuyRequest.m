#import "JSAPIQuickBuyRequest.h"

@implementation JSAPIQuickBuyRequest

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

  return @{ @"address1": @"address1", @"address2": @"address2", @"billingAddress1": @"billing_address1", @"billingAddress2": @"billing_address2", @"billingCityName": @"billing_city_name", @"billingCountryName": @"billing_country_name", @"billingFullName": @"billing_full_name", @"billingPostalCode": @"billing_postal_code", @"billingStateName": @"billing_state_name", @"cityName": @"city_name", @"countryName": @"country_name", @"email": @"email", @"namePrefix": @"name_prefix", @"postalCode": @"postal_code", @"sku": @"sku", @"stateName": @"state_name", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"address1", @"address2", @"billingAddress1", @"billingAddress2", @"billingCityName", @"billingCountryName", @"billingFullName", @"billingPostalCode", @"billingStateName", @"cityName", @"countryName", @"email", @"namePrefix", @"postalCode", @"stateName", @"userId"];

  return [optionalProperties containsObject:propertyName];
}

@end
