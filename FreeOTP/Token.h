//
// FreeOTP
//
// Authors: Nathaniel McCallum <npmccallum@redhat.com>
//
// Copyright (C) 2013  Nathaniel McCallum, Red Hat
// see file 'COPYING' for use and warranty information
//
// This program is free software you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>
#define TOKEN_ORDER @"tokenOrder"

@interface Token : NSObject
@property (readonly) NSString* type;
@property (readonly) NSString* issuer;
@property (readonly) NSString* label;
@property (readonly) NSUInteger digits;
- (id)initWithURL:(NSURL*)url;
- (id)initWithString:(NSString*)string;
- (void)increment;
- (NSString*)value;
- (float)progress;
- (NSString*)uid;
@end
