//
//  main.cpp
//  L04CMethod
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>

class Object {
public:
    Object(){
        printf("Create Object\n");
    };
    ~Object(){
        printf("Delete Object\n");
    }
};

void runObject(){
    Object obj;
    printf("runObject end\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    Object *obj = new Object();
//    delete obj;
    runObject();
    printf("end\n");
    return 0;
}
