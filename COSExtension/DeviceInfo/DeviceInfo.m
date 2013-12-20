//
//  DeviceInfo.m
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#import "DeviceInfo.h"
#import "IPAddress.h"

@implementation DeviceInfo

+ (NSString*)IPAddress
{
    InitAddresses();
    GetIPAddresses();
    GetHWAddresses();
    return [NSString stringWithFormat:@"%s", ip_names[1]];
}

@end
