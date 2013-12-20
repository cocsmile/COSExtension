//
//  UIImage+CBExtension.m
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import "UIImage+CBExtension.h"

@implementation UIImage (CBExtension)

- (id)stretchableImage
{
    NSInteger leftCap = (NSInteger)(self.size.width/2);
    NSInteger topCap = (NSInteger)(self.size.height/2);
    return [self stretchableImageWithLeftCapWidth:leftCap topCapHeight:topCap];
}

@end
