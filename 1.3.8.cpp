//
//  main.cpp
//  Exercise 1.3.8
//
//  Created by Yuzhou Liao on 2022-01-18.
//

#include <iostream>

int main()
{
    int x=2;
    int y;
    int z;
    
    x*=3+2;
    printf("x=%d\n", x); //x=10
    x*=y=z=4;
    printf("x=%d\n", x); //x=40
    x=y==z;
    printf("x=%d\n", x); //x=1

return 0;
    
}
