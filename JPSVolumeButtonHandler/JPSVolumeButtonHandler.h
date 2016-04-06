//
//  JPSVolumeButtonHandler.h
//  JPSImagePickerController
//
//  Created by JP Simard on 1/31/2014.
//  Copyright (c) 2014 JP Simard. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for JPSVolumeButtonHandler.
FOUNDATION_EXPORT double JPSVolumeButtonHandlerVersionNumber;

//! Project version string for JPSVolumeButtonHandler.
FOUNDATION_EXPORT const unsigned char JPSVolumeButtonHandlerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JPSVolumeButtonHandler/PublicHeader.h>


typedef void (^JPSVolumeButtonBlock)();

@interface JPSVolumeButtonHandler : NSObject

// A block to run when the volume up button is pressed
@property (nonatomic, copy) JPSVolumeButtonBlock upBlock;

// A block to run when the volume down button is pressed
@property (nonatomic, copy) JPSVolumeButtonBlock downBlock;

// Returns a button handler with the specified up/down volume button blocks
+ (instancetype)volumeButtonHandlerWithUpBlock:(JPSVolumeButtonBlock)upBlock downBlock:(JPSVolumeButtonBlock)downBlock;

@end
