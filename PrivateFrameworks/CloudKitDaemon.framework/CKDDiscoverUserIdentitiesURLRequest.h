/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest {
    NSArray * _infosToDiscover;
    id /* block */  _progressBlock;
    NSMutableDictionary * _submittedInfos;
    BOOL  _wantsProtectionInfo;
}

@property (nonatomic, retain) NSArray *infosToDiscover;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, retain) NSMutableDictionary *submittedInfos;
@property (nonatomic) BOOL wantsProtectionInfo;

- (void).cxx_destruct;
- (id)infosToDiscover;
- (id)initWithLookupInfos:(id)arg1;
- (int)operationType;
- (id /* block */)progressBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setInfosToDiscover:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setSubmittedInfos:(id)arg1;
- (void)setWantsProtectionInfo:(BOOL)arg1;
- (id)submittedInfos;
- (BOOL)wantsProtectionInfo;

@end
