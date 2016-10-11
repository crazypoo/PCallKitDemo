//
//  AppDelegate.h
//  PCallKitDemo
//
//  Created by 邓杰豪 on 2016/10/11.
//  Copyright © 2016年 邓杰豪. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

