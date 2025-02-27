//
//  MACustomCalloutView.h
//  MAMapKit
//
//  Created by shaobin on 17/1/6.
//  Copyright © 2017年 Amap. All rights reserved.
//

#import <UIKit/UIKit.h>

///自定义annotationView的弹出框. 注意:不会触发-(void)map: didAnnotationViewCalloutTapped:
@interface MACustomCalloutView : UIView

///init时传入的customView
@property (nonatomic, strong, readonly) UIView *customView;

///用户自定义数据，内部不做处理
@property (nonatomic, strong) id userData;

/**
 * @brief 初始化并返回一个MACustomCalloutView
 * @param customView 自定义View，不能为nil
 * @return 初始化成功则返回MACustomCalloutView,否则返回nil
 */
- (id)initWithCustomView:(UIView *)customView;

@end
