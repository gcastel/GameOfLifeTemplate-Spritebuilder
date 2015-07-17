//
//  Creature.h
//  GameOfLife
//
//  Created by Totor Ledeb on 17/07/15.
//  Copyright © 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end