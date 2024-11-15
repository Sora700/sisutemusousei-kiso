#include <stdio.h>

int main(void)
{
    int Taro,Hanako,Jiro;
    
   
    printf("太郎の年齢は？");
    scanf("%d",&Taro);
    
    printf("次郎の年齢は？");
    scanf("%d",&Jiro);
    
    printf("花子の年齢は？");
    scanf("%d",&Hanako);
    
    if(Taro==20)
    printf("太郎は20歳です\n");
    
    if(Hanako!=20)
    printf("花子は20歳ではありません\n");
    
    if(Hanako>=20)
    printf("花子は20歳以上です\n");
    
    if(Taro<20)
    printf("太郎は20歳未満です\n");
    
    if(Taro>Jiro)
    printf("太郎は次郎より年上です\n");
    
    if(Hanako>Taro)
    printf("花子は太郎より年上です\n");

    return 0;
}
