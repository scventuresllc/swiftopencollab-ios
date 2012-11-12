//
//  ResizeServerViewController.h
//  OpenStack
//
//  Created by Mike Mayo on 2/9/10.
//  The OpenStack project is provided under the Apache 2.0 license.
//

#import "ServerActionViewController.h"

@class OpenStackAccount, Server, Flavor;

@interface ResizeServerViewController : ServerActionViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate> {
    Flavor *selectedFlavor;
    IBOutlet UITableView *tableView;
    
    id successObserver;
    id failureObserver;
}

@property (nonatomic, retain) OpenStackAccount *account;
@property (nonatomic, retain) Server *server;
@property (nonatomic, retain) NSArray *flavors;

-(void)saveButtonPressed:(id)sender;

@end
