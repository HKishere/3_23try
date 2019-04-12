#include <stdio.h> 
#include <stdlib.h>
int main(){
    int col=10;
    printf("how many column you want to see?");
    scanf("%d",&col);
    int a[20][20];//c语言里不能用变量创建数组
    for(int i=0;i<col;++i){
        int j=0;
        for(int n=1;n<col-i;++n){
            printf("   ");
        }
        for(j=0;j<i;++j){
            if(j==0||j==i){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}