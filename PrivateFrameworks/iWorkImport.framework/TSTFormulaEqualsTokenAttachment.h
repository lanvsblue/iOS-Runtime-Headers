/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment

- (double)baselineOffset;
- (id)description;
- (void)loadFromArchive:(const struct FormulaEqualsTokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UIGraphicalAttachment {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)rendererForAttachment;
- (void)saveToArchive:(struct FormulaEqualsTokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UIGraphicalAttachment {} *x5; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)wantsSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
