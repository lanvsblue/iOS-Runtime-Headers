/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying> {
    NSDate * _earliestBookingDateForResults;
    NSDate * _latestBookingDateForResults;
    NSNumber * _maximumNumberOfResults;
    unsigned long long  _partySize;
    NSDate * _preferredBookingDate;
    NSDateComponents * _preferredBookingDateComponents;
    INRestaurant * _restaurant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *earliestBookingDateForResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *latestBookingDateForResults;
@property (nonatomic, copy) NSNumber *maximumNumberOfResults;
@property (nonatomic) unsigned long long partySize;
@property (nonatomic, retain) NSDate *preferredBookingDate;
@property (nonatomic, copy) NSDateComponents *preferredBookingDateComponents;
@property (nonatomic, copy) INRestaurant *restaurant;
@property (readonly) Class superclass;

+ (id)intentDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)earliestBookingDateForResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 partySize:(unsigned long long)arg2 preferredBookingDateComponents:(id)arg3 maximumNumberOfResults:(id)arg4 earliestBookingDateForResults:(id)arg5 latestBookingDateForResults:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)latestBookingDateForResults;
- (id)maximumNumberOfResults;
- (unsigned long long)partySize;
- (id)preferredBookingDate;
- (id)preferredBookingDateComponents;
- (id)restaurant;
- (void)setEarliestBookingDateForResults:(id)arg1;
- (void)setLatestBookingDateForResults:(id)arg1;
- (void)setMaximumNumberOfResults:(id)arg1;
- (void)setPartySize:(unsigned long long)arg1;
- (void)setPreferredBookingDate:(id)arg1;
- (void)setPreferredBookingDateComponents:(id)arg1;
- (void)setRestaurant:(id)arg1;

@end
