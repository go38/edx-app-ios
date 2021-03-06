//
//  OEXGoogleConfig.h
//  edXVideoLocker
//
//  Created by Jotiram Bhagat on 22/02/15.
//  Copyright (c) 2015 edX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OEXGoogleConfig : NSObject
@property(nonatomic, readonly, assign, getter = isEnabled) BOOL enabled;
@property(nonatomic, readonly, copy) NSString* apiKey;

- (instancetype)initWithDictionary:(NSDictionary*)dictionary;

@end
