/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface VoiceChatSessionBeaconState : NSObject  {
    struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *lastReceivedBeacon;
    unsigned int sentState;
    unsigned int receivedState;
    BOOL needsSend;
    unsigned int typeToSend;
}

@property unsigned int typeToSend;
@property BOOL needsSend;
@property unsigned int receivedState;
@property unsigned int sentState;


- (unsigned int)sentState;
- (unsigned int)receivedState;
- (BOOL)needsSend;
- (unsigned int)typeToSend;
- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (void)setTypeToSend:(unsigned int)arg1;
- (void)setNeedsSend:(BOOL)arg1;
- (void)setReceivedState:(unsigned int)arg1;
- (void)setSentState:(unsigned int)arg1;
- (struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)lastReceivedBeacon;
- (id)init;
- (void)dealloc;

@end