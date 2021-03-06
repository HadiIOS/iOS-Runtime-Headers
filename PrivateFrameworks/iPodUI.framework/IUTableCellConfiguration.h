/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUDownloadActionConfiguration, MPMediaItem, NSString;

@interface IUTableCellConfiguration : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _isDeleteConfirmationVisible : 1;
    unsigned int _needsDisplay : 1;
    } _backgroundSize;
    int _cacheTag;
    BOOL _canShowPurchasableMediaViews;
    } _downloadButtonOrigin;
    } _downloadButtonSize;
    BOOL _downloadInProgress;
    } _downloadProgressIndicatorOrigin;
    } _downloadProgressIndicatorSize;
    BOOL _downloadable;
    id _globalContext;
    BOOL _isNowPlaying;
    } _layoutSize;
    IUDownloadActionConfiguration *_purchaseActionConfiguration;
    } _purchaseButtonSize;
}

@property struct CGSize { float x1; float x2; } backgroundSize;
@property(readonly) BOOL canShowPurchasableMediaViews;
@property(readonly) struct CGPoint { float x1; float x2; } downloadButtonOrigin;
@property struct CGSize { float x1; float x2; } downloadButtonSize;
@property(getter=isDownloadInProgress) BOOL downloadInProgress;
@property(readonly) struct CGPoint { float x1; float x2; } downloadProgressIndicatorOrigin;
@property struct CGSize { float x1; float x2; } downloadProgressIndicatorSize;
@property(getter=isDownloadable) BOOL downloadable;
@property(retain) id globalContext;
@property BOOL isDeleteConfirmationVisible;
@property BOOL isNowPlaying;
@property(readonly) Class layoutManagerClass;
@property struct CGSize { float x1; float x2; } layoutSize;
@property(readonly) MPMediaItem * mediaItem;
@property BOOL needsDisplay;
@property(readonly) unsigned int numberOfImages;
@property(readonly) unsigned int numberOfLabels;
@property(readonly) int preset;
@property(retain) IUDownloadActionConfiguration * purchaseActionConfiguration;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } purchaseButtonFrame;
@property struct CGSize { float x1; float x2; } purchaseButtonSize;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } selectionEdgeInsets;
@property(readonly) BOOL showsUntruncationCallout;
@property(readonly) NSString * untruncationCalloutString;

+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
+ (void)configureTableDisplaySettings:(id)arg1 dataSource:(id)arg2;
+ (id)customActionRowConfigurationWithSimpleCellConfiguration:(id)arg1;
+ (BOOL)drawsRowsInAlternateStyle;
+ (float)minimumRowHeight;
+ (float)rowHeightForGlobalContext:(id)arg1;
+ (BOOL)showsUntruncationCallout;

- (id)backgroundColorForImageAtIndex:(unsigned int)arg1;
- (id)backgroundColorWithModifiers:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (BOOL)canShowPurchasableMediaViews;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })downloadButtonOrigin;
- (struct CGSize { float x1; float x2; })downloadButtonSize;
- (struct CGPoint { float x1; float x2; })downloadProgressIndicatorOrigin;
- (struct CGSize { float x1; float x2; })downloadProgressIndicatorSize;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
- (void)drawWithModifiers:(unsigned int)arg1;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForImageAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)globalContext;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)invalidateDynamicTrackCaches;
- (BOOL)isDeleteConfirmationVisible;
- (BOOL)isDownloadInProgress;
- (BOOL)isDownloadable;
- (BOOL)isNowPlaying;
- (Class)layoutManagerClass;
- (struct CGSize { float x1; float x2; })layoutSize;
- (void)layoutSubviewLayoutViews:(id)arg1;
- (int)lineBreakModeForLabelAtIndex:(unsigned int)arg1;
- (id)mediaItem;
- (BOOL)needsDisplay;
- (unsigned int)numberOfImages;
- (unsigned int)numberOfLabels;
- (struct CGSize { float x1; float x2; })offsetForLabelAtIndex:(unsigned int)arg1;
- (int)preset;
- (id)purchaseActionConfiguration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })purchaseButtonFrame;
- (struct CGSize { float x1; float x2; })purchaseButtonSize;
- (void)reloadData;
- (void)reloadLayoutInformation;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionEdgeInsets;
- (void)setBackgroundSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDownloadButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDownloadInProgress:(BOOL)arg1;
- (void)setDownloadProgressIndicatorSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDownloadable:(BOOL)arg1;
- (void)setGlobalContext:(id)arg1;
- (void)setIsDeleteConfirmationVisible:(BOOL)arg1;
- (void)setIsNowPlaying:(BOOL)arg1;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setPurchaseActionConfiguration:(id)arg1;
- (void)setPurchaseButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)showsUntruncationCallout;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (id)subviewLayoutViewsWithModifiers:(unsigned int)arg1;
- (int)textAlignmentForLabelAtIndex:(unsigned int)arg1;
- (id)untruncationCalloutString;
- (id)untruncationCalloutStringWithLinesByStringIndexes:(id)arg1;

@end
