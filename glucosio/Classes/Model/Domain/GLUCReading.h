//
// Created by Chris Walters on 4/10/16.
// Copyright (c) 2016 Glucosio.org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GLUCModel.h"
#import "UIColor+GLUCAdditions.h"

@protocol RLMFloat;

static NSString *const kGLUCReadingNotesPropertyKey = @"notes";
static NSString *const kGLUCReadingModelValuePropertyKey = @"reading";

@interface GLUCReading : GLUCModel

+ (NSString *) menuIconName;
+ (UIColor *) readingColor;

@property (nonatomic, readwrite, strong) NSNumber<RLMFloat> *reading;
@property (nonatomic, readwrite, strong) NSString *notes;
@end