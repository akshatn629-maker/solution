#include <stdio.h>
int main(){
    int a = 5, b = 2;
    float c = a / b;
    float d = (float)a / b;
    int x = 5;
    int y = x++ + ++x;
    printf("c=%f d=%f x=%d y=%d", c, d, x, y);
    return 0;
    //ans is x=7,y=12,c=2.0, d=2.5//
}