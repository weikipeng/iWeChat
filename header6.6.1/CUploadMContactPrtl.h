//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSArray, NSString;

@interface CUploadMContactPrtl : PrtlBase
{
    NSArray *m_arrMobileList;
    NSString *m_nsUsrName;
    NSArray *m_arrEmailList;
}

@property(retain, nonatomic) NSArray *m_arrEmailList; // @synthesize m_arrEmailList;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(retain, nonatomic) NSArray *m_arrMobileList; // @synthesize m_arrMobileList;
- (void).cxx_destruct;
- (_Bool)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (void)dealloc;
- (id)init;

@end

