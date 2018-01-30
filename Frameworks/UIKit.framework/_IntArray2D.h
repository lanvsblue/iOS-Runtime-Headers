/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _IntArray2D : NSObject {
    long long * _arrayData;
    unsigned long long  _iSize;
    unsigned long long  _jSize;
    bool  _shouldBoundsCheck;
}

@property (nonatomic, readonly) unsigned long long iSize;
@property (nonatomic, readonly) unsigned long long jSize;
@property (nonatomic) bool shouldBoundsCheck;

+ (id)arrayWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;

- (long long):(unsigned long long)arg1 :(unsigned long long)arg2;
- (void):(unsigned long long)arg1 :(unsigned long long)arg2 newValue:(long long)arg3;
- (long long):(unsigned long long)arg1 :(unsigned long long)arg2 outOfBoundsReturnValue:(long long)arg3;
- (void)assertBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (unsigned long long)iSize;
- (bool)inBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;
- (id)initWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;
- (unsigned long long)jSize;
- (void)setShouldBoundsCheck:(bool)arg1;
- (bool)shouldBoundsCheck;

@end
