#include <stdio.h>

int main()
{
    int k;
    int s;
    printf("数字を2つ入力してください");
    scanf("%d",&k);
    scanf("%d",&s);
    
    if(k==s)
    {
        printf("同じ数字");
    }
    else if(k>s)
    {
        printf("%dのほうが大きい数字",k);
    }
    else
    {
        printf("%dのほうが大きい数字",s);
    }

    return 0;
}