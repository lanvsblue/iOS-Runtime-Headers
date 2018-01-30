/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposition : NSObject {
    NSString * _expressiveSendStyleID;
    bool  _isFromExternalSource;
    IMPluginPayload * _shelfPluginPayload;
    NSAttributedString * _subject;
    NSAttributedString * _text;
}

@property (getter=isExpirableComposition, nonatomic, readonly) bool expirableComposition;
@property (nonatomic, copy) NSString *expressiveSendStyleID;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasNonwhiteSpaceContent;
@property (nonatomic) bool isFromExternalSource;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (nonatomic, readonly) NSArray *pasteboardItems;
@property (nonatomic, readonly) NSArray *pluginDisplayContainers;
@property (nonatomic, readonly, copy) NSString *previewText;
@property (getter=isSaveable, nonatomic, readonly) bool saveable;
@property (getter=isSendAnimated, nonatomic, readonly) bool sendAnimated;
@property (nonatomic, copy) IMPluginPayload *shelfPluginPayload;
@property (nonatomic, copy) NSAttributedString *subject;
@property (nonatomic, copy) NSAttributedString *text;
@property (getter=isTextOnly, nonatomic, readonly) bool textOnly;

+ (id)__ck_valueForItemClass:(Class)arg1 forItemProvider:(id)arg2;
+ (bool)_shouldCreateMediaObjectForUTIType:(id)arg1;
+ (id)_temporaryURLFromURL:(id)arg1;
+ (id)audioCompositionWithMediaObject:(id)arg1;
+ (id)composition;
+ (id)compositionForMessageParts:(id)arg1 preserveSubject:(bool)arg2;
+ (id)compositionFromItemProviders:(id)arg1;
+ (id)compositionWithMSMessage:(id)arg1 appExtensionIdentifier:(id)arg2;
+ (id)compositionWithMediaObject:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMediaObjects:(id)arg1 subject:(id)arg2;
+ (id)compositionWithPluginDisplayContainer:(id)arg1 subject:(id)arg2;
+ (id)compositionWithShelfPluginPayload:(id)arg1;
+ (id)dataForPasteboardType:(id)arg1 forItemProvider:(id)arg2;
+ (void)deleteCompositionWithGUID:(id)arg1;
+ (id)expirableCompositionWithMediaObject:(id)arg1;
+ (id)filenameForType:(id)arg1 forItemProvider:(id)arg2;
+ (id)mediaObjectForItemProvider:(id)arg1;
+ (id)newExpirableCompositionWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;
+ (id)pasteboardTypesForItemProvider:(id)arg1;
+ (id)photoPickerCompositionWithMediaObject:(id)arg1;
+ (id)photoPickerCompositionWithMediaObjects:(id)arg1;
+ (id)pluginDisplayContainerForItemProvider:(id)arg1;
+ (id)quickImageCompositionWithMediaObject:(id)arg1;
+ (void)requestCompositionFromItemProviders:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestFilenameForType:(id)arg1 forItemProvider:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestMediaObjectForItemProvider:(id)arg1 type:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestMediaObjectsForAttributedString:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestPluginDisplayContainerForItemProvider:(id)arg1 completion:(id /* block */)arg2;
+ (id)richestMediaTypeForItemProvider:(id)arg1;
+ (id)savedCompositionForGUID:(id)arg1;
+ (id)stickerCompositionWithMediaObjects:(id)arg1;
+ (void)updateComposition:(id*)arg1 fromItemProvider:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_compositionByAppendingText:(id)arg1 isExpirable:(bool)arg2 shelfPluginPayload:(id)arg3;
- (id)_compositionParts;
- (id)_messageFromPayload:(id)arg1 firstGUID:(id)arg2;
- (Class)balloonViewClass;
- (id)compositionByAppendingComposition:(id)arg1;
- (id)compositionByAppendingMediaObject:(id)arg1;
- (id)compositionByAppendingMediaObjects:(id)arg1;
- (id)compositionByAppendingPluginDisplayContainer:(id)arg1;
- (id)compositionByAppendingText:(id)arg1;
- (id)compositionByReplacingMediaObject:(id)arg1 withMediaObject:(id)arg2;
- (id)compositionWithExpressiveSendStyleID:(id)arg1;
- (id)description;
- (id)expressiveSendStyleID;
- (id)externalSourceComposition;
- (bool)hasContent;
- (bool)hasNonwhiteSpaceContent;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 subject:(id)arg2;
- (id)initWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isExpirableComposition;
- (bool)isFromExternalSource;
- (bool)isSaveable;
- (bool)isSendAnimated;
- (bool)isTextOnly;
- (id)mediaObjects;
- (id)messageWithGUID:(id)arg1;
- (id)messageWithGUID:(id)arg1 superFormatText:(id)arg2 superFormatSubject:(id)arg3 fileTransferGUIDs:(id)arg4 mediaObjects:(id)arg5 balloonBundleID:(id)arg6 payloadData:(id)arg7;
- (id)messagesFromCompositionFirstGUIDForMessage:(id)arg1;
- (id)pasteboardItems;
- (id)pluginDisplayContainers;
- (id)previewText;
- (void)saveCompositionWithGUID:(id)arg1;
- (void)setExpressiveSendStyleID:(id)arg1;
- (void)setIsFromExternalSource:(bool)arg1;
- (void)setShelfPluginPayload:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setText:(id)arg1;
- (id)shelfPluginPayload;
- (id)subject;
- (id)superFormatSubject;
- (id)superFormatText:(id*)arg1;
- (id)superFormatText:(id)arg1 transfterGUIDs:(id*)arg2 mediaObjects:(id*)arg3;
- (id)text;

@end
