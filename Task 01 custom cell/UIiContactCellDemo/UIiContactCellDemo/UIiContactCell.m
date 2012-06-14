//
//  UIiContactCell.m
//  UIiContactCellDemo
//
//  Created by Mac on 14.06.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "UIiContactCell.h"

@implementation UIiContactCell

@synthesize nameItem = _nameItem;
@synthesize imageItem =  _imageItem;

- (void)dealloc
{
    [imageItem release];
    [nameItem release];
    [super dealloc];
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
