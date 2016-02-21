//
//  DataSource.h
//  Blocstagram
//
//  Created by Luke Everett on 2/16/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (strong, nonatomic, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(Media *)item;

@end
