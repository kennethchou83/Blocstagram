//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Kenneth Chou on 6/9/16.
//  Copyright © 2016 Kenneth Chou. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

// Get the media item
//- (Media *)mediaItem;

// Set a new media item
//- (void)setMediaItem:(Media *)mediaItem;

@end
