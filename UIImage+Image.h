//
//  UIImage+Image.h
//  SHWeather
//
//  Created by H－175 on 15/12/1.
//  Copyright © 2015年 H－175. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface UIImage (Image)

+ (instancetype)imageWithOriginalName:(NSString *)imageName;
+ (instancetype)imageWithStretchableName:(NSString *)imageName;
+ (UIImage *)makeImageWithView:(UIView *)view;

+ (UIImage *)addPrintImg:(UIImage *)print toOriginImg:(UIImage *)Origin withDirection:(NSString *)direction;
/**
 *  用颜色制作图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;
/**
 *  制作部分圆角图片
 */
+ (UIImage *)cornersImageWithColor:(UIColor *)color imageSize:(CGSize)imageSize;
/**
 *  根据点取颜色值
 */
- (UIColor *)colorAtPixel:(CGPoint)point;
/**
 *  高性能切圆角
 */
- (UIImage *)circleImage;
/**
 *  返回color的rgb数组
 */
- (NSArray *)colorRGBArrayAtPixel:(CGPoint)point;

@end
