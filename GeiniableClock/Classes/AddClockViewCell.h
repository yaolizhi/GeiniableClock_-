//
//  AddClockViewCell.h
//  GeiniableClock
//
//  Created by yuan jun on 11-8-5.
//  Copyright 2011 the9. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainSetViewController;

@interface AddClockViewCell : UITableViewCell {

	MainSetViewController *delegate;
}

@property (nonatomic, assign) MainSetViewController *delegate;

- (IBAction)addClockBtn:(UIButton *)sender;

@end
