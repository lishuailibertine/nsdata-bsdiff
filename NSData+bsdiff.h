//
//  NSData+bsdiff.h
//  FlightTime
//
//  Created by Jay Baird on 1/1/13.
//  Copyright (c) 2013 Jay Baird. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <bzlib.h>

@interface NSData (bsdiff)
- (instancetype)initWithData:(NSData *)data andPatch:(NSData *)patch;

+ (NSData *)dataWithData:(NSData *)data andPatch:(NSData *)patch;
@end
