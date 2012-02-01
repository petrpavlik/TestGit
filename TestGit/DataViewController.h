//
//  DataViewController.h
//  TestGit
//
//  Created by Petr Pavlik on 2/1/12.
//  Copyright (c) 2012 uLikeIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;
@end
