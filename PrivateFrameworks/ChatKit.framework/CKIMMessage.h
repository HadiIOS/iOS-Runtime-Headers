/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSCalendarDate, IMMessage, NSArray, CKConversation, NSDate, NSAttributedString;

@interface CKIMMessage : NSObject <CKMessage> {
    IMMessage *_imMessage;
    NSArray *_parts;
    NSArray *_incompleteParts;
    NSDate *_placeHolderDate;
    BOOL _hasPostedComplete;
    int _partCount;
    int _incompletePartCount;
    float _cachedPercentComplete;
    unsigned int _dateLoaded : 1;
    unsigned int _observingFileTransferNotifications : 1;
    unsigned int _shouldPlayReceivedTone : 1;
    NSAttributedString *_text;
    double _date;
    NSCalendarDate *_calendarDate;
    int _failedSendCount;
    CKConversation *_conversation;
}

@property(retain) IMMessage * IMMessage;


- (BOOL)isTypingIndicator;
- (id)guid;
- (int)compare:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)isPlaceholder;
- (id)error;
- (id)recipients;
- (id)service;
- (void)updateMessageCompleteQuietly;
- (BOOL)pending;
- (void)markAsRead;
- (int)messageCount;
- (id)initPlaceholderWithDate:(id)arg1;
- (BOOL)shouldPlayReceivedTone;
- (BOOL)supportsDeliveryReceipts;
- (BOOL)isFromFilteredSender;
- (BOOL)isWaitingForDelivery;
- (void)resetParts;
- (BOOL)messageIsComplete;
- (void)setIMMessage:(id)arg1;
- (id)messagePartAtIndex:(unsigned int)arg1;
- (id)attachmentText:(BOOL)arg1;
- (id)_rawPreviewText;
- (void)loadParts;
- (id)timeDelivered;
- (int)sentCount;
- (int)failedSendCount;
- (void)_resetData;
- (double)_loadDate;
- (int)totalMessageCount;
- (int)pendingCount;
- (void)_loadCounts;
- (void)_parseIMMessagePartsWithTextProcessingBlock:(id)arg1 fileTransferProcessingBlock:(id)arg2;
- (void)_observeFileTransfersIfNecessary;
- (void)_fileTransferUpdated:(id)arg1;
- (BOOL)hasBeenSent;
- (BOOL)wantsSendStatus;
- (BOOL)isFromDowngrading;
- (BOOL)isFirstDisplayablePart:(id)arg1;
- (unsigned int)messagePartCount;
- (int)outgoingBubbleColor;
- (id)previewText;
- (BOOL)postMessageReceivedIfNecessary;
- (id)initWithIMMessage:(id)arg1;
- (BOOL)isOutgoing;
- (void)setIsFromDowngrading:(BOOL)arg1;
- (BOOL)isToEmailAddress;
- (BOOL)isSMS;
- (id)parts;
- (BOOL)isiMessage;
- (id)timeRead;
- (BOOL)isDelivered;
- (BOOL)isRead;
- (BOOL)isFromMe;
- (void)deleteMessageParts:(id)arg1;
- (BOOL)containsAllDisplayableMessageParts:(id)arg1;
- (void)setConversation:(id)arg1;
- (id)IMMessage;
- (BOOL)partiallyFailedSend;
- (BOOL)failedSend;
- (id)conversation;
- (id)subject;
- (id)calendarDate;
- (id)sender;
- (int)sequenceNumber;
- (id)address;
- (float)percentComplete;
- (BOOL)hasAttachments;
- (int)rowID;

@end