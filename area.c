/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// area of rectangle and triangle//
#include <stdio.h>
void main()
{
    int l,b,h;
    printf("enter length and breaadth and height\n");
    scanf("%d %d %d",&h,&b,&l);
    printf("area of triangle is  %d*%d=%f\n",h,b,(float)b*h*0.5);
    printf("area of rectangle is %d*%d=%d ",l,b,l*b);
    
}

