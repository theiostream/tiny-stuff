/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ABWebViewController.h"

@class ABHUD;

__attribute__((visibility("hidden")))
@interface ABNativesqueSingleWebViewController : ABWebViewController {
@private
	ABHUD* hud;
}
-(void)viewDidLoad;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(unsigned)type;
-(void)webViewDidStartLoad:(id)webView;
-(void)_hideHUD;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)viewWillDisappear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
@end

