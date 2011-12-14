//
//  AppDelegate.h
//  VenueList
//
//  Created by Kosuke Ogawa on 11/11/11.
//  Copyright (c) 2011年 Kosuke Ogawa. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VenueListTableViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) VenueListTableViewController *viewController;

@end
