//
//  XVIEWNaviManager.h
//  XVIEWNaviManager
//
//  Created by yyj on 2019/1/4.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XVIEWNaviManager : NSObject

/**
 *  单例
 */
+ (instancetype)sharedNaviManager;

/**
 *  步行导航
 @param param   data {
 *              endLatitude:终点经度,(必填)
 *              endLongitude:终点纬度,(必填)
 *              startLatitude:起点经度,(可选,不传默认定位当前位置)
 *              startLongitude:起点纬度(可选,不传默认定位当前位置)
 *              }
 *              callback回调方法
 */
- (void)walk:(NSDictionary *)param;

/**
 *  驾车导航
 @param param   data {
 *              endLatitude:终点经度,(必填)
 *              endLongitude:终点纬度,(必填)
 *              startLatitude:起点经度,(可选,不传默认定位当前位置)
 *              startLongitude:起点纬度(可选,不传默认定位当前位置)
 *              }
 *              callback回调方法
 */
- (void)drive:(NSDictionary *)param;

/**
 *  骑行导航
 @param param   data {
 *              endLatitude:终点经度,(必填)
 *              endLongitude:终点纬度,(必填)
 *              startLatitude:起点经度,(可选,不传默认定位当前位置)
 *              startLongitude:起点纬度(可选,不传默认定位当前位置)
 *              }
 *              callback回调方法
 */
- (void)ride:(NSDictionary *)param;

@end
