#include<stdio.h>
#include<stdlib.h>

#define ransuu 100

int data[ransuu];

int main()
{
    int valueA,valueB,max,nim;

    //乱数が１００個入った配列
    for(int i = 0; i < ransuu; i++)
    {
        data[i] = rand();
    }
    //ループ１
    for(int n = 0; n < ransuu; n++)
    {   //ループ２
        for(int j = ransuu - 1; j >= n + 1; --j)
        {
            valueA = data[n];
            valueB = data[j];

            if(valueA > valueB)
            {
                max = valueA;
                nim = valueB;

                data[n] = nim;
                data[j] = max;
            }
        }
    }

    for(int n = 0; n < ransuu; n++)
    {
        printf("%d \n",data[n]);
    }
}