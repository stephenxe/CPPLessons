//
//  People.cpp
//  L01OOP
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include "People.h"

People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}
People::People(){
    this->age = 10;
    this->sex = 1;
}

int People::getAge(){
    return this->age;
}
int People::getSex(){
    return this->sex;
}
void People::sayHello( ){
        printf("People Hello CPP\n");
    }
