/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaylist : MPModelObject {
    id /* block */  _artworkCatalogBlock;
    NSString * _cloudVersionHash;
    MPModelCurator * _curator;
    bool  _curatorPlaylist;
    NSString * _descriptionText;
    NSString * _editorNotes;
    id /* block */  _editorialArtworkCatalogBlock;
    bool  _hasCleanContent;
    bool  _hasExplicitContent;
    long long  _keepLocalEnableState;
    long long  _keepLocalManagedStatus;
    NSDate * _lastDevicePlaybackDate;
    NSDateComponents * _lastModifiedDateComponents;
    bool  _libraryAdded;
    NSDate * _libraryAddedDate;
    NSString * _name;
    bool  _owner;
    bool  _publicPlaylist;
    NSDateComponents * _releaseDateComponents;
    NSURL * _shareShortURL;
    NSURL * _shareURL;
    NSString * _shortEditorNotes;
    bool  _subscribed;
    MPTiledArtworkRequest * _tiledArtworkRequest;
    unsigned long long  _trackCount;
    long long  _type;
    long long  _userEditableComponents;
    bool  _visiblePlaylist;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *cloudVersionHash;
@property (nonatomic, copy) MPModelCurator *curator;
@property (getter=isCuratorPlaylist, nonatomic) bool curatorPlaylist;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) bool hasCleanContent;
@property (nonatomic) bool hasExplicitContent;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (nonatomic, copy) NSDate *lastDevicePlaybackDate;
@property (nonatomic, copy) NSDateComponents *lastModifiedDateComponents;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, copy) NSString *name;
@property (getter=isOwner, nonatomic) bool owner;
@property (getter=isPublicPlaylist, nonatomic) bool publicPlaylist;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, copy) NSURL *shareShortURL;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (nonatomic, copy) MPTiledArtworkRequest *tiledArtworkRequest;
@property (nonatomic) unsigned long long trackCount;
@property (nonatomic) long long type;
@property (nonatomic) long long userEditableComponents;
@property (getter=isVisiblePlaylist, nonatomic) bool visiblePlaylist;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelPropertyPlaylistArtwork__PROPERTY;
+ (id)__MPModelPropertyPlaylistCloudVersionHash__PROPERTY;
+ (id)__MPModelPropertyPlaylistCuratorPlaylist__PROPERTY;
+ (id)__MPModelPropertyPlaylistDescriptionText__PROPERTY;
+ (id)__MPModelPropertyPlaylistEditorNotes__PROPERTY;
+ (id)__MPModelPropertyPlaylistEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyPlaylistHasCleanContent__PROPERTY;
+ (id)__MPModelPropertyPlaylistHasExplicitContent__PROPERTY;
+ (id)__MPModelPropertyPlaylistIsOwner__PROPERTY;
+ (id)__MPModelPropertyPlaylistKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertyPlaylistKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertyPlaylistLastDevicePlaybackDate__PROPERTY;
+ (id)__MPModelPropertyPlaylistLastModifiedDateComponents__PROPERTY;
+ (id)__MPModelPropertyPlaylistLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyPlaylistLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyPlaylistName__PROPERTY;
+ (id)__MPModelPropertyPlaylistPublicPlaylist__PROPERTY;
+ (id)__MPModelPropertyPlaylistReleaseDateComponents__PROPERTY;
+ (id)__MPModelPropertyPlaylistShareShortURL__PROPERTY;
+ (id)__MPModelPropertyPlaylistShareURL__PROPERTY;
+ (id)__MPModelPropertyPlaylistShortEditorNotes__PROPERTY;
+ (id)__MPModelPropertyPlaylistSubscribed__PROPERTY;
+ (id)__MPModelPropertyPlaylistTrackCount__PROPERTY;
+ (id)__MPModelPropertyPlaylistTracksTiledArtwork__PROPERTY;
+ (id)__MPModelPropertyPlaylistType__PROPERTY;
+ (id)__MPModelPropertyPlaylistUserEditableComponents__PROPERTY;
+ (id)__MPModelPropertyPlaylistVisiblePlaylist__PROPERTY;
+ (id)__MPModelRelationshipPlaylistCurator__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__cloudVersionHash__KEY;
+ (id)__curatorPlaylist__KEY;
+ (id)__curator__KEY;
+ (id)__descriptionText__KEY;
+ (id)__editorNotes__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__hasCleanContent__KEY;
+ (id)__hasExplicitContent__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__lastDevicePlaybackDate__KEY;
+ (id)__lastModifiedDateComponents__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__name__KEY;
+ (id)__owner__KEY;
+ (id)__publicPlaylist__KEY;
+ (id)__releaseDateComponents__KEY;
+ (id)__shareShortURL__KEY;
+ (id)__shareURL__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)__subscribed__KEY;
+ (id)__tiledArtworkRequest__KEY;
+ (id)__trackCount__KEY;
+ (id)__type__KEY;
+ (id)__userEditableComponents__KEY;
+ (id)__visiblePlaylist__KEY;
+ (id)kindWithPlaylistEntryKind:(id)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (bool)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)cloudVersionHash;
- (id)contentItemCollectionInfo;
- (id)curator;
- (id)descriptionText;
- (id)descriptionWithType:(long long)arg1;
- (id)editorNotes;
- (id)editorialArtworkCatalog;
- (id /* block */)editorialArtworkCatalogBlock;
- (bool)hasCleanContent;
- (bool)hasExplicitContent;
- (bool)isCuratorPlaylist;
- (bool)isLibraryAdded;
- (bool)isOwner;
- (bool)isPublicPlaylist;
- (bool)isSubscribed;
- (bool)isVisiblePlaylist;
- (long long)keepLocalEnableState;
- (long long)keepLocalManagedStatus;
- (id)lastDevicePlaybackDate;
- (id)lastModifiedDateComponents;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (id)libraryAddedDate;
- (long long)libraryRemovalSupportedOptions;
- (id)name;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)releaseDateComponents;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setCloudVersionHash:(id)arg1;
- (void)setCurator:(id)arg1;
- (void)setCuratorPlaylist:(bool)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setEditorNotes:(id)arg1;
- (void)setEditorialArtworkCatalogBlock:(id /* block */)arg1;
- (void)setHasCleanContent:(bool)arg1;
- (void)setHasExplicitContent:(bool)arg1;
- (void)setKeepLocalEnableState:(long long)arg1;
- (void)setKeepLocalManagedStatus:(long long)arg1;
- (void)setLastDevicePlaybackDate:(id)arg1;
- (void)setLastModifiedDateComponents:(id)arg1;
- (void)setLibraryAdded:(bool)arg1;
- (void)setLibraryAddedDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(bool)arg1;
- (void)setPublicPlaylist:(bool)arg1;
- (void)setReleaseDateComponents:(id)arg1;
- (void)setShareShortURL:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setShortEditorNotes:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setTiledArtworkRequest:(id)arg1;
- (void)setTrackCount:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUserEditableComponents:(long long)arg1;
- (void)setVisiblePlaylist:(bool)arg1;
- (id)shareShortURL;
- (id)shareURL;
- (id)shortEditorNotes;
- (id)tiledArtworkRequest;
- (id)trackArtworkCatalogsWithCount:(long long)arg1;
- (unsigned long long)trackCount;
- (id)tracksTiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (long long)type;
- (long long)userEditableComponents;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mpc_remotePlaybackQueueRequiredProperties;

- (id)mpc_protoContainerRepresentation;

@end
