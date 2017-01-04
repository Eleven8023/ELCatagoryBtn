//
//  UIButton+ELBtnCatagory.h
//  ELButtonCatagory
//
//  Created by Eleven on 17/1/3.
//  Copyright © 2017年 Eleven. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ELButtonEdgeInsetsStyle){
    ELButtonEdgeInsetsStyleTop, // 上图下文
    ELButtonEdgeInsetsStyleLeft, // 左图右文
    ELButtonEdgeInsetsStyleBottom, // 上文下图
    ELButtonEdgeInsetsStyleRight  // 左文右图
};

@interface UIButton (ELBtnCatagory)

/**
 *  设置button的titleLabel和imageview的布局样式及间距
 *  @param style titleLabel和imageview的布局样式
 *  @praram space titleLabel和imageview的间距
 **/

- (void)layoutButtonWithEdgeInsetsStyle:(ELButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;



@end
