//
//  BBZVideoEngineHeader.h
//  BBZVideoEngine
//
//  Created by Hbo on 2020/11/11.
//  Copyright © 2020 HaiboZhu. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef __OBJC__
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "NSFileManager+BBZTools.h"
#import "NSError+BBZ.h"
#endif

#ifdef DEBUG
#define BBZINFO(fmt, ...)          NSLog(@"[%@:%d]"fmt, \
[[NSString stringWithFormat:@"%s", __FILE__] lastPathComponent], \
__LINE__, \
##__VA_ARGS__)
#define BBZERROR(fmt, ...)          NSLog(@"error:[%@:%d]"fmt, \
[[NSString stringWithFormat:@"%s", __FILE__] lastPathComponent], \
__LINE__, \
##__VA_ARGS__)
#define BBZDEALLOC() NSLog(@"*******dealloc%@: %@*****", NSStringFromSelector(_cmd), self);
#define BBZLOG() NSLog(@"%s, %d",__PRETTY_FUNCTION__, __LINE__)
#else
#define BBZINFO(fmt, ...) ((void)0)
#define BBZERROR(fmt, ...) ((void)0)
#define BBZDEALLOC() ((void)0)
#define BBZLOG() ((void)0)
#endif
