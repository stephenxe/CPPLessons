//
//  main.cpp
//  L01OOP
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, char * argv[]) {
    // insert code here...
    Man *p =new Man( );
    p->sayHello();
//    std::cout << "Hello, World!\n";
    delete p;
    return 0;
}
