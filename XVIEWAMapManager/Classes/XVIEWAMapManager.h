//
//  XVIEWAMapManager.h
//  XVIEWAMapManager
//
//  Created by zd on 2019/1/25.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XVIEWAMapManager : NSObject

/**
 *  单例
 */
+ (instancetype)sharedAMapManager;

/**
 *  注册高德地图
 @param param    data    {appId  高德地图key},
 */
- (void)registerApp:(NSDictionary *)param;

@end
