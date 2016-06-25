//
//  MBStatement.h
//  mMobileBanking
//
//  Created by Anik on 6/24/16.
//  Copyright © 2016 mStudoApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBStatement : NSObject

@property NSString *statementID;
@property NSString *statementTitle;
@property double    statementAmount;
@property BOOL      isExpense;
@property NSDate    *statementDate;

@end
