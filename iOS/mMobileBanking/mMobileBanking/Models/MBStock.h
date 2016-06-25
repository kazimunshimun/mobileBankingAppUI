//
//  MBStock.h
//  mMobileBanking
//
//  Created by Anik on 6/24/16.
//  Copyright © 2016 mStudoApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBStock : NSObject

@property NSString *stockID;
@property NSString *stockName;
@property double    stockTodaysPrize;
@property double    stockYesterdayPrize;
@property float     stockValueChange;

@end
