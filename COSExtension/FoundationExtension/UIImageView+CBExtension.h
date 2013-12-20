//
//  UIImageView+CBExtension.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import <UIKit/UIKit.h>

@interface UIImageView (CBExtension)

+ (id)imageViewWithURL:(NSURL *)url cornerRadius:(CGFloat)radius
           borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

@end
