//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableStyleBorder.h"

@interface MSImmutableStyleBorder : _MSImmutableStyleBorder
{
}

+ (id)defaultName;
- (void)updateColorCounter:(id)arg1;
- (void)drawGradientBorder:(id)arg1 advancedOptions:(id)arg2 originalPath:(id)arg3 isArtistic:(BOOL)arg4 frame:(struct CGRect)arg5 context:(id)arg6;
- (void)drawBorder:(id)arg1 advancedOptions:(id)arg2 context:(id)arg3;
- (BOOL)needsOutlinePath:(id)arg1;
- (BOOL)requiresMask:(id)arg1;
- (id)bezierPathWithExporter:(id)arg1;
- (void)addSVGAttributes:(id)arg1 exporter:(id)arg2;
- (void)addOuterMaskToAttributes:(id)arg1 withExporter:(id)arg2;
- (void)addInnerMaskToAttributes:(id)arg1 withExporter:(id)arg2;
- (id)addMaskElementToAttributes:(id)arg1 withExporter:(id)arg2;

@end

