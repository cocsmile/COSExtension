//
//  BundleMacro.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#ifndef BundleMacro_h
#define BundleMacro_h

#define PathForPNGResource(name)    [[NSBundle mainBundle] pathForResource:(name) ofType:@"png"]
#define PathForXMLResource(name)    [[NSBundle mainBundle] pathForResource:(name) ofType:@"xml"]

#define PathForResourceOfType(res, type)    [[NSBundle mainBundle] pathForResource:(res) ofType:(type)]

#endif
