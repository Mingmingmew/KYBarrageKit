//
//  KYBarrageModel.h
//  KYBarrageKitDemo
//
//  Created by kingly on 2016/11/22.
//  Copyright © 2016年 KYBarrageKit  Software (https://github.com/kingly09/KYBarrageKit) by kingly inc.

//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KYBarrageKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface KYBarrageModel : NSObject

//MARK: Barrage Model property

// barrage's id
@property (assign, nonatomic) NSInteger numberID;

//  barrage's time
@property (copy, nonatomic,nullable) NSString *time;

// barrage's type
@property (assign, nonatomic)  KYBarrageDisplayType barrageType;

// barrage's speed
@property (assign, nonatomic)  KYBarrageDisplaySpeedType speed;

// barrage's direction
@property (assign, nonatomic)  KYBarrageScrollDirection direction;

// barage's location
@property (assign, nonatomic)  KYBarrageDisplayLocationType displayLocation;

// barrage's superView(The father of View barrage)
@property (weak, nonatomic,nullable) UIView *bindView;

// barrage's content
@property (copy, nonatomic, nonnull) NSMutableAttributedString *message;

// barrage's author
@property (strong, nonatomic, nullable)  id author;

// barrage goal object
@property (strong, nonatomic, nullable)  id  object;

// barrage's textfont
@property (copy, nonatomic) UIFont *font;

//barrage's textColor
@property (copy, nonatomic) UIColor *textColor;

//MARK: Barrage initialization method

/**
  init  Barrage Model property

 @param numID barrage's id
 @param message barrage's content
 @param author barrage's author
 @param object barrage goal object
 @return  Barrage Model property
 */
- (instancetype)initWithNumberID:(NSInteger)numID BarrageContent:(nullable NSMutableAttributedString *)message Author:(nullable id)author Object:(nullable id)object;

/**
 init  Barrage Model property

 @param numID barrage's id
 @param message barrage's content
 @return Barrage Model property
 */
- (instancetype)initWithNumberID:(NSInteger)numID BarrageContent:(nullable NSMutableAttributedString *)message;

/**
 init  Barrage Model property

 @param message barrage's content
 @return  Barrage Model property
 */
- (instancetype)initWithBarrageContent:(NSMutableAttributedString *)message;


@end

NS_ASSUME_NONNULL_END
