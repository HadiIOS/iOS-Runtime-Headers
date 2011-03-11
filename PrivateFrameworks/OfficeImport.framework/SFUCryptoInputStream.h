/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUInputStream>, SFUCryptor;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
    <SFUInputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    long long mOffset;
}


- (void)close;
- (long long)offset;
- (void)dealloc;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;

@end