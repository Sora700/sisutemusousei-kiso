#include <stdio.h>

int main(void)
{
    int diff;
    char small;
    char large;
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c",&small);
    diff='A'-'a';
    large=small+diff;
    
    printf("小文字は%c 大文字は%c\n",small,large);

    return 0;
}