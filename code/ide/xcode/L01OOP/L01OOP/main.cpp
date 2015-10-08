//
//  main.cpp
//  L01OOP
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>
#include "People.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    People *p =new People( );
    p->sayHello();
//    std::cout << "Hello, World!\n";
    delete p;
    return 0;
}
