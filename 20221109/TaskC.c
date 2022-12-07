#include<stdio.h>
#include<stdlib.h>

#define hundred 100

int data[hundred];

int main()
{
    int target = 50;
    int result = -1;
    int left = 0;
    int right = hundred - 1;
    int valueA,valueB,max,nim;

    for(int n = 0; n < hundred; n++)
    {
        data[n] = rand() % 100 + 1;
    }

    for(int i = 0; i < hundred; i++)
    {
        for(int j = hundred - 1; j >= i + 1; --j)
        {
            valueA = data[i];
            valueB = data[j];

            if(valueA > valueB)
            {
                max = valueA;
                nim = valueB;

                data[i] = nim;
                data[j] = max;
            }
        }
    
    }

    while(left < right)
    {
        int mid = (left + right) / 2;

        if(data[mid] == target)
        {
            result = mid;
            break;
        }
        else if(data[mid] < target)
        {
            left = mid + 1;
            break;
        }
        else
        {
            right = mid;
            break;
        }
    }
        if(result >= 0)
        {
            printf("index for target is %d",result);
        }
        else
        {
            printf("target is none");
        }
    
    return 0;
}