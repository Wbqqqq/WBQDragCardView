//
//  BQDragCardView.h
//  BQCardAnimation
//
//  Created by wbq on 17/5/8.
//  Copyright © 2017年 汪炳权. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^BQDragCardViewComplete)(void);

@interface BQDragCardView : UIView


/**
 *  所有展示的卡片
 */
@property (strong, nonatomic)  NSMutableArray *disPlayCardArr;

/**
 *  资源数组
 */
@property (strong, nonatomic)  NSMutableArray *sourceObjectArr;




/**
 *  初始化卡片试图
 *
 @param superView 父视图
 */
+(void)addCardViewWithSuperView:(UIView *)superView;


@end
