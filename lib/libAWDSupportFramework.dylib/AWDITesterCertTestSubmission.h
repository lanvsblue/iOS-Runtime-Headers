/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDITesterCertTestSubmission : PBCodable <NSCopying> {
    NSString * _accessoryName;
    NSString * _accessoryType;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _testName;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) NSString *accessoryType;
@property (nonatomic, readonly) bool hasAccessoryName;
@property (nonatomic, readonly) bool hasAccessoryType;
@property (nonatomic, readonly) bool hasTestName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *testName;
@property (nonatomic) unsigned long long timestamp;

- (id)accessoryName;
- (id)accessoryType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryName;
- (bool)hasAccessoryType;
- (bool)hasTestName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setAccessoryType:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTestName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)testName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
