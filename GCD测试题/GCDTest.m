//
//  GCDTest.m
//  LearnTest
//
//  Created by GenZhang on 2023/11/30.
//

#import "GCDTest.h"

@interface GCDTest ()

@property (atomic, strong) NSArray *array;
@property (nonatomic, strong) NSNumber *number;

@end

@implementation GCDTest

+ (void)test1
{
    NSLog(@"Test1");
    dispatch_queue_t queue = dispatch_queue_create("zxy", DISPATCH_QUEUE_CONCURRENT);
    NSLog(@"1");
    dispatch_async(queue, ^{
        NSLog(@"2");
        dispatch_async(queue, ^{
            NSLog(@"3");
        });
        NSLog(@"4");
    });
    NSLog(@"5");
}

+ (void)test2
{
    NSLog(@"Test2");
    dispatch_queue_t queue = dispatch_queue_create("zxy", DISPATCH_QUEUE_CONCURRENT);
    NSLog(@"1");
    dispatch_async(queue, ^{
        NSLog(@"2");
        dispatch_sync(queue, ^{
            NSLog(@"3");
        });
        NSLog(@"4");
    });
    NSLog(@"5");
}

+ (void)test3
{
    NSLog(@"Test3");
    dispatch_queue_t queue = dispatch_queue_create("zxy", DISPATCH_QUEUE_SERIAL);
    NSLog(@"1");
    dispatch_async(queue, ^{
        NSLog(@"2");
        dispatch_async(queue, ^{
            NSLog(@"3");
        });
        NSLog(@"4");
    });
    NSLog(@"5");
}

+ (void)test4
{
    NSLog(@"Test4");
    dispatch_queue_t queue = dispatch_queue_create("zxy", DISPATCH_QUEUE_SERIAL);
    NSLog(@"1");
    dispatch_async(queue, ^{
        NSLog(@"2");
        dispatch_sync(queue, ^{
            NSLog(@"3");
        });
        NSLog(@"4");
    });
    NSLog(@"5");
}

+ (void)test5
{
    NSLog(@"Test5");
    NSLog(@"执行任务1--%@", NSThread.currentThread);
//    dispatch_queue_t queue = dispatch_get_main_queue();
    dispatch_queue_t queue = dispatch_get_global_queue(0, 0);
    dispatch_sync(queue, ^{
        // 用dispatch_get_global_queue时，代码在任务分配的线程（即主线程）执行
        NSLog(@"执行任务2--%@",NSThread.currentThread);
    });
    NSLog(@"执行任务3--%@",NSThread.currentThread);
}

+ (void)test6
{
    NSLog(@"Test6");
    NSLog(@"执行任务1--%@", NSThread.currentThread);
    dispatch_queue_t queue = dispatch_get_main_queue();
    dispatch_async(queue, ^{
        NSLog(@"执行任务2--%@",NSThread.currentThread);
    });
    NSLog(@"执行任务3--%@",NSThread.currentThread);
}

+ (void)test7
{
    NSLog(@"Test7");
    dispatch_queue_t queue = dispatch_queue_create("zxy", DISPATCH_QUEUE_CONCURRENT);
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 1");
    });
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 2");
    });
    dispatch_sync(queue, ^{
        NSLog(@"哈哈哈 3");
    });
////////////////////
    NSLog(@"哈哈哈 0");
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 7");
    });
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 8");
    });
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 9");
    });
}

+ (void)test8
{
    NSLog(@"Test8");
    dispatch_queue_t queue = dispatch_queue_create("zxy", DISPATCH_QUEUE_SERIAL);
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 1");
    });
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 2");
    });
    dispatch_sync(queue, ^{
        NSLog(@"哈哈哈 3");
    });
////////////////////
    NSLog(@"哈哈哈 0");
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 7");
    });
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 8");
    });
    dispatch_async(queue, ^{
        NSLog(@"哈哈哈 9");
    });
}

+ (void)test9
{
    NSLog(@"Test9");
    __block NSInteger a = 0;
    while (a < 100) {
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            a++;
            NSLog(@"%ld======%@", a, [NSThread currentThread]);
        });
    }
    NSLog(@"卧槽无情%ld", a);
}

