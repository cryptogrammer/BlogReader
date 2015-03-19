//
//  UTGDetailViewController.h
//  BlogReader
//
//  Created by Utkarsh Garg on 7/21/14.
//  Copyright (c) 2014 UtkarshGarg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UTGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
