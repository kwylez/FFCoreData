//
//  CWMasterViewController.h
//  FFCoreData
//
//  Created by Cory D. Wiles on 1/27/13.
//  Copyright (c) 2013 Cory D. Wiles. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CWDetailViewController;

#import <CoreData/CoreData.h>

@interface CWMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) CWDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
