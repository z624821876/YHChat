//
//  CellChatRight.h
//  samuelandkevin github:https://github.com/samuelandkevin/YHChat
//
//  Created by samuelandkevin on 17/2/17.
//  Copyright © 2017年 samuelandkevin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellChatBase.h"

@class YHUserInfo;
@class CellChatTextRight;
@protocol CellChatTextRightDelegate <NSObject>

@optional
- (void)tapRightAvatar:(YHUserInfo *)userInfo;
- (void)tapSendMsgFailImg;//点击发送失败图标
- (void)retweetMsg:(NSString *)msg inRightCell:(CellChatTextRight *)rightCell;//转发消息
@end

@interface CellChatTextRight : CellChatBase

@property (nonatomic,weak)id<CellChatTextRightDelegate>delegate;
@property (nonatomic,assign)NSIndexPath *indexPath;
@end
