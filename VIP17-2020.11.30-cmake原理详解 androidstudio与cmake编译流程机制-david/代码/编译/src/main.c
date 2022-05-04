#include "../include/b.h"
#include <stdio.h>
int main(int argc, char** argv)
{
    int a = 49; 
    int b =2;
 
    printf("input a:%d\n",a);
    int c = add(a,b);
    printf("  result:%d\n",c);
    return 0;
}