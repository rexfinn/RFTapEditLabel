//
//  RFTapEditLabel.h
//  RFTapEditLabelDemo
//
//  Created by Rudd Fawcett on 11/25/13.
//  Copyright (c) 2013 Rudd Fawcett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RFTapEditLabel : UILabel <UIAlertViewDelegate>

@property (strong, nonatomic) UITextField *textField;

@property (nonatomic, readwrite) NSString *labelText;
@property (nonatomic, readwrite) NSString *placeholderText;
@property (strong, nonatomic) NSString *alertTitle;

@property (nonatomic, readwrite) BOOL isMasked;
@property (nonatomic, readwrite) BOOL isEditable;

@property (nonatomic, assign) NSUInteger maskLength;

- (id)initWithFrame:(CGRect)frame secureTextEntry:(BOOL)secureTextEntry;
-(id)initWithCoder:(NSCoder *)aDecoder AndSecureTextEntry:(BOOL)secureTextEntry;
- (void)simulateTap;

- (void)toggleEditable;
- (void)setEditable:(BOOL)editable;

- (void)setLabelTextCustom:(NSString *)labelText;
- (void)setPlaceholderText:(NSString *)placeholderText;

- (void)toggleMask;
- (void)toggleMaskForTime:(NSTimeInterval)time;
- (void)toggleMaskForTime:(NSTimeInterval)time onToggle:(void (^)(void))whileToggled completion:(void (^)(void))completionBlock;

- (void)setMaskWithLength:(NSUInteger)maskLength;
- (NSString*)maskString:(NSUInteger)maskLength;

@end
