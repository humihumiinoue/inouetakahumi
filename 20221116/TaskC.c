#include <stdio.h>
#include<string.h>

/* 管理するデータの上限個数 */
#define MAX_NUM (5)

/* キュー構造体 */
typedef struct QUEUE {
    /* データの最後尾 */
    int tail;
    /* キューされているデータ */
    int data[MAX_NUM];
} QUEUE_T;

void initQueue(QUEUE_T*);
void printQueue(QUEUE_T*);
void enqueue(QUEUE_T*, int);
int dequeue(QUEUE_T*);

/* キューを初期化する関数 */
void initQueue(QUEUE_T *queue){

    /* キューを空に設定 */
    queue->tail = -1;
}

/* ENQUEUEする関数 */
void enqueue(QUEUE_T *queue, int input){

    /* キューが満杯なら何もせず関数終了 */
    if(queue->tail == MAX_NUM - 1){
        printf("キューが満杯でENQUEUEできません\n");
        return;
    }

    /* データをデータの最後尾の１つ後ろに格納 */
    queue->data[queue->tail + 1] = input;

    /* データの最後尾を１つ後ろに移動 */
    queue->tail = queue->tail + 1;
}

/* DEQUEUEする関数 */
int dequeue(QUEUE_T *queue){
    int ret = 0;
    int i;

    /* キューが空なら何もせずに関数終了 */
    if(queue->tail == -1){
        printf("キューが空です\n");
        return -1;
    }

    /* データの先頭からデータを取得 */
    ret = queue->data[0];

    /* データの先頭より後ろのデータを１つずつ前にずらす */
    for (i = 0; i < queue->tail; i++) {
        queue->data[i] = queue->data[i + 1];
    }

    /* データの最後尾も１つ前にずらす */
    queue->tail = queue->tail - 1;

    /* 取得したデータを返却 */
    return ret;
}

/* キューの中身を表示 */
void printQueue(QUEUE_T *queue){
    int i = 0;
    
    printf("左側がキューの出口側を表しています\n");
    for(i = 0; i <= queue->tail; i++){
        printf("%d,", queue->data[i]);
    }
    printf("\n");
}

int main(void){

    QUEUE_T queue;
    int output;
    int pushnaum1 = 1;
    int pushnaum3 = 3;
    int pushnaum5 = 5;
    int pushnaum7 = 7;
    int pushnaum9 = 9;
    int pushnaum2 = 2;
    int pushnaum4 = 4;

    /* キューを初期化 */
    initQueue(&queue);

        //えんキュー
        enqueue(&queue, pushnaum1);
        for(int i = 0; i <= queue.tail; i++)
        {
            if(queue.data[i] != NULL)
                printf("%d\n", queue.data[i]);
        }
        printf("\n");

        enqueue(&queue, pushnaum3);
        for(int i = 0; i <= queue.tail; i++)
        {
            if(queue.data[i] != NULL)
                printf("%d\n", queue.data[i]);
        }
        printf("\n");

        enqueue(&queue, pushnaum5);
        for(int i = 0; i <= queue.tail; i++)
        {
            if(queue.data[i] != NULL)
                printf("%d\n", queue.data[i]);
        }
        printf("\n");

        enqueue(&queue, pushnaum7);
        for(int i = 0; i <= queue.tail; i++)
        {
            if(queue.data[i] != NULL)
                printf("%d\n", queue.data[i]);
        }
        printf("\n");

        enqueue(&queue, pushnaum9);
        for(int i = 0; i <= queue.tail; i++)
        {
            if(queue.data[i] != NULL)
                printf("%d\n", queue.data[i]);
        }
        printf("\n");

        //でキュー
        output = dequeue(&queue);
        for(int i = 0; i <= queue.tail; i++)
        {
            if(queue.data[i] != NULL)
                printf("%d\n", queue.data[i]);
        }
        printf("\n");

        output = dequeue(&queue);
        for(int i = 0; i <= queue.tail; i++)
        {
            if(queue.data[i] != NULL)
                printf("%d\n", queue.data[i]);
        }
        printf("\n");

        //円キュー
        enqueue(&queue, pushnaum2);
        for(int i = 0; i <= queue.tail; i++)
        {
        if(queue.data[i] != NULL)
        printf("%d\n", queue.data[i]);
        }
        printf("\n");

        enqueue(&queue, pushnaum4);
        for(int i = 0; i <= queue.tail; i++)
        {
        if(queue.data[i] != NULL)
        printf("%d\n", queue.data[i]);
        }
    
        return 0;
}