//
//  HsExceptionKit.h
//  hospitalcloud
//
//  Created by 123 on 14-6-19.
//  Copyright (c) 2014年 chenjiong. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const HsExceptionKeyIsNull;
extern NSString *const HsExceptionUrlIsNull;
extern NSString *const HsExceptionStringIsNull;
extern NSString *const HsExceptionFileNoExist;

@interface HsExceptionKit : NSObject

/**
 *	@brief	检查 文件是否存在
 *	@param 	exceptionname 	异常名称
 *	@param 	error 	错误信息
 *	@param 	fileName 	文件名称
 *	@param 	extension 	后缀
 *	@return
 */
+ (void)checkExceptionWithName:(NSString *)exceptionname reason:(NSString *)error forFileName:(NSString *)fileName extension:(NSString *)extension;


/**
 *	@brief	文件名称会追加bundleName
 *	@time	2014-09-05 15:44:53
 *	@param 	exceptionname 	异常名称
 *	@param 	error 	错误信息
 *	@param 	fileName 	文件名称
 *	@param 	extension 	后缀
 *	@return
 */
+ (void)checkExceptionWithBundleName:(NSString *)exceptionname reason:(NSString *)error forFileName:(NSString *)fileName extension:(NSString *)extension;



/**
 *	@brief	检查 配置字段是否存在
 *	@param 	exceptionname   异常名称
 *	@param 	error 	错误信息
 *	@param 	key 	字段名称
 *	@return
 */
+ (void)checkExceptionWithName:(NSString *)exceptionname reason:(NSString *)error forKey:(NSString *)key;



/**
 *	@brief	从string_bundleName.strings里面判断是否为空
 *	@param 	name     异常名称
 *	@param 	error 	错误信息
 *	@param 	key 	字段名称
 *	@return
 */
+ (void)checkExceptionWithBundleName:(NSString *)exceptionname reason:(NSString *)error forKey:(NSString *)key;


@end
