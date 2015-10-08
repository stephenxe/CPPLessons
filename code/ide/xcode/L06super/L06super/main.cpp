//
//  main.cpp
//  L06super
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    Man *m =new Man(21);
    m->sayHello();
    m->People::sayHello();
    return 0;
}
