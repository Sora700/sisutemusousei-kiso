#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number1 = (rand()%20)+1;
    int range = 20 - number1;
    int number2 = (rand()%range)+1;
    int number3 = 20 - number1 - number2;
    printf("intelligenceは%d",number1);
    printf("、staminaは%d",number2);
    printf("、charismaは%d",number3);

    return 0;
}