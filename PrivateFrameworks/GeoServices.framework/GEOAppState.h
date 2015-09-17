/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAppState : PBCodable <NSCopying> {
    struct { 
        unsigned int zoomLevel : 1; 
    } _has;
    GEOMapRegion *_mapRegion;
    double _zoomLevel;
}

@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) double zoomLevel;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMapRegion;
- (BOOL)hasZoomLevel;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasZoomLevel:(BOOL)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)zoomLevel;

@end