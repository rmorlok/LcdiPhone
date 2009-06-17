//
//  MainViewController.h
//  LcdiPhone
//
//  Created by Ryan Morlok on 5/26/09.
//  Copyright Morlok Technologies 2009. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate> {
	IBOutlet UIView	*lcdView;
}

- (IBAction)showInfo;

@end
