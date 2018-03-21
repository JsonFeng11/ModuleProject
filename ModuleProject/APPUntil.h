//
//  APPUntil.h
//  BarrageRefresh
//
//  Created by fdd on 2018/3/21.
//  Copyright © 2018年 fdd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APPUntil : NSObject
////////////////////////////app相关信息//////////////////////////
/**
 获取设备唯一标识,idfa或uuid,用keychain储存,肯定会有
 */
+ (NSString *)deviceID;
/**
 获取设备idfa,有可能取不到
 */
+ (NSString *)idfa;
/**
 获取appbundle
 */
+ (NSString *)appBundle;
/**
 获取app名字
 */
+ (NSString *)appName;
/**
 获取app版本
 */
+ (NSString *)appVersion;
/**
 获取app build版本
 */
+ (NSString *)buildVersion;


////////////////////////////设备性能相关信息//////////////////////////
/**
 获取系统名称
 */
+ (NSString *)systemName;
/**
 获取系统版本
 */
+ (NSString *)systemVersion;
/**
 获取电池电量
 */
+ (NSString *)getBatteryQuantity;
/**
 获取可用内存
 */
+ (NSString *)getAvailableMemorySize;
/**
 获取已使用内存
 */
+ (NSString *)getUsedMemory;
/**
 获取可使用磁盘容量
 */
+ (NSString *)getAvailableDiskSize;
/**
 获取手机型号
 */
+ (NSString *)getCurrentDeviceModel;
/**
 获取ip地址
 */
- (NSString *)deviceIPAdress;
/**
 获取ip地址
 */
- (NSString *)getWifiName;
@end
