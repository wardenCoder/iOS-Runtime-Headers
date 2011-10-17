/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSFetchedResultsController, NSString;

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {
    NSFetchedResultsController *_controller;
    NSString *_name;
    NSString *_indexTitle;
    unsigned int _sectionOffset;
    unsigned int _numberOfObjects;
    unsigned int _oldSectionNumber;
    id _sectionObjects;
}

@property(readonly) unsigned int sectionNumber;
@property(readonly) NSArray * objects;
@property unsigned int oldSectionNumber;
@property(readonly) unsigned int numberOfObjects;
@property(readonly) unsigned int sectionOffset;
@property(readonly) NSString * indexTitle;
@property(readonly) NSString * name;


- (unsigned int)indexOfObject:(id)arg1;
- (id)initWithController:(id)arg1 name:(id)arg2 indexTitle:(id)arg3 sectionOffset:(unsigned int)arg4;
- (void)setNumberOfObjects:(unsigned int)arg1;
- (void)setSectionOffset:(unsigned int)arg1;
- (unsigned int)sectionNumber;
- (unsigned int)oldSectionNumber;
- (void)setOldSectionNumber:(unsigned int)arg1;
- (unsigned int)sectionOffset;
- (id)objects;
- (unsigned int)numberOfObjects;
- (id)indexTitle;
- (void)clearSectionObjectsCache;
- (void)setController:(id)arg1;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end