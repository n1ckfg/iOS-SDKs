/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextContentViewDelegate <NSObject>
@optional
-(void)textContentViewDidBeginEditing:(id)arg1;
-(void)textContentViewDidEndEditing:(id)arg1;
-(BOOL)textContentViewShouldBeginEditing:(id)arg1;
-(BOOL)textContentViewShouldEndEditing:(id)arg1;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2;
-(BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textContentViewDidChange:(id)arg1;
-(void)textContentViewDidChangeSelection:(id)arg1;

@end
