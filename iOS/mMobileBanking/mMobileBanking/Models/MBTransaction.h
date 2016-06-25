//
//  MBTransaction.h
//  mMobileBanking
//
//  Created by Anik on 6/24/16.
//  Copyright © 2016 mStudoApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBTransaction : NSObject

@property NSString *transactionID;
@property NSString *transactionTitle;
@property NSString *transactionAccountID;
@property NSString *transactionAccountType;
@property NSString *transactionType;
@property double    transactionAmount;
@property BOOL      isExpense;
@property NSDate    *transactionDate;

@end
