//
//  InspectorViewController.h
//  TrenchBroom
//
//  Created by Kristian Duske on 29.07.11.
//  Copyright 2011 TU Berlin. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PrefabViewTarget.h"
#import "TextureViewTarget.h"
#import "EntityDefinitionViewTarget.h"

@class MapWindowController;
@class SingleTextureView;
@class TextureView;
@class PrefabView;
@class EntityPropertyTableDataSource;
@class EntityView;
@class Texture;
@protocol Prefab;

@interface InspectorViewController : NSViewController <PrefabViewTarget, TextureViewTarget, EntityDefinitionViewTarget> {
    IBOutlet NSTextField* xOffsetField;
    IBOutlet NSTextField* yOffsetField;
    IBOutlet NSTextField* xScaleField;
    IBOutlet NSTextField* yScaleField;
    IBOutlet NSTextField* rotationField;
    IBOutlet NSTextField* textureNameField;
    IBOutlet NSSearchField* textureNameFilterField;
    IBOutlet NSSegmentedControl* textureUsageFilterSC;
    IBOutlet NSSegmentedControl* textureSortCriterionSC;
    IBOutlet SingleTextureView* singleTextureView;
    IBOutlet TextureView* textureView;
    IBOutlet NSScrollView* textureScrollView;
    IBOutlet NSTableView* wadTableView;
    IBOutlet NSArrayController* wadArrayController;
    
    IBOutlet NSSlider* prefabsPerRowSlider;
    IBOutlet PrefabView* prefabView;
    
    IBOutlet NSTableView* entityPropertyTableView;
    IBOutlet NSButton* removeEntityPropertyButton;
    IBOutlet NSButton* addEntityPropertyButton;
    EntityPropertyTableDataSource* entityPropertyTableDataSource;
    IBOutlet EntityView* entityView;
    IBOutlet NSSegmentedControl* entitySortCriterionSC;
    IBOutlet NSSegmentedControl* entityUsageFilterSC;
    IBOutlet NSSearchField* entityNameFilterField;
    
    MapWindowController* mapWindowController;
}

- (void)setMapWindowController:(MapWindowController *)theMapWindowController;
- (MapWindowController *)mapWindowController;

- (IBAction)xOffsetTextChanged:(id)sender;
- (IBAction)yOffsetTextChanged:(id)sender;
- (IBAction)xScaleTextChanged:(id)sender;
- (IBAction)yScaleTextChanged:(id)sender;
- (IBAction)rotationTextChanged:(id)sender;
- (IBAction)textureNameFilterTextChanged:(id)sender;
- (IBAction)textureUsageFilterChanged:(id)sender;
- (IBAction)textureSortCriterionChanged:(id)sender;
- (IBAction)prefabsPerRowChanged:(id)sender;
- (IBAction)addTextureWad:(id)sender;

- (IBAction)removeEntityProperty:(id)sender;
- (IBAction)addEntityProperty:(id)sender;
- (IBAction)entityNameFilterTextChanged:(id)sender;
- (IBAction)entityUsageFilterChanged:(id)sender;
- (IBAction)entitySortCriterionChanged:(id)sender;
@end