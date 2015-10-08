//
//  main.cpp
//  L09Overload
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>

class Hello{
public:
    void sayHello(){
        printf("Say hello\n");
    }
    
    void sayHello(char *name){
        printf("Hello %s\n",name);
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    Hello *h = new Hello();
    
    std::string name = "xiaokai";
    h->sayHello((char *)name.c_str());
    return 0;
}
