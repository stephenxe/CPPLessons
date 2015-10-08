//
//  main.cpp
//  L12FunctionPoint
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>

class Object {
public:
    void (Object::*sayHi)();
    
};

class Hello:public Object{
public:
    Hello(){
        sayHi = (void(Object::*)) (& HelloSayHi());
        (this->*sayHi)();
    }
    void HelloSayHi(){
        printf("Hello CPP\n");
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
