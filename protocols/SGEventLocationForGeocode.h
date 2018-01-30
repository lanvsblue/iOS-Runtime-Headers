/* Generated by RuntimeBrowser.
 */

@protocol SGEventLocationForGeocode <NSObject>

@required

- (double)geocodeAccuracy;
- (NSString *)geocodeAddress;
- (NSString *)geocodeAirportCode;
- (NSData *)geocodeHandle;
- (bool)geocodeIsEnd;
- (bool)geocodeIsStart;
- (NSString *)geocodeLabel;
- (double)geocodeLatitude;
- (double)geocodeLongitude;
- (id)geocodedLocationWithLabel:(NSString *)arg1 address:(NSString *)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(NSData *)arg6;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(NSData *)arg4;

@end
