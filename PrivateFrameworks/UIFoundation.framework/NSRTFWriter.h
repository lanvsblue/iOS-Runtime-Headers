/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSRTFWriter : NSObject {
    NSMapTable * _attachmentData;
    NSAttributedString * _attrString;
    unsigned long long  _attrStringLength;
    NSMutableDictionary * _colors;
    id  _curBackgroundColor;
    id  _curBaselineOffset;
    unsigned int  _curEncoding;
    id  _curFont;
    id  _curForegroundColor;
    id  _curKern;
    id  _curParagraphStyle;
    id  _curSuperscript;
    int  _curTraits;
    id  _curUnderlineStyle;
    NSDictionary * _docAttrs;
    NSFileWrapper * _document;
    NSMutableDictionary * _fontNames;
    void * _layoutSections;
    NSMutableArray * _listRanges;
    NSMutableData * _output;
    double  _rightMargin;
    struct { 
        unsigned int _forceColorWrite : 1; 
        unsigned int _activeFontFeatures : 1; 
        unsigned int _preserveNaturalAlignment : 1; 
        unsigned int _reserved : 29; 
    }  _rwFlags;
}

+ (id)RTFDataForDate:(id)arg1;
+ (id)RTFDataForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 encoding:(unsigned int)arg3;
+ (void)initialize;

- (id)RTF;
- (id)RTFD;
- (id)RTFDFileWrapper;
- (id)_RTFDFileWrapper;
- (id)_attachmentData;
- (int)_mostCompatibleCharset:(id)arg1;
- (id)_plainFontNameForFont:(id)arg1;
- (void)_setPreserveNaturalAlignment:(bool)arg1;
- (void)_setRTFDFileWrapper:(id)arg1;
- (void)_writeCharacters:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_writeVersionsAndEncodings;
- (void)collectResources;
- (void)dealloc;
- (id)documentAttribute:(id)arg1;
- (id)documentAttributes;
- (id)initWithAttributedString:(id)arg1;
- (void)restoreAttributes:(id)arg1;
- (void)setDocumentAttributes:(id)arg1;
- (unsigned long long)textFlowWithAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)writeAttachment:(id)arg1 editableData:(id)arg2 editableTypeIdentifier:(id)arg3;
- (void)writeBackgroundColor;
- (void)writeBaselineOffset:(id)arg1;
- (void)writeBody;
- (bool)writeCellTerminator:(id)arg1 atIndex:(unsigned long long)arg2 nestingLevel:(unsigned long long)arg3;
- (void)writeCharacterAttributes:(id)arg1 previousAttributes:(id)arg2;
- (void)writeCharacterShape:(id)arg1;
- (void)writeColor:(id)arg1 type:(unsigned long long)arg2;
- (void)writeColorTable;
- (void)writeDate:(id)arg1;
- (void)writeDateDocumentAttribute:(id)arg1 withRTFKeyword:(const char *)arg2;
- (void)writeDefaultTabInterval;
- (void)writeEscapedUTF8String:(id)arg1;
- (void)writeExpansion:(id)arg1;
- (void)writeFont:(id)arg1 forceFontNumber:(bool)arg2;
- (void)writeFontTable;
- (void)writeGlyphInfo:(id)arg1;
- (void)writeHeader;
- (void)writeHyphenation;
- (void)writeInfo;
- (void)writeKern:(id)arg1;
- (void)writeKeywordsDocumentAttribute;
- (void)writeLigature:(id)arg1;
- (bool)writeLinkInfo:(id)arg1;
- (void)writeListTable;
- (void)writeObliqueness:(id)arg1;
- (void)writePaperSize;
- (void)writeParagraphStyle:(id)arg1;
- (void)writeRTF;
- (void)writeShadow:(id)arg1;
- (void)writeStrikethroughStyle:(id)arg1;
- (void)writeStringDocumentAttribute:(id)arg1 withRTFKeyword:(const char *)arg2;
- (void)writeStrokeWidth:(id)arg1;
- (void)writeStyleSheetTable;
- (void)writeSuperscript:(id)arg1;
- (void)writeTableHeader:(id)arg1 atIndex:(unsigned long long)arg2 nestingLevel:(unsigned long long)arg3;
- (void)writeTextFlow:(unsigned long long)arg1;
- (void)writeUnderlineStyle:(id)arg1 allowStrikethrough:(bool)arg2;

@end
