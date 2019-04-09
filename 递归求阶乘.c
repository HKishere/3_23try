#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
int fun(int a){
    if (a==1){
        return 1;
    }
    else{
        return a*fun(a-1);    
    }
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",fun(a));
    system("pause");
    return 0;
}