//
//  NSDictionary+CBExtension.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import <Foundation/Foundation.h>

@interface NSDictionary (CBExtension)

- (BOOL)boolForKey:(NSString *)key;

- (NSInteger)integerForKey:(NSString *)key;

- (int)intForKey:(NSString *)key;

- (double)doubleForKey:(NSString *)key;

- (float)floatForKey:(NSString *)key;

- (long long)longLongForKey:(NSString *)key;

- (unsigned long long)unsignedLongLongForKey:(NSString *)key;

- (NSString *)stringForKey:(NSString *)key;

@end
