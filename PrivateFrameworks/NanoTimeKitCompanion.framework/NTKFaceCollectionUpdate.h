/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceCollectionUpdate : NSObject {
    id /* block */  _block;
    int  _type;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)updateWithType:(int)arg1 uuid:(id)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)block;
- (int)type;
- (id)uuid;

@end
