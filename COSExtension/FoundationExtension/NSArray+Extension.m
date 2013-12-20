//
//  NSArray+Extension.m
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import "NSArray+Extension.h"

@implementation NSArray (Extension)

- (NSString *)composeString
{
    if ([self count] == 0)
        return @"";
    
    NSMutableString *str = [[NSMutableString alloc] init];
    [self enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        if ([str isKindOfClass:[NSString class]]) {
            [str appendString:obj];
        } else {
            [str appendString:[obj description]];
        }
    }];
    return str;
}

- (id)firstObject
{
    return [self objectAtIndex:0];
}

@end
