//
//  ToDoItem.h
//  ToDoList
//
//  Created by DongDaqing on 14-7-7.
//  Copyright (c) 2014年 DongDaqing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
