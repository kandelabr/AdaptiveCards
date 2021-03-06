//
//  ACRTargetBuilderDirector.h
//  AdaptiveCards
//
//  Copyright © 2019 Microsoft. All rights reserved.
//

#import "ACOBaseActionElementPrivate.h"
#import "ACRView.h"
#import <Foundation/Foundation.h>
#import "ACRTargetBuilder.h"

// protocol all TargetBuild should implement
@interface ACRTargetBuilderDirector : NSObject
// indicates types of target director is allowed to build
@property __weak ACRView *rootView;
@property __weak ACOHostConfig *adaptiveHostConfig;
@property (readonly) ACRTargetCapability capability;

- (instancetype)init:(ACRView *)rootView capability:(ACRTargetCapability)capability adaptiveHostConfig:(ACOHostConfig *)adaptiveHostConfig;
- (NSObject *)build:(std::shared_ptr<BaseActionElement> const &)action;
- (NSObject *)build:(std::shared_ptr<BaseActionElement> const &)action forButton:(UIButton *)button;

@end
