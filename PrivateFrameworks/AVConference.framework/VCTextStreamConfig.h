/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTextStreamConfig : VCMediaStreamConfig {
    unsigned char  _numRedundantPayloads;
    bool  _redEnabled;
}

@property (nonatomic) unsigned char numRedundantPayloads;
@property (getter=isRedEnabled, nonatomic, readonly) bool redEnabled;

- (id)initWithClientDictionary:(id)arg1;
- (bool)isRedEnabled;
- (unsigned char)numRedundantPayloads;
- (void)setNumRedundantPayloads:(unsigned char)arg1;
- (bool)setupCodecWithClientDictionary:(id)arg1;

@end
