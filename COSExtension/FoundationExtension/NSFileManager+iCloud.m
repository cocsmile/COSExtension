//
//  NSFileManager+iCloud.m
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import "NSFileManager+iCloud.h"

@implementation NSFileManager (iCloud)

+ (BOOL)iCloudAvaliable:(NSString *)containerID
{
    NSURL *ubiq = [[NSFileManager defaultManager]
                   URLForUbiquityContainerIdentifier:containerID];
    
    return ( (ubiq) ? YES : NO );
}

@end
