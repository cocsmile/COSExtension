//
//  PropertyMacro.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#ifndef CBExtension_PropertyMacro_h
#define CBExtension_PropertyMacro_h

#if __has_feature(objc_arc)
    #define CB_STRONG   strong
#else 
    #define CB_STRONG   retain
#endif

#if __has_feature(objc_arc_weak)
    #define CB_WEAK     weak
#elif __has_feature(objc_arc)
    #define CB_WEAK     unsafe_unretained
#else
    #define CB_WEAK     assign
#endif


#define StrongProperty        @property (CB_STRONG, nonatomic)
#define WeakProperty          @property (CB_WEAK, nonatomic)
#define AssignProperty        @property (assign, nonatomic)

#define StrongProperty_r      @property (CB_STRONG, nonatomic, readonly)
#define WeakProperty_r        @property (CB_WEAK, nonatomic, readonly)
#define AssignProperty_r      @property (assign, nonatomic, readonly)

#endif
