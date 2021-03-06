/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@interface ASSettingsSyncController : AccountSettingsUISyncController <UIModalViewDelegate> {
    BOOL _haveRegisteredForAccountsChanged;
    BOOL _haveRegisteredForFolderChanges;
    BOOL _isHotmailAccount;
}

- (id)_accountFromManager;
- (id)_accountInSpecifier;
- (void)_accountsChanged:(id)arg1;
- (void)_clearOutCachesAndListenForNotifications;
- (void)_folderHierarchyChanged;
- (void)_foldersToPushChanged;
- (id)_foldersToPushSpecifierAccount;
- (id)_navTitle;
- (void)_purgeDownloadedMailForAccount;
- (void)_reloadFoldersToPushSpecifier;
- (Class)accountInfoControllerClass;
- (id)accountIntegerPropertyWithSpecifier:(id)arg1;
- (BOOL)backgroundDeleteAccountData;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (void)loadView;
- (id)numFoldersToPushString:(id)arg1;
- (id)otherSpecifiers;
- (void)reloadAccountOnSpecifier;
- (void)saveSyncSettings:(id)arg1 forAccount:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setAccountIntegerProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
