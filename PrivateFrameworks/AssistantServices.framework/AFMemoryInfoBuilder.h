/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMemoryInfoBuilder : NSObject {
    AFMemoryInfo * _baseObject;
    struct _builderFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasVirtualMemorySizeInBytes : 1; 
        unsigned int hasNumberOfRegions : 1; 
        unsigned int hasPageSizeInBytes : 1; 
        unsigned int hasResidentMemorySizeInBytes : 1; 
        unsigned int hasPeakResidentMemorySizeInBytes : 1; 
        unsigned int hasPhysicalMemoryFootprintInBytes : 1; 
    }  _builderFlags;
    int  _numberOfRegions;
    int  _pageSizeInBytes;
    unsigned long long  _peakResidentMemorySizeInBytes;
    unsigned long long  _physicalMemoryFootprintInBytes;
    unsigned long long  _residentMemorySizeInBytes;
    unsigned long long  _virtualMemorySizeInBytes;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setNumberOfRegions:(int)arg1;
- (id)setPageSizeInBytes:(int)arg1;
- (id)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1;
- (id)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1;
- (id)setResidentMemorySizeInBytes:(unsigned long long)arg1;
- (id)setVirtualMemorySizeInBytes:(unsigned long long)arg1;

@end
