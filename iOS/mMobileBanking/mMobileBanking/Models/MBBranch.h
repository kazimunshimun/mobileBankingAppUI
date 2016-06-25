//
//  MBBranch.h
//  mMobileBanking
//
//  Created by Anik on 6/24/16.
//  Copyright © 2016 mStudoApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface MBBranch : NSObject

@property NSString      *branchID;
@property NSString      *branchName;
@property NSString      *branchAddress;
@property NSString      *bankName;
@property CLLocation    *branchLocation;

@end
