/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SADomainObjectDeleteCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)domainObjectDeleteCompleted;
+ (id)domainObjectDeleteCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
