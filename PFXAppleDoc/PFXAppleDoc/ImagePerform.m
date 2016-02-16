/**
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

#import "ImagePerform.h"

@implementation ImagePerform

+ (instancetype)sharedImagePerform
{
    static ImagePerform *s_imagePerform = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        s_imagePerform = [ImagePerform new];
    });
    
    return s_imagePerform;
}

@end
