//
//  Man.h
//  L03Classes
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#ifndef __L03Classes__Man__
#define __L03Classes__Man__

#include <stdio.h>
#include "People.h"
class Man:public People{
public:
    Man(int age);
    virtual void sayHello();
    virtual void eat(){
        printf("Man eat\n");
    }
};
#endif /* defined(__L03Classes__Man__) */
