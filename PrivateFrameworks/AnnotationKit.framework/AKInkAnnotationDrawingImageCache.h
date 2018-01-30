/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKInkAnnotationDrawingImageCache : NSObject {
    NSPointerArray * _pointerArray;
}

@property (nonatomic, retain) NSPointerArray *pointerArray;

+ (void)purgeSharedCache;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_addEntryWithObject:(id)arg1 key:(id)arg2;
- (long long)_indexOfPointer:(void*)arg1;
- (void)_makeKeyMostRecentlyUsed:(id)arg1;
- (void)_purgeExtraEntries;
- (void)_removeEntryAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)pointerArray;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setPointerArray:(id)arg1;

@end
