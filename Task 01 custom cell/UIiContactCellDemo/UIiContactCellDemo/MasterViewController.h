//
//  MasterViewController.h
//  UIiContactCellDemo
//
//  Created by Mac on 14.06.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIiContactCell.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController
{
  NSArray* contactsName;
// NSArray* imageName;
}

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (nonatomic, retain) NSArray *contactsName;

@end
