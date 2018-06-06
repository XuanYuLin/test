//
//  BaseBtn.m
//  WMaoYan
//
//  Created by WzxJiang on 16/5/27.
//  Copyright © 2016年 WzxJiang. All rights reserved.
//

#import "BaseBtn.h"

@implementation BaseBtn

- (void)setImage:(UIImage *)image title:(NSString *)title type:(WBtnType)type forState:(UIControlState)stateType {
    //UIEdgeInsetsMake(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right)
    
    [self setImage:image forState:stateType];
    [self setTitle:title forState:stateType];
    
    
    ////
    
    
    
    switch (type) {
        case WBtnType_LeftTitleRightImg: {
            self.titleEdgeInsets = UIEdgeInsetsMake(0,-self.imageView.intrinsicContentSize.width, 0,self.imageView.intrinsicContentSize.width);
            
            self.imageEdgeInsets = UIEdgeInsetsMake(0, self.titleLabel.intrinsicContentSize.width + 5, 0,-self.titleLabel.intrinsicContentSize.width - 5);
        }
            break;
            
        default:
            break;
    }
}
@end
