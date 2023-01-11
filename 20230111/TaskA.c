#include<stdio.h>

#define StoA 10
#define StoB 16
#define StoC 12
#define AtoB 18
#define AtoD 4
#define BtoE 1
#define BtoC 3
#define CtoE 5
#define DtoG 21
#define EtoG 9

int valuepaturn1 = 0;
int valuepaturn2 = 0;
int valuepaturn3 = 0;
int valuepaturn4 = 0;
int Goal = 0;

int main()
{
    valuepaturn1 += StoA;
    valuepaturn2 += StoB;
    valuepaturn3 += StoC;
    valuepaturn4 = valuepaturn3;
    int nullobj = valuepaturn1;

//---aルート開始---//
    if(valuepaturn1 <= valuepaturn2 && valuepaturn1 <= valuepaturn3)
    {
        valuepaturn1 += AtoD;
        printf("value1 = %d\n",valuepaturn1);
    }
    if((nullobj += AtoB) < valuepaturn2)
    {
        valuepaturn2 = valuepaturn1;
    }

    valuepaturn1 += DtoG;
    printf("value1 = %d\n",valuepaturn1);
    Goal = valuepaturn1;
    printf("Goal = %d\n",Goal);
//---aルート終了---//

//---cルート開始---//
    if(valuepaturn3 <= valuepaturn2)
    {
        valuepaturn3 += CtoE;
        printf("value3 = %d\n",valuepaturn3);
    }

    valuepaturn3 += EtoG;
    printf("value3 = %d\n",valuepaturn3);

    if(valuepaturn3 <= Goal)
    {
        Goal = valuepaturn3;
        printf("Goal = %d\n",Goal);
    }
//---cルート終了---//

//---bルート開始---//
    valuepaturn2 += BtoE;
    printf("value2 = %d\n",valuepaturn2);

    valuepaturn2 += EtoG;
    printf("value2 = %d\n",valuepaturn2);

    if(valuepaturn2 <= Goal)
    {
        Goal = valuepaturn2;
        printf("Goal = %d\n",Goal);
    }
//---bルート終了---//

//---アナザー道---//
valuepaturn4 += BtoC;
printf("value4 = %d\n",valuepaturn4);

if(valuepaturn4 <= valuepaturn2)
{
    valuepaturn2 = valuepaturn4;
    printf("value2 = %d\n",valuepaturn2);
}

valuepaturn2 += BtoE;
printf("value2 = %d\n",valuepaturn2);

valuepaturn2 += EtoG;
printf("value2 = %d\n",valuepaturn2);

if(valuepaturn2 <= Goal)
    {
        Goal = valuepaturn2;
        printf("Goal = %d\n",Goal);
    }
//---アナザー道終わり---//
printf("FinalGoal = %d\n",Goal);

return 0;
}