//
//  VenueListTableViewController.h
//  VenueList
//
//  Created by Kosuke Ogawa on 11/11/11.
//  Copyright (c) 2011年 Kosuke Ogawa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface VenueListTableViewController : UITableViewController <CLLocationManagerDelegate>
{
    NSMutableArray      *venues_;
    CLLocationManager	*locationManager_;
}

@end
