/* Generated by RuntimeBrowser.
 */

@protocol MSPFavoritePlace <MSPFavorite>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinateOfDroppedPin;
- (int)floorOrdinalOfDroppedPin;
- (<GEOMapItem> *)geoMapItem;
- (NSString *)title;

@end
