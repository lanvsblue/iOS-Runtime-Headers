/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSpecialEventItem : NSObject <FCSpecialEventArticleProviding, FCSpecialEventItemProviding, FCSpecialEventWebEmbedProviding> {
    NSString * _actionTitle;
    NSString * _actionUrlString;
    NSString * _articleID;
    NSDate * _displayDate;
    unsigned long long  _itemType;
    NSString * _storyType;
    NSString * _title;
    NSString * _urlString;
}

@property (nonatomic, readonly, copy) NSString *actionTitle;
@property (nonatomic, readonly, copy) NSString *actionUrlString;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, readonly) <FCSpecialEventArticleProviding> *asArticle;
@property (nonatomic, readonly) <FCSpecialEventWebEmbedProviding> *asWebEmbed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *displayDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly, copy) NSString *storyType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *urlString;

+ (id)itemWithArticleDict:(id)arg1;
+ (id)itemWithArticleID:(id)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 storyType:(id)arg5 displayDate:(id)arg6;
+ (id)itemWithItemDict:(id)arg1;
+ (id)itemWithUrlString:(id)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4;

- (void).cxx_destruct;
- (id)actionTitle;
- (id)actionUrlString;
- (id)articleID;
- (id)asArticle;
- (id)asWebEmbed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayDate;
- (id)identifier;
- (id)init;
- (id)initWithSpecialEventItemType:(unsigned long long)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 articleID:(id)arg5 urlString:(id)arg6 storyType:(id)arg7 displayDate:(id)arg8;
- (unsigned long long)itemType;
- (id)storyType;
- (id)title;
- (id)urlString;

@end
