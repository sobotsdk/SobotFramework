//
//  SobotInit.h
//  SobotSDK
//
//  Created by 张新耀 on 15/8/16.
//  Copyright (c) 2015年 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SobotInit : NSObject

/**
 *  跳转到智齿客服
 *
 *  @param enterpriseId  企业唯一编号
 *  @param curController 当前执行跳转的对象
 */
+(void)showSobot:(NSString *) enterpriseId
  withController:(UIViewController *) curController;

/**
 *  跳转到智齿客服
 *
 *  @param enterpriseId  企业唯一编号
 *  @param curController 当前执行跳转的对象
 *  @param color         自定义风格颜色：导航、客服气泡、线条
 */
+(void)showSobot:(NSString *) enterpriseId
  withController:(UIViewController *) curController
     customColor:(UIColor *) color;

+(NSString *)getVersion;


@end
