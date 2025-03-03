//
//  SearchTableViewController.h
//  WithMe
//
//  Created by Daniel Alvarez on 10/11/15.
//  Copyright © 2015 Daniel Alvarez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DigitsKit/DigitsKit.h>
#import <Parse/Parse.h>
#import "Movie.h"
#import "WS.h"
#import "UIImageView+WebCache.h"
#import "PFUser+Digits.h"
#import "AddButton.h"
#import "MovieViewController.h"

@interface SearchTableViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *searchTextField;

@end
