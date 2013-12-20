//
//  NSMutableSet+CBExtension.m
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import "NSMutableSet+CBExtension.h"

@implementation NSMutableSet (CBExtension)

- (void)removeObjectsInArray:(NSArray *)array
{
    for (id obj in array)
    {
        [self removeObject:obj];
    }
}

@end
