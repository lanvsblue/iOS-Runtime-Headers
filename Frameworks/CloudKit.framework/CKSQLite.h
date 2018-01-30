/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLite : NSObject {
    bool  _corrupt;
    NSDateFormatter * _dateFormatter;
    struct sqlite3 { } * _db;
    <CKSQLiteDelegate> * _delegate;
    bool  _hasMigrated;
    NSString * _objectClassPrefix;
    unsigned long long  _openCount;
    NSString * _path;
    NSString * _schema;
    NSString * _schemaVersion;
    bool  _shouldVacuum;
    NSMutableDictionary * _statementsBySQL;
    long long  _synchronousMode;
    bool  _traced;
    int  _userVersion;
}

@property (nonatomic) bool corrupt;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic) struct sqlite3 { }*db;
@property (nonatomic, retain) <CKSQLiteDelegate> *delegate;
@property (nonatomic, readonly) bool hasMigrated;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, retain) NSString *objectClassPrefix;
@property (nonatomic) unsigned long long openCount;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *schema;
@property (nonatomic, readonly) NSString *schemaVersion;
@property (nonatomic) bool shouldVacuum;
@property (nonatomic, readonly) NSMutableDictionary *statementsBySQL;
@property (nonatomic) long long synchronousMode;
@property (nonatomic) bool traced;
@property (nonatomic) int userVersion;

- (void).cxx_destruct;
- (id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2;
- (id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2;
- (id)_createSchemaHash;
- (void)_periodicVacuum;
- (id)_synchronousModeString;
- (id)_tableNameForClass:(Class)arg1;
- (id)allTableNames;
- (void)analyze;
- (void)begin;
- (int)changes;
- (void)close;
- (id)columnNamesForTable:(id)arg1;
- (bool)corrupt;
- (id)creationDate;
- (id)dateFormatter;
- (id)datePropertyForKey:(id)arg1;
- (struct sqlite3 { }*)db;
- (int)dbUserVersion;
- (void)dealloc;
- (id)delegate;
- (int)deleteAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (bool)deleteExactObject:(id)arg1;
- (void)deleteFrom:(id)arg1 matchingValues:(id)arg2;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)dropAllTables;
- (void)end;
- (void)executeSQL:(id)arg1;
- (void)executeSQL:(id)arg1 arguments:(char *)arg2;
- (bool)hasMigrated;
- (id)initWithPath:(id)arg1 schema:(id)arg2;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (long long)insertOrReplaceObject:(id)arg1;
- (bool)isOpen;
- (long long)lastInsertRowID;
- (id)objectClassPrefix;
- (void)open;
- (unsigned long long)openCount;
- (bool)openWithError:(id*)arg1;
- (id)path;
- (id)propertyForKey:(id)arg1;
- (void)raise:(id)arg1;
- (void)remove;
- (void)removeAllStatements;
- (void)removePropertyForKey:(id)arg1;
- (void)rollback;
- (id)schema;
- (id)schemaVersion;
- (id)select:(id)arg1 from:(id)arg2;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(id /* block */)arg7;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (void)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(id /* block */)arg6;
- (unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(id /* block */)arg6;
- (id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)setCorrupt:(bool)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObjectClassPrefix:(id)arg1;
- (void)setOpenCount:(unsigned long long)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setShouldVacuum:(bool)arg1;
- (void)setSynchronousMode:(long long)arg1;
- (void)setTraced:(bool)arg1;
- (void)setUserVersion:(int)arg1;
- (bool)shouldVacuum;
- (id)statementForSQL:(id)arg1;
- (id)statementsBySQL;
- (long long)synchronousMode;
- (bool)traced;
- (void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5;
- (void)updateAllObjectsOfClass:(Class)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (int)userVersion;
- (void)vacuum;

@end
