//
//  ApplicationAppDelegate.h
//  Application
//
//  Created by Jared Lewis on 5/25/11.
//  Copyright 2011 JaredLewis. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ApplicationAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
