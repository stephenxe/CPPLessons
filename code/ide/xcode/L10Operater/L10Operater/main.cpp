//
//  main.cpp
//  L10Operater
//
//  Created by xukaifang on 15/10/8.
//  Copyright (c) 2015年 kai. All rights reserved.
//

#include <iostream>

class Point {
private:
    int x,y;
public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    int getX(){
      return  this->x;
        
    }
    int getY(){
        return this->y;
    }
    
    void add(Point p){
        add(p.getX(), p.getY());
    }
    
    void add(int x, int y){
        this->x+=x;
        this->y+=y;
    }
    void operator +=(Point p){
        add(p);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n"
//    Point p(10,10);
//    
//    p+=Point(13, 13);
//    p.add(Point(12,12));
    
    Point *p = new Point(5,5);
    (*p)+=Point(2,2);
    
    std::cout<< p->getY()<<"\n";
    return 0;
}
