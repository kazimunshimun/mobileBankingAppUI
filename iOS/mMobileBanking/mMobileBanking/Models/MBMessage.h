//
//  MBMessage.h
//  mMobileBanking
//
//  Created by Anik on 6/24/16.
//  Copyright © 2016 mStudoApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBMessage : NSObject

@property NSString  *messageID;
@property NSString  *messageText;
@property NSString  *messageFrom;
@property NSString  *messageSubject;
@property NSDate    *messageSentDate;

@end
