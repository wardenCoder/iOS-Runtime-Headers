/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableFavoriteTransitLine : MSPMutableFavorite <MSPFavoriteTransitLine>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSUUID *storageIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) <GEOTransitLine> *transitLine;
@property (nonatomic, readonly) MSPTransitLineBookmark *transitLineBookmark;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (id)initWithBookmarkStorage:(id)arg1;
- (void)setTransitLine:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;
- (id)transitLine;
- (id)transitLineBookmark;

@end
