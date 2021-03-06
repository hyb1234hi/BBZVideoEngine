//
//  BBZOutputFilterLayer.h
//  BBZVideoEngine
//
//  Created by bob on 2020/4/29.
//  Copyright © 2020年 BBZ. All rights reserved.
//

#import "BBZFilterLayer.h"
#import "BBZOutputAction.h"

@interface BBZOutputFilterLayer : BBZFilterLayer
@property (nonatomic, weak) BBZOutputAction *outputAction;
@property (nonatomic, weak) id<BBZVideoWriteControl> writerControl;
@property (nonatomic, strong) NSString *outputFile;
@property (nonatomic, copy) BBZExportCompletionBlock completeBlock;

- (void)didReachEndTime;
@end
