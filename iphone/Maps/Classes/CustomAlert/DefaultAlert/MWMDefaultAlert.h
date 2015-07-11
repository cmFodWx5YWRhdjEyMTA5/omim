//
//  MWMRouteNotFoundDefaultAlert.h
//  Maps
//
//  Created by v.mikhaylenko on 12.03.15.
//  Copyright (c) 2015 MapsWithMe. All rights reserved.
//

#import "MWMAlert.h"

@interface MWMDefaultAlert : MWMAlert

+ (instancetype)routeNotFoundAlert;
+ (instancetype)endPointNotFoundAlert;
+ (instancetype)startPointNotFoundAlert;
+ (instancetype)internalErrorAlert;
+ (instancetype)noCurrentPositionAlert;
+ (instancetype)pointsInDifferentMWMAlert;
+ (instancetype)routingDisclaimerAlert;
+ (instancetype)disabledLocationAlert;
+ (instancetype)notWiFiAlertWithName:(NSString *)name downloadBlock:(void(^)())block;
+ (instancetype)notConnectionAlert;
+ (instancetype)locationServiceNotSupportedAlert;

@end
