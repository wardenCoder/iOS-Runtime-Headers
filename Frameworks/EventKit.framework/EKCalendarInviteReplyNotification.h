/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {
    unsigned int _allowedEntityTypes;
    int _status;
}

@property unsigned int allowedEntityTypes;
@property int status;

- (unsigned int)allowedEntityTypes;
- (id)initWithType:(int)arg1;
- (id)inviteReplyNotificationFromEventStore:(id)arg1;
- (void)setAllowedEntityTypes:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end