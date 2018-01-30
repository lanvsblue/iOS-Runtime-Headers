/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldUserIdentity : PBCodable <NSCopying> {
    NSData * _serializedNameComponents;
}

@property (nonatomic, readonly) bool hasSerializedNameComponents;
@property (nonatomic, retain) NSPersonNameComponents *nameComponents;
@property (nonatomic, retain) NSData *serializedNameComponents;

+ (id)unknownPersonNameComponents;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSerializedNameComponents;
- (unsigned long long)hash;
- (id)initWithCKUserIdentity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nameComponents;
- (id)nameComponentsAcceptUnknownUser:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedNameComponents;
- (void)setNameComponents:(id)arg1;
- (void)setSerializedNameComponents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
