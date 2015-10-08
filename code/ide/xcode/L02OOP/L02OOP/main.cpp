//
//  main.cpp
//  L02OOP
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>
#include "People.h"
using jikexueyuan;

int main(int argc, const char * argv[]) {
    // insert code here...
    People *p = new People();
    p->sayHello();
    delete p;
   // std::cout << "Hello, World!\n";
    return 0;
}
