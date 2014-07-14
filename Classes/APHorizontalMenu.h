//
//  APHorizontalMenu.h
//  APHorizontalMenu
//
//  Created by Abel Pascual on 17/03/14.
//  Copyright (c) 2014 Abel Pascual. All rights reserved.
//

#import <UIKit/UIKit.h>

// Default values
#define AP_HORIZONTAL_MENU_SELECTED_INDEX_DEFAULT 0
#define AP_HORIZONTAL_MENU_CELL_BACKGROUND_COLOR_DEFAULT [UIColor colorWithRed:0.941 green:0.949 blue:0.961 alpha:1]
#define AP_HORIZONTAL_MENU_CELL_SELECTED_COLOR_DEFAULT [UIColor colorWithRed:0.000 green:0.580 blue:0.616 alpha:1]
#define AP_HORIZONTAL_MENU_TEXT_COLOR_DEFAULT [UIColor grayColor]
#define AP_HORIZONTAL_MENU_TEXT_SELECTED_COLOR_DEFAULT [UIColor whiteColor]
#define AP_HORIZONTAL_MENU_TEXT_FONT [UIFont boldSystemFontOfSize:16.0]

// Protocol to get the selected item
@protocol APHorizontalMenuSelectDelegate <NSObject>

@required
- (void)horizontalMenu:(id)horizontalMenu didSelectPosition:(NSInteger)index;

@end

@interface APHorizontalMenu : UIView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, weak) IBOutlet id<APHorizontalMenuSelectDelegate> delegate;
@property (nonatomic, copy) NSArray *values;
@property (nonatomic) NSInteger selectedIndex;

@property (nonatomic) NSInteger visibleItems;

@property (nonatomic, strong) UIColor *cellSelectedColor;
@property (nonatomic, strong) UIColor *cellBackgroundColor;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *textSelectedColor;
@property (nonatomic, strong) UIFont *textFont;

@end
