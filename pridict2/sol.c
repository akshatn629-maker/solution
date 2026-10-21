#include<stdio.h>
int main (){
    int a=10,b=3;
    printf("%d\n%d\n%f\n%d\n", a/b,a%b,(float)a/b, a/b*b+a%b);
    return 0;
//output 
//a/b= 3

//a%b= 1

//(float)a/b = 3.3333333*

//a/b*b+a%b = 10 
}