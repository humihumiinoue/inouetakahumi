#include <stdio.h>


/* 管理するデータの上限個数 */
#define MAX_NUM (5)

/* スタック構造体 */
typedef struct stack {
    /* データの最後尾 */
    int tail;
    /* スタックされているデータ */
    int data[MAX_NUM];
} STACK_T;

void initStack(STACK_T*);       //プロトタイプ宣言
void printStack(STACK_T*);
void push(STACK_T*, int);
int pop(STACK_T*);

/* stackを初期化する関数 */
void initStack(STACK_T *stack){

    /* stackを空に設定 */
    stack->tail = -1;
}

/* pushする関数 */
void push(STACK_T *stack, int input){

    /*stackが満杯なら何もせず関数終了 */
    if(stack->tail == MAX_NUM - 1){
        printf("キューが満杯でPUSHできません\n");
        return;
    }

    /* データをデータの最後尾の１つ後ろに格納 */
    stack->data[stack->tail + 1] = input;

    /* データの最後尾を１つ後ろに移動 */
    stack->tail = stack->tail + 1;
}

/* popする関数 */
int pop(STACK_T *stack){
    int ret = 0;

    /* stackが空なら何もせずに関数終了 */
    if(stack->tail == -1){
        printf("stackが空です\n");
        return -1;
    }

    /* データの先頭からデータを取得 */
    ret = stack->data[stack->tail];

    /* データの末尾を１つずつ前にずらす */
    stack->tail = stack->tail -1;

    /* 取得したデータを返却 */
    return ret;
}

/* スタックの中身を表示 */
void printStack(STACK_T *stack)
{
    int i = 0;
    
    printf("左側がstackの上側を表しています\n");
    for(i = 0; i <= stack -> tail; i++){
        printf("%d", stack->data[stack -> tail - i]);
    }
    printf("\n");
}

int main(void){

    STACK_T stack;
    int output;
    int pushnaum1 = 1;
    int pushnaum3 = 3;
    int pushnaum5 = 5;
    int pushnaum7 = 7;
    int pushnaum9 = 9;

    /* スタックを初期化 */
    initStack(&stack);

        push(&stack, pushnaum1);
        for(int i = 0; i <= stack.tail; i++)
        {
            if(stack.data[i] != NULL)
                printf("%d\n", stack.data[i]);
        }
        printf("\n");

        push(&stack, pushnaum3);
        for(int i = 0; i <= stack.tail; i++)
        {
            if(stack.data[i] != NULL)
                printf("%d\n", stack.data[i]);
        }
        printf("\n");

        push(&stack, pushnaum5);
        for(int i = 0; i <= stack.tail; i++)
        {
            if(stack.data[i] != NULL)
                printf("%d\n", stack.data[i]);
        }
        printf("\n");

        push(&stack, pushnaum7);
        for(int i = 0; i <= stack.tail; i++)
        {
            if(stack.data[i] != NULL)
                printf("%d\n", stack.data[i]);
        }
        printf("\n");

        push(&stack, pushnaum9);
        for(int i = 0; i <= stack.tail; i++)
        {
            if(stack.data[i] != NULL)
                printf("%d\n", stack.data[i]);
        }
        printf("\n");

        output = pop(&stack);
        for(int i = 0; i <= stack.tail; i++)
        {
            if(stack.data[i] != NULL)
                printf("%d\n", stack.data[i]);
        }
        printf("\n");

        output = pop(&stack);
        for(int i = 0; i <= stack.tail; i++)
        {
            if(stack.data[i] != NULL)
                printf("%d\n", stack.data[i]);
        }
        
        return 0;
}