//
//  AppDelegate.h
//  HelloIPhone
//
//  Created by Comin Lo on 14-4-12.
//  Copyright (c) 2014年 Comin Lo Individual. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UILabel *display;
}

@property (strong, nonatomic) UIWindow *window;

@property (retain, nonatomic) IBOutlet UILabel *display;

- (IBAction) click: (id)sender;

@end
