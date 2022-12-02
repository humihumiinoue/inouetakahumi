#include<stdio.h>
#include<stdlib.h>

#define hundred 100

int data[hundred];

int main()
{
    int target = 50;
    int result = -1;
    int left = 0;
    right = hundred - 1;

    for(int n = 0; n < hundred; n++)
    {
        data[n] = rand() % 100 + 1;
    }

    for(int i = 0; i < hundred; i++)
    {
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
}