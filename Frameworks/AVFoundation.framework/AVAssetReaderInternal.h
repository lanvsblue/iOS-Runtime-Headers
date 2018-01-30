/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderInternal : NSObject {
    AVAsset * asset;
    NSError * error;
    NSError * errorThatOccurredBeforeStartReading;
    struct OpaqueFigAssetReader { } * figAssetReader;
    NSMutableSet * outputFinishedCallbackInvokers;
    NSMutableArray * outputs;
    bool  readSingleSample;
    long long  status;
    NSObject<OS_dispatch_queue> * statusReadWriteQueue;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  timeRange;
    AVWeakReference * weakReference;
}

@end