+ (void)test10
{
    NSLog(@"Test10");
    dispatch_queue_t queue = dispatch_get_global_queue(0, 0);
    dispatch_async(queue, ^{
        NSLog(@"1");
        [self performSelector:@selector(test0) withObject:nil afterDelay:0];
        // runloop run起来才能输出2，且需要在定时器添加后run
        NSLog(@"3");
        
        [[NSRunLoop currentRunLoop] run];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, 3), queue, ^{
            CFRunLoopStop(CFRunLoopGetCurrent());
            [self performSelector:@selector(test0) withObject:nil afterDelay:0];
            
        });
        
    });
}

// MARK: 注意以下这个
+ (void)test11
{
    NSLog(@"Test11");
    NSLog(@"1");
    [self performSelector:@selector(test0) withObject:nil afterDelay:0];
    NSLog(@"3");
}

+ (void)test12
{
    NSLog(@"Test12");
    dispatch_queue_t queue = dispatch_get_global_queue(0, 0);
    dispatch_async(queue, ^{
        NSLog(@"1");
        [self performSelector:@selector(test0) withObject:nil];
        NSLog(@"3");
    });
}

+ (void)test13
{
    NSLog(@"Test13");
    NSThread *thread = [[NSThread alloc]initWithBlock:^{
        NSLog(@"1");
        // 除非保活，否则线程执行完立刻销毁
//        [[NSRunLoop currentRunLoop]addPort:[[NSPort alloc]init] forMode:NSDefaultRunLoopMode];
//        [[NSRunLoop currentRunLoop]runMode:NSDefaultRunLoopMode beforeDate:[NSDate distantFuture]];
    }];
    [thread start];
    [self performSelector:@selector(test0) onThread:thread withObject:nil waitUntilDone:YES];
}

+ (void)test14
{
    dispatch_queue_t concurrentQueue = dispatch_queue_create("concurrentRunMaxThreadCountWithGCD", DISPATCH_QUEUE_CONCURRENT);
    dispatch_queue_t serialQueue = dispatch_queue_create("serialRunMaxThreadCountWithGCD", DISPATCH_QUEUE_SERIAL);
    // 创建一个semaphore,并设置最大信号量，最大信号量表示最大线程数量
    dispatch_semaphore_t semaphore = dispatch_semaphore_create(2);
    // 使用循环往串行队列 serialQueue 增加 10 个任务
    for (int i = 0; i < 10 ; i++) {
        dispatch_async(serialQueue, ^{
            // 只有当信号量大于 0 的时候，线程将信号量减 1，程序向下执行
            // 否则线程会阻塞并且一直等待，直到信号量大于 0
            dispatch_semaphore_wait(semaphore, DISPATCH_TIME_FOREVER);
            dispatch_async(concurrentQueue, ^{
                NSLog(@"%@ 执行任务一次  i = %d",[NSThread currentThread],i);
                // 当线程任务执行完成之后，发送一个信号，增加信号量。
                dispatch_semaphore_signal(semaphore);
            });
        });
    }
    NSLog(@"%@ 执行任务结束",[NSThread currentThread]);
}

+ (void)test15
{
    dispatch_queue_t concurrentQueue = dispatch_queue_create("runGroupWithGCD", DISPATCH_QUEUE_CONCURRENT);
    dispatch_group_t group =  dispatch_group_create();
    for (int i = 0; i < 10 ; i++) {
        dispatch_group_async(group, concurrentQueue, ^{
            NSLog(@"%@ 执行任务一次",[NSThread currentThread]);
        });
    }

    dispatch_group_notify(group, dispatch_get_main_queue(), ^{
        NSLog(@"%@ 执行任务结束",[NSThread currentThread]);
    });
}

