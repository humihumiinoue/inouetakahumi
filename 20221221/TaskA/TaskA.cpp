#include <iostream>
#include<vector>

using namespace std;

/* 管理するデータの上限個数 */
#define MAX_NUM (5)

  
/* スタックされているデータ */
vector<int> stac(MAX_NUM);



/* pushする関数 */
void push(int input)
{
    stac.emplace_back(input);
}

/* popする関数 */
void pop() 
{
    stac.pop_back();
}

void printstac()
{
    for (auto& value : stac)
    {
        cout << value;
            
    }
    printf("\n");
}

int main(void) 
{
    stac.clear();
    stac.reserve(MAX_NUM);

    int pushnaum1 = 1;
    int pushnaum3 = 3;
    int pushnaum5 = 5;
    int pushnaum7 = 7;
    int pushnaum9 = 9;

    push(pushnaum1);
    printstac();

    push(pushnaum3);
    printstac();

    push(pushnaum5);
    printstac();

    push(pushnaum7);
    printstac();

    push(pushnaum9);
    printstac();

    pop();
    printstac();

    pop();
    printstac();

    return 0;
}