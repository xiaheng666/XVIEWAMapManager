//
//  XVIEWLocationManager.h
//  XVIEWLocationManager
//
//  Created by yyj on 2019/1/4.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XVIEWLocationManager : NSObject

/**
 *  单例
 */
+ (instancetype)sharedLocationManager;

/**
 *  注册应用
 @param param     data    {"appId":高德key}
 */
- (void)registerApp:(NSDictionary *)param;

/**
 *  定位
 @param param    callback回调方法
 */
- (void) location:(NSDictionary *)param;

/**
 *  持续定位
 @param param   data    {"refreshTime":获取定位的间隔时间}
                callback回调方法
 */
- (void) lastLocation:(NSDictionary *)param;

/**
 *  关闭定位
 @param param    callback回调方法
 */
- (void) stopLocation:(NSDictionary *)param;

@end
