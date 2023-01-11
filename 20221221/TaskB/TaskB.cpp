#include <iostream>
#include<vector>

using namespace std;

/* �Ǘ�����f�[�^�̏���� */
#define MAX_NUM (5)


/* �X�^�b�N����Ă���f�[�^ */
vector<int> queue(MAX_NUM);



/* push����֐� */
void push(int input)
{
    queue.emplace_back(input);
}

/* pop����֐� */
void pop()
{
    queue.erase(queue.begin());
}

void printqueue()
{
    for (auto& value : queue)
    {
        cout << value;

    }
    printf("\n");
}

int main(void)
{
    queue.clear();
    queue.reserve(MAX_NUM);

    int pushnaum1 = 1;
    int pushnaum3 = 3;
    int pushnaum5 = 5;
    int pushnaum7 = 7;
    int pushnaum9 = 9;

    push(pushnaum1);
    printqueue();

    push(pushnaum3);
    printqueue();

    push(pushnaum5);
    printqueue();

    push(pushnaum7);
    printqueue();

    push(pushnaum9);
    printqueue();

    pop();
    printqueue();

    pop();
    printqueue();

    return 0;
}