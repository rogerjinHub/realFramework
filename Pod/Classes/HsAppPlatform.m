//
//  HsAppPlatform.m
//  hospitalcloud_sdzy
//
//  Created by 123 on 14-6-17.
//  Copyright (c) 2014年 chenjiong. All rights reserved.
//

#import "HsAppPlatform.h"

@implementation HsAppPlatform
//从hundsun_zjfae-info.plist文件中获取  Bundle name 值 再增加了 —下划线
+ (NSString *)bundleName{
     NSDictionary *dic    =   [[NSBundle mainBundle] infoDictionary];//获取info－plist
    NSString *name = dic[(NSString *)kCFBundleNameKey];
    if(name == nil){
        return @"";
    }
    return [@"_" stringByAppendingString:name];/*用BundleName取文件，一些文件在引用出错后给予错误提示*/
}

@end
