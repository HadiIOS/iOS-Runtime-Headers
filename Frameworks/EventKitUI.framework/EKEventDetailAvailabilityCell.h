/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;

@interface EKEventDetailAvailabilityCell : EKEventDetailCell {
    UILabel *_availabilityTitleView;
    UILabel *_availabilityView;
}

- (id)_availabilityTitleView;
- (id)_availabilityView;
- (void)dealloc;
- (BOOL)isEditableForEvent;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (void)setAvailability:(int)arg1;
- (BOOL)update;

@end
