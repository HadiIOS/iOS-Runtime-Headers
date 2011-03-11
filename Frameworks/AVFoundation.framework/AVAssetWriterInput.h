/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVAssetWriterInputHelper, NSDictionary, AVWeakReference, AVAssetWriterInputInternal;

@interface AVAssetWriterInput : NSObject  {
    AVAssetWriterInputInternal *_internal;
}

@property(readonly) NSString * mediaType;
@property(readonly) NSDictionary * outputSettings;
@property(copy) NSArray * metadata;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property BOOL expectsMediaDataInRealTime;
@property(getter=_weakReferenceToAssetWriter,setter=_setWeakReferenceToAssetWriter:,retain) AVWeakReference * weakReferenceToAssetWriter;
@property(getter=_helper,setter=_setHelper:,retain) AVAssetWriterInputHelper * helper;
@property(getter=_status,readonly) int status;
@property(getter=_sourcePixelBufferAttributes,setter=_setSourcePixelBufferAttributes:,copy) NSDictionary * sourcePixelBufferAttributes;
@property(getter=_pixelBufferPool,readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=_isAttachedToPixelBufferAdaptor,setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;

+ (void)initialize;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (id)keyPathsForValuesAffectingStatus;

- (void)finalize;
- (void)release;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)init;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (id)retain;
- (void)dealloc;
- (id)description;
- (id)metadata;
- (id)mediaType;
- (void)setMetadata:(id)arg1;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (void)_setHelper:(id)arg1;
- (id)_sourcePixelBufferAttributes;
- (void)_setSourcePixelBufferAttributes:(id)arg1;
- (BOOL)_isAttachedToPixelBufferAdaptor;
- (void)_setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (void)_transitionToTerminalStatus:(int)arg1;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (int)mediaTimeScale;
- (BOOL)isReadyForMoreMediaData;
- (BOOL)expectsMediaDataInRealTime;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)markAsFinished;
- (void)setMediaTimeScale:(int)arg1;
- (void)_setWeakReferenceToAssetWriter:(id)arg1;
- (BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaFileType:(id)arg2 error:(id*)arg3;
- (BOOL)_prepareToFinishWritingReturningError:(id*)arg1;
- (id)_helper;
- (id)_weakReferenceToAssetWriter;
- (id)outputSettings;
- (int)_status;

@end