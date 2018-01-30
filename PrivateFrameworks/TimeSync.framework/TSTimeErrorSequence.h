/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSTimeErrorSequence : NSObject {
    NSArray * _timeErrors;
}

@property (nonatomic, readonly, copy) NSArray *timeErrors;

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long*)arg1 timeError:(long long*)arg2 count:(long long)arg3;

- (void)dealloc;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(bool)arg5;
- (id)initWithTimeErrors:(id)arg1;
- (id)timeErrors;

@end
