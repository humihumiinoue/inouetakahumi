#include<stdio.h>
#include<stdlib.h>

#define size 11
int shuffle[size] = {0,1,2,3,4,5,6,7,8,9,10};

void syahhuru(int huruhuru[],int n)
{
    for(int i = 0; i < n; ++i)
    {
        int j = rand() % n;
        int t = huruhuru[i];
        huruhuru[i] = huruhuru[j];
        huruhuru[j] = t;
    }
}

int main()
{
    syahhuru(shuffle,11);

    for(int i = 0; i < size; ++i)
    {
        printf("%d \n",shuffle[i]);
    }
    
    targetfive();

    return 0;
}

void targetfive()
{
    int target = 5;
    int result = NULL;
    int value;

    for(int i = 0; i <= size; ++i)
    {
        value = shuffle[i];

        if(value == target)
        {
            result = i;
            printf("%d",result);
            break;
        }
    }
}