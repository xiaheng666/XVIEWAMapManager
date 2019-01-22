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
 *  导航
 @param param   data {
 *              type:driving/riding/walking(可选)    驾车/骑行/步行(默认驾车)
 *              endLatitude:终点经度,(必填)
 *              endLongitude:终点纬度,(必填)
 *              startLatitude:起点经度,(可选,不传默认定位当前位置)
 *              startLongitude:起点纬度(可选,不传默认定位当前位置)
 *              }
 *              callback回调方法
 */
- (void)navi:(NSDictionary *)param;

@end
