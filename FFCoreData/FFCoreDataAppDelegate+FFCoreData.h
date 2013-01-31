//
//  CWAppDelegate+FFCoreData.h
//  FFCoreData
//
//  Created by Cory D. Wiles on 1/30/13.
//  Copyright (c) 2013 Cory D. Wiles. All rights reserved.
//

#import "FFCoreDataAppDelegate.h"

@interface FFCoreDataAppDelegate (FFCoreData)

+ (NSDate *)lastSyncDate;
+ (void)saveLastSyncDate:(NSDate *)date;

@end
