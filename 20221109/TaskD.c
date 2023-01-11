#include<stdio.h>
#include<stdlib.h>

#define size 11
int shuffle[size] = {0,1,2,3,4,5,6,7,8,9,10};
int wakeup(int);
void syahhuru(int huruhuru[])
{
    for(int i = 0; i < _countof(shuffle); ++i)
    {
        int j = rand() % size;
        int t = huruhuru[i];
        huruhuru[i] = huruhuru[j];
        huruhuru[j] = t;
    }
    for(int i = 0; i < _countof(shuffle); ++i)
    {
        printf("value is %d\n",shuffle[i]);
    }
}

int main()
{
    syahhuru(shuffle);
    int result = wakeup(size);
    printf("target index is %d\n",result);
    return 0;
}

int wakeup(int index)
{
    int target = 5;
    if(target == shuffle[index])
    {
        return index;
    }
    else
    {
        return wakeup(index - 1);
    }
}

// int factorial(int target){
//     if(target <= 1){
//         return target;
//     }
//     else{
//         return target * factorial(target - 1);
//     }
// }