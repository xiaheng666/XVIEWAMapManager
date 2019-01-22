//
//  SpeechSynthesizer.h
//  XView
//
//  Created by yyj on 16/6/29.
//  Copyright © 2016年 XiaHeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@interface SpeechSynthesizer : NSObject
+ (instancetype)sharedSpeechSynthesizer;

- (void)speakString:(NSString *)string;

- (void)stopSpeak;
@end
