//
//  AlertViewMacro.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#ifndef HuXiu_AlertViewMacro_h
#define HuXiu_AlertViewMacro_h

#define ShowAlerViewWithMessage(msg) \
    [[[UIAlertView alloc] initWithTitle:nil message:(msg) delegate:nil \
        cancelButtonTitle:NSLocalizedString(@"好", @"OK") otherButtonTitles:nil] show];

#endif
