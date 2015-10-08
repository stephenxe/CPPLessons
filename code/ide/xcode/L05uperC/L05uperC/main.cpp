//
//  main.cpp
//  L05uperC
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Man *m =new Man(20);
    
    printf("age:%d\n", m->getAge());
    return 0;
}
