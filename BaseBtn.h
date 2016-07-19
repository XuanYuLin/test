//
//  BaseBtn.h
//  WMaoYan
//
//  Created by WzxJiang on 16/5/27.
//  Copyright © 2016年 WzxJiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseBtn : UIButton
typedef NS_ENUM(NSInteger,WBtnType){
    /** 图片在左 文字在右 */
    WBtnType_LeftImgRightTitle,
    /** 图片在右 文字在左 */
    WBtnType_LeftTitleRightImg,
    /** 图片在下 文字在上 */
    WBtnType_TopTitleBottomImg,
    /** 图片在上 文字在下 */
    WBtnType_TopImgBottomTitle
};

- (void)setImage:(UIImage *)image title:(NSString *)title type:(WBtnType)type forState:(UIControlState)stateType;

@end
