//
//  ScoreDisplayViewController.h
//  findLBJ
//
//  Created by Kevin Whiteside on 3/28/14.
//  Copyright (c) 2014 App-t Pupils. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScoreDisplayViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *timeLabel;

@property NSDate* startTime;
@end