+ (void)test16
{
    dispatch_queue_t concurrentQueue = dispatch_queue_create("runGroupWithGCD", DISPATCH_QUEUE_CONCURRENT);
    dispatch_group_t group =  dispatch_group_create();
    dispatch_semaphore_t semaphore = dispatch_semaphore_create(2);

    for (int i = 0; i < 10 ; i++) {
        dispatch_semaphore_wait(semaphore, DISPATCH_TIME_FOREVER);
        dispatch_group_async(group, concurrentQueue, ^{
            NSLog(@"%@ 执行任务一次",[NSThread currentThread]);
            dispatch_semaphore_signal(semaphore);
        });
    }
    
    dispatch_group_notify(group, dispatch_get_main_queue(), ^{
        NSLog(@"%@ 执行任务结束",[NSThread currentThread]);
    });
}

+ (void)test17
{
    dispatch_queue_t queue = dispatch_queue_create("com.genzhang.QUEUE", DISPATCH_QUEUE_SERIAL);
    // 子线程
    dispatch_async(queue, ^{
        NSLog(@"%@ A", [NSThread currentThread]);
    });
    // 主线程
    dispatch_sync(queue, ^{
        NSLog(@"%@ B", [NSThread currentThread]);
    });
    dispatch_async(queue, ^{
        NSLog(@"%@ D", [NSThread currentThread]);
    });
    // 主线程
    NSLog(@"C");
}

+ (void)test18 {
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"A，%@", [NSThread currentThread]);
        dispatch_sync(dispatch_get_main_queue(), ^{
            NSLog(@"B，%@", [NSThread currentThread]);
        });
        NSLog(@"C，%@", [NSThread currentThread]);
    });
    NSLog(@"D，%@", [NSThread currentThread]);
    while (1) {

    }
    NSLog(@"E，%@", [NSThread currentThread]);
}

- (void)test19
{
    for (int i = 0; i < 1000; i ++) {
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            self.array = @[[NSString stringWithFormat:@"%d", i]];
            NSLog(@"%d, %ld", i, self.array.count);
        });
    }
}

- (void)test20
{
    for (int i = 0; i < 1000; i ++) {
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            self.number = @(i);
            NSLog(@"%d, %d", i, [self.number intValue]);
        });
    }
}

+ (void)test21
{
    dispatch_queue_t queue = dispatch_get_main_queue();
    NSLog(@"1");
    dispatch_async(queue, ^{
        NSLog(@"2");
        dispatch_sync(queue, ^{
            NSLog(@"3");
        });
        NSLog(@"4");
    });
    NSLog(@"5");
}

+ (void)test22
{
    NSLog(@"1");
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"2, %@", [NSThread currentThread]);
        
        // run起来之后先阻塞线程，执行timer
        [self performSelector:@selector(test0) withObject:nil afterDelay:5];
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            NSLog(@"5");
        });
        // run 的位置决定了当前线程被timer阻塞的时机
        [[NSRunLoop currentRunLoop] run];
        // 再往下执行
        NSLog(@"3");
        
        
    });
    
    NSLog(@"4");
}

+ (void)test0
{
    NSLog(@"aaa, %@", [NSThread currentThread]);
}

+ (void)test23
{
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"1");
        // waitUntilDone等当前任务完成后再往下执行,14-23,为NO时是134-2
        [self performSelectorOnMainThread:@selector(ttest) withObject:nil waitUntilDone:NO];
        // 不会阻塞当前线程,134-2
//        [self performSelectorInBackground:@selector(ttest) withObject:nil];
        // 会阻塞当前线程,14-23
//        [self performSelector:@selector(ttest) withObject:nil];
        NSLog(@"3");
    });
}

+ (void)ttest
{
    NSLog(@"4,%@",[NSThread currentThread]);
    sleep(3);
    NSLog(@"2");
}

+ (void)test24
{
    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"1");
    });

    NSLog(@"2");

    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND,0);

    dispatch_sync(queue, ^{
        NSLog(@"3");
    });

    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"4");
    });

    dispatch_async(queue, ^{
        NSLog(@"5");
    });

    NSLog(@"6");

    
    [self performSelector:@selector(test0) withObject:nil afterDelay:3];
    
    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"9");
    });

    NSLog(@"8");
}

@end
