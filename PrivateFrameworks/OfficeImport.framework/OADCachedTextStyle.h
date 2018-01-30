/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCachedTextStyle : NSObject {
    struct OADCachedTextStyleData { 
        unsigned int verticalAlign : 3; 
        short lineSpacing; 
        short beforeSpacing; 
        short afterSpacing; 
        short leftMargin; 
        short rightMargin; 
        short indent; 
        short defaultTab; 
        unsigned int horizontalAlign : 4; 
        unsigned short fontFaceIndex; 
        short fontSize; 
        unsigned short fontColorIndex; 
        unsigned int bold : 1; 
        unsigned int italic : 1; 
        unsigned int underline : 5; 
        unsigned int format : 2; 
        unsigned int kerning : 2; 
        unsigned int strikethrough : 2; 
        unsigned int caps : 2; 
    }  mData;
    unsigned long long  mHash;
}

- (void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2;
- (void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2;
- (unsigned long long)hash;
- (id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5;
- (bool)isEqual:(id)arg1;

@end
