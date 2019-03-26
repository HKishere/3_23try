#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int password(){
    int i;
    char key1[12];
    char key[]="kishereisgod";
    for(i=0;i<3;i++){
        printf("palese enter the password:");
        scanf("%s",key1);
        if(0==strcmp(key,key1)){
        //字符串不要取地址
        //判断字符串是否相等不能用等号比较
            break;
        }
		else {
            printf("worng password!\n");
        }
    }
    return i;
}
int main(){
    int i=password();
    if(i==3){
        printf("you have entered the wrong password for three times,push any key to exit.");
    }else if(i<3){
        printf("welcome my friends!");
    }
    system("pause");
    return 0;
}