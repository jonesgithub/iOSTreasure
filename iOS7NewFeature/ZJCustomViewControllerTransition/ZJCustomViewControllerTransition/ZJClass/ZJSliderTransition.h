//
//  ZJSliderTransition.h
//  ZJCustomViewControllerTransition
//
//  Created by Zhu J on 11/6/13.
//  Copyright (c) 2013 Zhu J. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZJSliderTransition : UIPercentDrivenInteractiveTransition
- (instancetype)initWithNavigationController:(UINavigationController *)nc;

@property(nonatomic,assign) UINavigationController *parent;
@property(nonatomic,assign,getter = isInteractive) BOOL interactive;

@end
