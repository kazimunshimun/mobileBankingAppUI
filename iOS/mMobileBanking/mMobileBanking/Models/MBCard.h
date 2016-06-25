//
//  MBCard.h
//  mMobileBanking
//
//  Created by Anik on 6/24/16.
//  Copyright © 2016 mStudoApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBCard : NSObject

@property NSString  *cardNumber;
@property NSString  *cardType;
@property NSDate    *expireDate;
@property double    availableAmount;

@end
