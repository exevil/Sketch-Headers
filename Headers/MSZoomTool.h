//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSZoomTool : NSObject
{
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    BOOL _active;
    BOOL _activatedByKey;
    double _zoomValue;
}

@property(readonly, nonatomic) BOOL activatedByKey; // @synthesize activatedByKey=_activatedByKey;
@property(readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (double)zoomValueAfterZoomOutUnCapped;
- (double)zoomValueAfterZoomOut;
- (double)zoomValueAfterZoomInUnCapped;
- (double)zoomValueAfterZoomIn;
- (void)drawWithScrollOrigin:(struct CGPoint)arg1;
- (BOOL)shouldZoomIntoRect;
- (void)mouseUp:(id)arg1 inView:(id)arg2;
- (struct CGRect)zoomRect;
- (void)applyZoomCursor;
- (void)mouseDragged:(id)arg1 inView:(id)arg2;
- (void)mouseMoved;
- (void)mouseDown:(id)arg1 inView:(id)arg2;
- (void)flagsChanged;
- (struct CGPoint)zoomPointFromEvent:(id)arg1 inView:(id)arg2;
- (void)endZoomToolModeInView:(id)arg1;
- (void)beginZoomToolModeActivatedByKey:(BOOL)arg1;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;

@end

