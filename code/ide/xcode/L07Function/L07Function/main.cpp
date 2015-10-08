//
//  main.cpp
//  L07Function
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    People *p = new Man(20);
    p->sayHello();
    p->eat();
    return 0;
}
