//
//  GitAppDelegate.h
//  Git
//
//  Created by Krzysztof Łoza on 11-07-22.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GitViewController;

@interface GitAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet GitViewController *viewController;

@end
