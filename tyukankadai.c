#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_passward_strength(const char* passward){
    int length = strlen(passward);
    int has_upper = 0;
    int has_lower = 0;
    
    for (int i = 0; i < length; i++){
        if (isupper(passward[i])) {
            has_upper = 1;
        }else if (islower(passward[i])){
            has_lower = 1;
        }
    }
    if (length < 8){
    printf("パスワードは8文字以上で設定してください。\n");
    }
    
    if(!has_upper){
    printf("パスワードは大文字を含めてください。\n");
    }
    
    if(!has_lower){
    printf("小文字を含めてください。\n");
    }
    
    if(length >= 8 && has_upper && has_lower){
        printf("パスワードは強力です!\n");
    }
    
}

int main(){
    char passward[100];
    
    printf("パスワードを入力してください:");
    scanf("%99s",passward);
    
    check_passward_strength(passward);
    
    return 0;
}
