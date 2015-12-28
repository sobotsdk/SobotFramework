//
//  ZCUIChatController.h
//  SobotKit
//
//  Created by zhangxy on 15/11/11.
//  Copyright © 2015年 zhichi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZCKitInfo.h"
#import "ZCUIBaseController.h"

/**ZCPageBlockType回调类型*/
typedef NS_ENUM(NSInteger,ZCPageBlockType) {
    ZCPageBlockGoBack     = 1,// 点击返回
    ZCPageBlockLoadFinish = 2,// 加载界面完成，可对UI进行修改
};

/**
 *  智齿 聊天页面VC
 */
@interface ZCUIChatController : ZCUIBaseController


/**
 *  初始化信息
 */
@property(nonatomic,strong) ZCKitInfo  *zckitInfo;

/**
 *  聊天列表
 */
@property (nonatomic,strong)UITableView *listTable;

/**
 *  初始化
 *
 *  @param info  
 *
 *  @return ZCUIChatController
 */
-(id)initWithInitInfo:(ZCKitInfo *)info;



/**
 *  点击返回后的回调（注意：实现此方法后，sdk不自动实现返回事件）
 *
 *  @param backBlock
 */
-(void)setPageBlock:(void (^)(ZCUIChatController *object,ZCPageBlockType type))pageClick messageLinkClick:(void (^)(NSString *link)) linkBlock;


/**
 *  设置输入框
 *
 *  @return UITextView 
 */
-(UITextView *)getChatTextView;

@end
