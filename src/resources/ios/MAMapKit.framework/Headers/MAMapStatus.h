//
//  MAMapStatus.h
//  MapKit_static
//
//  Created by yi chen on 1/27/15.
//  Copyright © 2016 Amap. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CLLocation.h>

///地图状态对象
@interface MAMapStatus : NSObject

///地图的中心点，改变该值时，地图的比例尺级别不会发生变化
@property (nonatomic) CLLocationCoordinate2D centerCoordinate;

///缩放级别
@property (nonatomic) CGFloat zoomLevel;

///设置地图旋转角度(逆时针为正向), 单位度, [0,360)
@property (nonatomic) CGFloat rotationDegree;

///设置地图相机角度(范围为[0.f, 45.f])
@property (nonatomic) CGFloat cameraDegree;

/**
 * @brief 根据指定参数生成对应的status
 * @param coordinate     地图的中心点，改变该值时，地图的比例尺级别不会发生变化
 * @param zoomLevel      缩放级别
 * @param rotationDegree 设置地图旋转角度(逆时针为正向)
 * @param cameraDegree   设置地图相机角度(范围为[0.f, 45.f])
 * @return 生成的Status
 */
+ (instancetype)statusWithCenterCoordinate:(CLLocationCoordinate2D)coordinate
                                 zoomLevel:(CGFloat)zoomLevel
                            rotationDegree:(CGFloat)rotationDegree
                              cameraDegree:(CGFloat)cameraDegree;

/**
 * @brief 根据指定参数初始化对应的status
 * @param coordinate     地图的中心点，改变该值时，地图的比例尺级别不会发生变化
 * @param zoomLevel      缩放级别
 * @param rotationDegree 设置地图旋转角度(逆时针为正向)
 * @param cameraDegree   设置地图相机角度(范围为[0.f, 45.f])
 * @return 生成的Status
 */
- (id)initWithCenterCoordinate:(CLLocationCoordinate2D)coordinate
                     zoomLevel:(CGFloat)zoomLevel
                rotationDegree:(CGFloat)rotationDegree
                  cameraDegree:(CGFloat)cameraDegree;

@end
