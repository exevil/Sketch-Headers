//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MSRenderMonitor : NSObject
{
    BOOL _shouldRemoveWhenDone;
    BOOL _shouldClearAllCaches;
    BOOL _shouldForceFullRedraw;
    NSMutableArray *_hooks;
    CDStruct_aac06691 _timestamps;
}

@property(retain, nonatomic) NSMutableArray *hooks; // @synthesize hooks=_hooks;
@property(nonatomic) CDStruct_aac06691 timestamps; // @synthesize timestamps=_timestamps;
@property(nonatomic) BOOL shouldForceFullRedraw; // @synthesize shouldForceFullRedraw=_shouldForceFullRedraw;
@property(nonatomic) BOOL shouldClearAllCaches; // @synthesize shouldClearAllCaches=_shouldClearAllCaches;
@property(nonatomic) BOOL shouldRemoveWhenDone; // @synthesize shouldRemoveWhenDone=_shouldRemoveWhenDone;
- (void).cxx_destruct;
- (double)timeIntervalBetweenStartEvent:(unsigned long long)arg1 endEvent:(unsigned long long)arg2;
- (unsigned long long)timestampForEvent:(unsigned long long)arg1;
- (void)registerHook:(CDUnknownBlockType)arg1 forEvent:(unsigned long long)arg2;
- (void)recordEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)recordEvent:(unsigned long long)arg1;
- (id)init;

@end

