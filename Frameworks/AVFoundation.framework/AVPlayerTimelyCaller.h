/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, AVWeakReference;

@interface AVPlayerTimelyCaller : NSObject  {
    AVWeakReference *_weakReference;
    AVPlayer *_player;
    struct dispatch_queue_s { } *_timerQueue;
    struct dispatch_source_s { } *_timerSource;
    BOOL _isTimerSourceRunning;
    BOOL _timerQueueIsPlayerStateDispatchQueue;
}

@property(getter=_weakReference,readonly) AVWeakReference * weakReference;


- (void)invalidate;
- (void)finalize;
- (void)itemTimeJumped;
- (id)initWithPlayer:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2;
- (id)_weakReference;
- (id)player;
- (void)dealloc;

@end