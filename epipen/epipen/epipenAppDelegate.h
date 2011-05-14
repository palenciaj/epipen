//
//  epipenAppDelegate.h
//  epipen
//
//  Created by Jose on 5/14/11.
//  Copyright 2011 IMT. All rights reserved.
//

#import <UIKit/UIKit.h>

@class epipenViewController;

@interface epipenAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet epipenViewController *viewController;

@end
