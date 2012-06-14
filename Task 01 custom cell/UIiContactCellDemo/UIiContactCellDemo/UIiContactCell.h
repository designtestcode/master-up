//
//  UIiContactCell.h
//  UIiContactCellDemo
//
//  Created by Mac on 14.06.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIiContactCell : UITableViewCell{
    UILabel *nameItem;
    UIImageView *imageItem;    
}

@property (nonatomic, retain) IBOutlet UILabel *nameItem;
@property (nonatomic, retain) IBOutlet UIImageView *imageItem;


@end
