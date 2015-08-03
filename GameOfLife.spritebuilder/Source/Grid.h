//
//  Grid.h
//  GameOfLife
//
//  Created by Totor Ledeb on 17/07/15.
//  Copyright © 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

- (void)evolveStep;
- (void)countNeighbors;
- (void)updateCreatures;
@end
