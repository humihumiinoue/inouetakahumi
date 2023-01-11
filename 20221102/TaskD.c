#include<stdio.h>

int main()
{
    for(int i = 0; i < 100; i++)
    {
        if(i % 15 == 0)
        {
            cout<< "fizzbuzz" << i << "\n";
        }
        else if(i % 3 == 0)
        {
            cout<< "fizz" << i << "\n";
        }
        else if(i % 5 == 0)
        {
           cout<< "buzz" << i << "\n";
        }
    }
    return 0;
}