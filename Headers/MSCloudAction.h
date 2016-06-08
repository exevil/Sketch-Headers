//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPopoverAction.h"

#import "MSPublisherViewControllerDelegate.h"

@class MSPublisherViewController, NSImage, NSString;

@interface MSCloudAction : MSPopoverAction <MSPublisherViewControllerDelegate>
{
    MSPublisherViewController *_viewController;
    NSImage *_onImage;
    NSImage *_offImage;
}

@property(retain, nonatomic) NSImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) NSImage *onImage; // @synthesize onImage=_onImage;
@property(retain, nonatomic) MSPublisherViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (BOOL)showInToolbar;
- (id)label;
- (id)image;
- (void)updateToolbarItemButton;
- (void)publishViewController:(id)arg1 localServerIsPublished:(BOOL)arg2;
- (id)progressImagesWithSuffix:(id)arg1;
- (void)ensureProgressImagesLoaded;
- (void)publishViewController:(id)arg1 didProgressUpdateTo:(double)arg2;
- (id)popoverViewController;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

