/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMTranscoder : NSObject

+ (id)supportedUTIs;
+ (BOOL)supportsUTI:(id)arg1;

- (int)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(int)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long)arg6;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(int)arg4 sizes:(id)arg5 maxDimension:(unsigned long)arg6 transcoderUserInfo:(id)arg7 representations:(int)arg8 completionBlock:(id /* block */)arg9;
- (BOOL)transcodeProcessingRequired:(int)arg1;

@end