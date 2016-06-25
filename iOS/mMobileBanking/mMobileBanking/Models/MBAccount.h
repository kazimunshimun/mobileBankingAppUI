//
//  MBAccount.h
//  mMobileBanking
//
//  Created by Anik on 6/24/16.
//  Copyright © 2016 mStudoApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBAccount : NSObject

@property NSString *accountID;
@property NSString *accountName;
@property double    availableAmount;

@end
