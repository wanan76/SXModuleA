//
//  ABViewController.h
//  SXModuleA
//
//  Created by apple on 2019/3/15.
//  Copyright © 2019年 zsx. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABViewController : UIViewController
@property(nonatomic,copy)NSString *orderId;
@property(nonatomic,copy)void(^block)(void);
@end

NS_ASSUME_NONNULL_END
