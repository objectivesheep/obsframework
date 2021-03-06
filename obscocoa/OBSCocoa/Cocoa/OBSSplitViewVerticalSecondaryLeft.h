/* *****************************************************************
 *                         ObjectiveSheep Framework        
 * -----------------------------------------------------------------
 *  Copyright (c) 2010 ObjectiveSheep! All rights reserved.
 *
 *  This file contains Original Code.
 *  You may not use this file except if authorized by ObjectiveSheep 
 * -----------------------------------------------------------------
 *  Created by Fabio Russo on 24/03/2011 
 *
 * ****************************************************************/

#import <Foundation/Foundation.h>
#import "ObjectiveSheep.h"
#define MIN_SIZE_LEFT_PANE 160.0
#define MAX_SIZE_LEFT_PANE 250.0

@interface OBSSplitViewVerticalSecondaryLeft : NSSplitView <NSSplitViewDelegate>
{
    NSNumber *secondaryPaneMinSize;
    NSNumber *secondaryPaneMaxSize;
    
    int secondaryViewIndex;
    int primaryViewIndex;
    
    float collapsableViewWidth;
    BOOL collapsed;
}

/**
 * Set these properties from Interface Builder in the Custom-Class -> User defined variables section.
 * Otherwise they will simply default to MIN_SIZE_LEFT_PANE and MIN_SIZE_RIGHT_PANE
 */
@property (nonatomic, strong) NSNumber *secondaryPaneMinSize;
@property (nonatomic, strong) NSNumber *secondaryPaneMaxSize;
@property (nonatomic, assign) BOOL collapsed;

- (IBAction) collapseSecondaryPane;
@end
