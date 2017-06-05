//
//  PPOcrFinderView+Private.h
//  BlinkMoto-demo
//
//  Created by Jura Skrlec on 02/06/2017.
//  Copyright © 2017 MicroBlink. All rights reserved.
//

#import "PPOcrFinderView.h"

@interface PPOcrFinderView ()

@property (nonatomic, readonly) UIView *viewfinder;

@property (nonatomic, readonly) NSLayoutConstraint *viewfinderWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *viewfinderHeightConstraint;

@property (nonatomic, readonly) NSLayoutConstraint *viewfinderHorizontalAlignmentConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *viewfinderVerticalAlignmentConstraint;

@property (nonatomic) UILabel *message;
@property (nonatomic) UILabel *resultMessage;

@end
