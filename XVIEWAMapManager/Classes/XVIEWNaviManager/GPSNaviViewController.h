//
//  GPSNaviViewController.h
//  AMapNaviKit
//
//  Created by liubo on 7/29/16.
//  Copyright © 2016 AutoNavi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AMapNaviKit/AMapNaviKit.h>
@interface GPSNaviViewController : UIViewController
@property (nonatomic,strong) NSString *type;//（driving/riding/walking）
@property (nonatomic, strong) AMapNaviPoint *startPoint;//起点
@property (nonatomic, strong) AMapNaviPoint *endPoint;//终点
//驾车的管理类
@property (nonatomic, strong) AMapNaviDriveManager *driveManager;
@property (nonatomic, strong) AMapNaviDriveView *driveView;//驾车视图
//骑行的管理类
@property (nonatomic, strong) AMapNaviRideManager *rideManager;
@property (nonatomic, strong) AMapNaviRideView *rideView;//骑行视图
//步行的管理类
@property (nonatomic, strong) AMapNaviWalkManager *walkManager;
@property (nonatomic, strong) AMapNaviWalkView *walkView;//步行视图
@end
