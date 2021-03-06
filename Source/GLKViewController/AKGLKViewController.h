//
//  AKGLKViewController.h
//  AKGLKKit
//
//  Copyright (c) 2016 Aryan Kashyap. All rights reserved.
//

/**** This is an alternative for  GLKit's GLKViewController Class ****/

#import <UIKit/UIKit.h>
#import "AKGLKView.h"

@class CADisplayLink;

@interface AKGLKViewController : UIViewController <AKGLKViewDelegate>
{
    CADisplayLink *displayLink;
    NSInteger preferredFramesPerSecond;
}

// This property contains the desired frames per second rate for
// drawing. The default is 30
@property (nonatomic) NSInteger preferredFramesPerSecond;

/////////////////////////////////////////////////////////////////
// This property contains the actual frames per second based
// upon the value for preferredFramesPerSecond property
// and the screen on which the GLKView resides.
// The value is as close to preferredFramesPerSecond as
// possible, without exceeding the screen's refresh rate. This
// value does not account for dropped frames, so it is not a
// measurement of your statistical frames per second. It is the
// static value for which updates will take place.
@property (nonatomic, readonly) NSInteger framesPerSecond;

/////////////////////////////////////////////////////////////////
// Thi property determines whether to pause or resume drawing
// at the rate defined by the framesPerSecond property.
// Initial value is NO.
@property (nonatomic, getter=isPaused) BOOL paused;

@end
