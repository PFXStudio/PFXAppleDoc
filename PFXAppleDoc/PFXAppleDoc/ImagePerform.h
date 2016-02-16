/*
 * Copyright (C) PFXStudio Ltd., 2015. All rights reserved.
 *
 * This software is covered by the license agreement between
 * the end user and PFXStudio Ltd., and may be
 * used and copied only in accordance with the terms of the
 * said agreement.
 *
 * PFXStudio Ltd., assumes no responsibility or
 * liability for any errors or inaccuracies in this software,
 * or any consequential, incidental or indirect damage arising
 * out of the use of the software.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ImagePerform : NSObject

/**@name Get imageperform instance*/
+ (instancetype)sharedImagePerform;

/**
 @name  Save iamge to local storage
 */
/**
 @param image Target image data
 @note Save application document folder
 */
- (NSString *)saveWithImage:(UIImage *)image;

@end
