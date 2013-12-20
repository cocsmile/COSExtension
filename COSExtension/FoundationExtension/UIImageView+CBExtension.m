//
//  UIImageView+CBExtension.m
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import "UIImageView+CBExtension.h"
#import <QuartzCore/QuartzCore.h>

@implementation UIImageView (CBExtension)

+ (id)imageViewWithURL:(NSURL *)url cornerRadius:(CGFloat)radius
           borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor
{
    NSString *imgPath = [url path];
    UIImage *img = [[UIImage alloc] initWithContentsOfFile:imgPath];
    UIImageView *iv = [[UIImageView alloc] initWithImage:img];
    iv.layer.cornerRadius = radius;
    iv.layer.masksToBounds = YES;
    iv.layer.borderWidth = borderWidth;
    iv.layer.borderColor = borderColor.CGColor;
    
    return iv;
}

@end
