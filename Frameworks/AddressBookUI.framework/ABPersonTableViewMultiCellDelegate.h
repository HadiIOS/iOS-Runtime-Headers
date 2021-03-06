/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonPickersDelegate, ABPersonTableViewDataSource, ABStyleProvider, UIDatePicker;

@interface ABPersonTableViewMultiCellDelegate : NSObject <ABMultiCellContentViewUpdateDelegate, ABPersonTableHeaderViewDelegate, ABDatePickerViewControllerDismissDelegate> {
    ABPersonTableViewDataSource *_dataSource;
    UIDatePicker *_datePicker;
    ABPersonPickersDelegate *_pickersDelegate;
    ABStyleProvider *_styleProvider;
}

@property ABPersonTableViewDataSource * dataSource;
@property ABPersonPickersDelegate * pickersDelegate;
@property(retain) ABStyleProvider * styleProvider;

- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (id)_capitalizedTitleForContentView:(id)arg1;
- (void)_multiCellContentView:(id)arg1 selectedAlert:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedCountry:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedLabel:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedService:(id)arg2;
- (BOOL)_tableView:(id)arg1 isValidIndexPath:(id)arg2;
- (id)dataSource;
- (void)dateField:(id)arg1 delegateDismissDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePrepareToPresentDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePresentDatePicker:(id)arg2;
- (BOOL)dateField:(id)arg1 shouldPresentDatePicker:(id)arg2;
- (id)datePickerForDateField:(id)arg1;
- (void)datePickerViewControllerWillDisappear:(id)arg1;
- (void)dealloc;
- (void)multiCellContentView:(id)arg1 didResizeAnimated:(BOOL)arg2;
- (void)multiCellContentView:(id)arg1 entryField:(id)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4;
- (void)multiCellContentView:(id)arg1 entryFieldDidBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 entryFieldDidEndEditing:(id)arg2;
- (BOOL)multiCellContentView:(id)arg1 entryFieldShouldBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesBeganForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesCancelledForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesEndedForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 willResizeAnimated:(BOOL)arg2;
- (void)multiCellContentViewDidEndEditing:(id)arg1;
- (void)multiCellContentViewWillHideDeleteConfirmation:(id)arg1;
- (void)multiCellContentViewWillShowDeleteConfirmation:(id)arg1;
- (void)personTableHeaderView:(id)arg1 imageViewWasSelected:(id)arg2;
- (id)pickersDelegate;
- (void)setDataSource:(id)arg1;
- (void)setPickersDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;

@end
