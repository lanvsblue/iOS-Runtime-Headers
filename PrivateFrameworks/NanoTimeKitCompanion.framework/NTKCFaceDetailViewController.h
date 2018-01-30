/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailViewController : UIViewController <NTKCFaceDetailActionSectionDelegate, NTKCFaceDetailComplicationSectionDelegate, NTKCFaceDetailDataSourcesSectionDelegate, NTKCFaceDetailDescriptionSectionDelegate, NTKCFaceDetailEditOptionSectionDelegate, NTKCFaceDetailOtherSectionDelegate, NTKCFaceDetailPhotosSectionDelegate, NTKFaceCollectionObserver, NTKFaceObserver, UITableViewDataSource, UITableViewDelegate> {
    _NTKCDetailActionButton * _addButton;
    UIActivityIndicatorView * _addSpinner;
    NSMutableArray * _currentSections;
    <NTKCFaceDetailViewControllerDelegate> * _delegate;
    NTKCFaceDetailDescriptionSectionController * _descriptionSection;
    NSMutableArray * _editOptionSections;
    UITableViewCell * _editOptionToMakeFullyVisible;
    NSArray * _externalAssets;
    NTKFace * _face;
    NTKCFaceContainerView * _faceContainer;
    bool  _faceHasBeenEdited;
    UILabel * _faceName;
    NTKCompanionFaceViewController * _faceVC;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerFaceSize;
    UIView * _headerSeparator;
    _NTKCDetailHeaderView * _headerView;
    bool  _inGallery;
    double  _intrinsicHeaderHeight;
    NTKCFaceDetailKaleidoscopeContentSectionController * _kaleidoscopeContentSection;
    NTKCFaceDetailKaleidoscopeStyleSectionController * _kaleidoscopeStyleSection;
    NTKFaceCollection * _library;
    NTKCFaceDetailOtherSectionController * _otherSection;
    NTKCFaceDetailPhotosSectionController * _photosSection;
    id /* block */  _selectionFinishedHandler;
    bool  _shared;
    UITableView * _tableView;
}

