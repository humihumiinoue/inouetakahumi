#include <iostream>
#include<vector>

using namespace std;

/* �Ǘ�����f�[�^�̏���� */
#define MAX_NUM (5)

  
/* �X�^�b�N����Ă���f�[�^ */
vector<int> stac(MAX_NUM);



/* push����֐� */
void push(int input)
{
    stac.emplace_back(input);
}

/* pop����֐� */
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