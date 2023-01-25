#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int maiin()
{
    int A[5]={5,4,6,8,10};
    int *p;
    int i;

    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=8;
    p[3]=5;
    p[4]=11;

    for ( i = 0; i < 5; i++)
    
        printf("%d", A[i]);

    printf("\n");
    for(i=0;i<5;i++)
        printf("%d",p[i]);

    
    


    return 0;
}