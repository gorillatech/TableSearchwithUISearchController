//
//  CustomController.h
//  TableSearch
//
//  Created by Gorilla Technologies S.r.l. on 10/06/16.
//
//

#import <UIKit/UIKit.h>
#import "APLResultsTableController.h"
#import "APLProduct.h"

@interface CustomController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating>

@property (weak, nonatomic) IBOutlet UIView *searchView;
@property (weak, nonatomic) IBOutlet UITableView *table;
@property (nonatomic, strong) UISearchController *searchController;

@property (nonatomic, copy) NSArray *products;


// our secondary search results table view
@property (nonatomic, strong) APLResultsTableController *resultsTableController;

// for state restoration
@property BOOL searchControllerWasActive;
@property BOOL searchControllerSearchFieldWasFirstResponder;

@end
