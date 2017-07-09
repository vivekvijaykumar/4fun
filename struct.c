#include <stdio.h>
#include <stdlib.h>


struct node {
    char a;
    short b;
    int c;
    double d;
    float e;
};

struct node2 {
    char a;
    int c;
    double d;
    short b;
    float e;
};


struct node3 {
    char a;
    int b;
    char c;
    short d;
};

struct node  n1;
struct node2 n2;
struct node3 n3;
int main()
{
#if 0
    n1.a='A';
    n1.b=0xABCD;
    n1.c=0xBEEFBEEF;
    n1.e=0xCCCCCCCC;
    n1.d=0xBCDEFBCD;

    n2.a='A';
    n2.b=0xABCD;
    n2.c=0xBEEFBEEF;
    n2.d=0xFFFFFFFF;
    n2.e=0xCCCCCCCC;

 
#endif
    n3.a='A';
    n3.b=0xABCDEFAB;
    n3.c='B';
    n3.d=0xFEFE;
    while(1) {};
}
