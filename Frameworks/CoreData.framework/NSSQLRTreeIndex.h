/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLRTreeIndex : NSSQLIndex {
    NSString * _tableName;
}

@property (readonly, retain) NSString *tableName;

- (id)bulkUpdateStatementsForStore:(id)arg1;
- (id)createStatementsForStore:(id)arg1;
- (void)dealloc;
- (id)dropStatementsForStore:(id)arg1;
- (void)generateSQLStrings;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;
- (id)tableName;

@end
