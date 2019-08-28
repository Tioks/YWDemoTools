//
//  AWCheckTool.h
//  AnyWallet
//
//  Created by Tioks on 2019/6/26.
//  Copyright © 2019 ZZL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWCheckTool : NSObject

+ (BOOL)priceFormat:(NSString *)price;

+ (float)floatWithdecimalNumber:(double)num;
+ (double)doubleWithdecimalNumber:(double)num;
+ (NSString *)stringWithDecimalNumber:(double)num;
+ (NSDecimalNumber *)decimalNumber:(double)num;

/**
 字符串中是否包含空格

 @param str 输入字符串
 @return 是否包含空格
 */
+ (BOOL)isEmpty:(NSString *)str;


/**
 字符串转base64字符串

 @param string 明文字符串
 @return base64字符串
 */
+ (NSString *)stringToStringBase64:(NSString *)string;

/**
 base64字符串转字符串
 
 @param stringBase64 base64字符串
 @return 明文字符串
 */
+ (NSString *)stringBase64ToString:(NSString *)stringBase64;

/**
 json字符串->字典

 @param jsonString json字符串
 @return 输出字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

/**
 字典->json字符串

 @param dic 输入字典
 @return json字符串
 */
+ (NSString *)dictionaryToJson:(NSDictionary *)dic;

/**
 匹配文字中的Url
 
 @param string 传入要配置的字符串
 @return Url
 */
+ (NSString *)matchUrlString:(NSString *)string;

/**
 *  SHA1加密
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+ (NSString *)sha1:(NSString *)str;

/**
 *  MD5加密, 32位 小写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForLower32Bate:(NSString *)str;

/**
 *  MD5加密, 32位 大写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForUpper32Bate:(NSString *)str;

/**
 *  MD5加密, 16位 小写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForLower16Bate:(NSString *)str;

/**
 *  MD5加密, 16位 大写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+(NSString *)MD5ForUpper16Bate:(NSString *)str;

/**
 保存到Keychain

 @param service 标示：key
 @param data 存入数据
 */
+ (void)save:(NSString *)service data:(id)data;

/**
 从Keychain中取出数据

 @param service 标示：key
 @return 返回数据
 */
+ (id)load:(NSString *)service;

/**
 从keychain删除数据

 @param service 标示：key
 */
+ (void)deleteService:(NSString *)service;
+ (void)clearKeyChain;

/**
 校验手机号
 
 @param str 手机号
 @return 是返回yes
 */
+ (BOOL)checkMobile:(NSString *)str;

/**
 校验帐号

 @param str 帐号
 @return 是返回yes
 */
+ (BOOL)checkAccount:(NSString *)str;

/**
 校验密码合法性
 
 @param str 密码
 @return 是返回yes
 */
+ (BOOL)checkPassword:(NSString *)str;

/**
 校验身份证号合法性
 
 @param userID 身份证号
 @return 是返回yes
 */
+ (BOOL)checkUserID:(NSString *)userID;

/**
 计算图片尺寸
 
 @param imageURL 图片URL
 @return 图片尺寸
 */
+(CGSize)getImageSizeWithURL:(id)imageURL;
@end

NS_ASSUME_NONNULL_END
