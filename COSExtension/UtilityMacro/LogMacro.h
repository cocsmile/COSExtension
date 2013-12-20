//
//  LogMacro.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#ifndef LogMacro_h
#define LogMacro_h

#define po(obj)       NSLog(@"%@", obj)
#define pi(var_i)     NSLog(@"%d", var_i)
#define pf(var_f)     NSLog(@"%f", var_f)

#define print_function()      NSLog(@"%s", __PRETTY_FUNCTION__)

#endif
