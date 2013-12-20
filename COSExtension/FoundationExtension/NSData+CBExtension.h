//
//  NSData+CBExtension.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import <Foundation/Foundation.h>

@interface NSData (CBExtension)

- (NSDictionary *)jsonObject;

+ (NSString *)contentTypeForImageData:(NSData *)data;

@end
