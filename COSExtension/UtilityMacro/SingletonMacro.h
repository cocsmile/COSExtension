//
//  SingletonMacro.h
//  CBExtension
//
//  Created by coc on 13-12-20.
//  Copyright (c) 2013年 coc. All rights reserved.

#ifndef CBExtension_SingletonMacro_h
#define CBExtension_SingletonMacro_h


#define DECLARE_SINGLETON() \
+ (id)sharedInstance;


#define SYNTHESIZE_SINGLETONE_FOR_CLASS(CLASS_NAME) \
+ (id)sharedInstance\
{\
    static CLASS_NAME *__##CLASS_NAME##_instance = nil;\
\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        __##CLASS_NAME##_instance = [[CLASS_NAME alloc] init];\
    });\
    return __##CLASS_NAME##_instance;\
}

#endif
