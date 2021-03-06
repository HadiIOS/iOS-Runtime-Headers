/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class ASAsset, NSArray, NSOrderedSet, NSString;

@interface _UIDictionaryWrapper : NSObject {
    ASAsset *asset;
    NSString *definitionLanguage;
    struct __DCSDictionary { } *dictionary;
    NSString *indexLanguage;
    int type;
}

@property(readonly) ASAsset * asset;
@property(readonly) NSArray * countryCodes;
@property(readonly) NSString * definitionLanguage;
@property(readonly) unsigned int definitionLanguageDirection;
@property(readonly) struct __DCSDictionary { }* dictionary;
@property(readonly) NSString * dictionaryPackageName;
@property(readonly) NSString * indexLanguage;
@property(readonly) NSOrderedSet * supportedKeyboardStrings;
@property(readonly) int type;

+ (id)_availableDictionaryAssets;
+ (id)_wrappersWithAsset:(id)arg1;

- (BOOL)_correspondsToCurrentInputKeyboardAndIsNotPresent;
- (BOOL)_isBilingual;
- (id)asset;
- (int)compareToDictionary:(id)arg1;
- (id)countryCodes;
- (void)dealloc;
- (id)definitionLanguage;
- (unsigned int)definitionLanguageDirection;
- (id)description;
- (struct __DCSDictionary { }*)dictionary;
- (id)dictionaryPackageName;
- (BOOL)hasMarkupForString:(id)arg1;
- (unsigned int)hash;
- (id)indexLanguage;
- (id)initWithAsset:(id)arg1 indexLanguage:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (id)markupForString:(id)arg1;
- (id)supportedKeyboardStrings;
- (int)type;

@end