@property (nonatomic, retain) _NTKCDetailActionButton *addButton;
@property (nonatomic, retain) UIActivityIndicatorView *addSpinner;
@property (nonatomic, retain) NSMutableArray *currentSections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NTKCFaceDetailDescriptionSectionController *descriptionSection;
@property (nonatomic, retain) NSMutableArray *editOptionSections;
@property (nonatomic, retain) UITableViewCell *editOptionToMakeFullyVisible;
@property (nonatomic, copy) NSArray *externalAssets;
@property (nonatomic, retain) NTKFace *face;
@property (nonatomic, retain) NTKCFaceContainerView *faceContainer;
@property (nonatomic, readonly) bool faceHasBeenEdited;
@property (nonatomic, retain) UILabel *faceName;
@property (nonatomic, retain) NTKCompanionFaceViewController *faceVC;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } headerFaceSize;
@property (nonatomic, retain) UIView *headerSeparator;
@property (nonatomic, retain) _NTKCDetailHeaderView *headerView;
@property (nonatomic) bool inGallery;
@property (nonatomic) double intrinsicHeaderHeight;
@property (nonatomic, retain) NTKCFaceDetailKaleidoscopeContentSectionController *kaleidoscopeContentSection;
@property (nonatomic, retain) NTKCFaceDetailKaleidoscopeStyleSectionController *kaleidoscopeStyleSection;
@property (nonatomic, retain) NTKFaceCollection *library;
@property (nonatomic, retain) NTKCFaceDetailOtherSectionController *otherSection;
@property (nonatomic, retain) NTKCFaceDetailPhotosSectionController *photosSection;
@property (nonatomic, copy) id /* block */ selectionFinishedHandler;
@property (nonatomic) bool shared;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_activeDeviceChanged;
- (void)_addFace;
- (void)_addFaceEndedForFace:(id)arg1;
- (void)_addTapped;
- (bool)_cellIsHiddenBehindHeader:(id)arg1;
- (void)_ensureOtherSection;
- (void)_faceChangedOptionsForEditMode:(long long)arg1;
- (void)_faceDidChange;
- (void)_faceDidChangeResourceDirectory;
- (bool)_hasRemovedSystemApp;
- (bool)_isEditOptionFullyVisible:(id)arg1;
- (bool)_isEditable;
- (void)_loadLibrary;
- (id)_pruneComplicationsNotAvailableOnGizmo:(id)arg1;
- (id)_pruneRemovedOrRestrictedComplications:(id)arg1;
- (id)_sectionForEditOptionCollection:(id)arg1;
- (void)_setComplication:(id)arg1 forSlot:(id)arg2;
- (void)_setEditOption:(id)arg1 forMode:(long long)arg2;
- (void)_setFaceHasBeenEdited;
- (void)_updateAddButton;
- (void)actionSectionDidDelete:(id)arg1;
- (void)actionSectionDidSelect:(id)arg1;
- (id)addButton;
- (id)addSpinner;
- (id)complicationSection:(id)arg1 allowedComplicationsForSlot:(id)arg2;
- (void)complicationSection:(id)arg1 didChangeToComplication:(id)arg2 forSlot:(id)arg3;
- (id)currentSections;
- (void)dataSourcesSection:(id)arg1 didChangeDataSources:(id)arg2 forMode:(long long)arg3;
- (void)dataSourcesSectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)descriptionSection;
- (void)descriptionSection:(id)arg1 didExpand:(bool)arg2;
- (void)editOptionSection:(id)arg1 didSelectActionForOptionAtIndex:(long long)arg2;
- (void)editOptionSection:(id)arg1 didSelectOptionAtIndex:(long long)arg2;
- (id)editOptionSections;
- (id)editOptionToMakeFullyVisible;
- (id)externalAssets;
- (id)face;
- (void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (id)faceContainer;
- (bool)faceHasBeenEdited;
- (id)faceName;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)faceVC;
- (struct CGSize { double x1; double x2; })headerFaceSize;
- (id)headerSeparator;
- (id)headerView;
- (bool)inGallery;
- (id)initWithFace:(id)arg1;
- (id)initWithFace:(id)arg1 externalAssets:(id)arg2;
- (id)initWithFace:(id)arg1 inGallery:(bool)arg2;
- (id)initWithFace:(id)arg1 inGallery:(bool)arg2 externalAssets:(id)arg3;
- (double)intrinsicHeaderHeight;
- (id)kaleidoscopeContentSection;
- (id)kaleidoscopeStyleSection;
- (id)library;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)otherSection;
- (void)otherSection:(id)arg1 didChangeShowSeconds:(id)arg2 forMode:(long long)arg3;
- (void)otherSection:(id)arg1 didToggleMonogram:(id)arg2 forSlot:(id)arg3;
- (void)otherSectionDidSelectMonogramEdit:(id)arg1;
- (void)photoSectionDidUpdate:(id)arg1;
- (id)photosSection;
- (void)scrollViewDidScroll:(id)arg1;
- (id /* block */)selectionFinishedHandler;
- (void)setAddButton:(id)arg1;
- (void)setAddSpinner:(id)arg1;
- (void)setCurrentSections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionSection:(id)arg1;
- (void)setEditOptionSections:(id)arg1;
- (void)setEditOptionToMakeFullyVisible:(id)arg1;
- (void)setExternalAssets:(id)arg1;
- (void)setFace:(id)arg1;
- (void)setFaceContainer:(id)arg1;
- (void)setFaceName:(id)arg1;
- (void)setFaceVC:(id)arg1;
- (void)setHeaderFaceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderSeparator:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInGallery:(bool)arg1;
- (void)setIntrinsicHeaderHeight:(double)arg1;
- (void)setKaleidoscopeContentSection:(id)arg1;
- (void)setKaleidoscopeStyleSection:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setOtherSection:(id)arg1;
- (void)setPhotosSection:(id)arg1;
- (void)setSelectionFinishedHandler:(id /* block */)arg1;
- (void)setShared:(bool)arg1;
- (void)setTableView:(id)arg1;
- (bool)shared;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
