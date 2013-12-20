//
//  NSArray+Extension.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import <Foundation/Foundation.h>

@interface NSArray (Extension)

/*! 合成字符串
 * @discussion 将数组中的所有项合并成一个字符串
 */
- (NSString *)composeString;


/*! 返回数据的第一个元素 */
- (id)firstObject;

@end
