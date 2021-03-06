//
//  NSSktScanProperty.h
//  ScanApi
//
//  Created by Jimmy Yang on 11-3-7.
//  Copyright 2011 SocketMobile. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ISktScanVersion.h"
#import "ISktScanSymbology.h"

@protocol ISktScanProperty 

-(void)setID:(long)Propid;
-(long)getID;

-(void)setType:(enum ESktScanPropType)type;
-(enum ESktScanPropType)getType;

-(void)setByte:(unsigned char)uchar;
-(unsigned char)getByte;

-(void)setUlong:(unsigned long)ulong;
-(unsigned long)getUlong;

-(void)setString:(NSString*)string;
-(NSString*)getString;

-(void)setArray:(unsigned char*)values Length:(int)length;
-(const unsigned char*)getArrayValue;
-(int)getArraySize;

-(id<ISktScanVersion>)Version;
-(id<ISktScanSymbology>)Symbology;

-(NSObject*)getContext;
-(void)setContext:(NSObject*)context;
@end
