/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ABNetworkImageViewDelegate <NSObject>
@optional
-(void)networkImageViewDidLoadImage:(id)networkImageView;
-(void)networkImageView:(id)view loadingProgress:(float)progress;
-(void)networkImageView:(id)view errorLoadingImage:(id)image;
@end

