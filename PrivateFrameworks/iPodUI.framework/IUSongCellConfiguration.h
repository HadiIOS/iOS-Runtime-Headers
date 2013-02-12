/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface IUSongCellConfiguration : IUSongCellConfigurationAbstract {
    NSString *_album;
    NSString *_artist;
    int _mediaType;
    NSString *_title;
}

@property(retain) NSString * album;
@property(retain) NSString * artist;
@property int mediaType;
@property(retain) NSString * title;

+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
+ (void)getRequiredStringProperties:(id)arg1 optionalStringProperties:(id)arg2 forDataSource:(id)arg3;
+ (float)rowHeightForGlobalContext:(id)arg1;

- (id)album;
- (id)artist;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (id)displayProperties;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })downloadProgressIndicatorFrame;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)init;
- (int)mediaType;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStringsWithProperties:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end