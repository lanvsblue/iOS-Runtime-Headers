/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding> {
    int  _numberOfRegions;
    int  _pageSizeInBytes;
    unsigned long long  _peakResidentMemorySizeInBytes;
    unsigned long long  _physicalMemoryFootprintInBytes;
    unsigned long long  _residentMemorySizeInBytes;
    unsigned long long  _virtualMemorySizeInBytes;
}

@property (nonatomic, readonly) int numberOfRegions;
@property (nonatomic, readonly) int pageSizeInBytes;
@property (nonatomic, readonly) unsigned long long peakResidentMemorySizeInBytes;
@property (nonatomic, readonly) unsigned long long physicalMemoryFootprintInBytes;
@property (nonatomic, readonly) unsigned long long residentMemorySizeInBytes;
@property (nonatomic, readonly) unsigned long long virtualMemorySizeInBytes;

+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)builder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (int)numberOfRegions;
- (int)pageSizeInBytes;
- (unsigned long long)peakResidentMemorySizeInBytes;
- (unsigned long long)physicalMemoryFootprintInBytes;
- (unsigned long long)residentMemorySizeInBytes;
- (unsigned long long)virtualMemorySizeInBytes;

@end