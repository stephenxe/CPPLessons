//
//  main.cpp
//  L11PesuFunction
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>

void hello(){
    
}

class Hello {
public:
    void operator ()(){
        printf("hello CPP\n");
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    Hello h;
    //伪函数用于函数回调
    h();
    return 0;
}
