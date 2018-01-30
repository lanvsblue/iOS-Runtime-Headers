/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EARCaesuraSilencePosteriorGenerator : NSObject {
    <EARCaesuraSilencePosteriorGeneratorDelegate> * _delegate;
    struct shared_ptr<quasar::SilencePosteriorGenerator> { 
        struct SilencePosteriorGenerator {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _silenceGenerator;
    NSObject<OS_dispatch_queue> * _spgQueue;
}

@property (nonatomic) <EARCaesuraSilencePosteriorGeneratorDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_startComputeTask;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endAudio;
- (long long)getFrameDurationMs;
- (id)initWithConfigFile:(id)arg1;
- (id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2;
- (id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 queue:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
