//
//  MBLoan.h
//  mMobileBanking
//
//  Created by Anik on 6/24/16.
//  Copyright © 2016 mStudoApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBLoan : NSObject

@property NSString *loanID;
@property NSString *loanAccountID;
@property double    loanAmount;
@property double    loanPaidAmount;
@property int       loanTotalNumberofInstallment;
@property int       loanNumberOfInstallmentPaid;
@property NSString *loanMonthlyPaymentDueDate;

@end
