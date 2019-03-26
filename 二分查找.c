#include <stdio.h> 
#include <stdlib.h>
int search(int a[],int left,int right,int find){
    int mid;
    while(left<=right){
        mid=(right+left)/ 2;
        if(a[mid]>find){
            right=mid-1;
        }
        else if(a[mid]<find){
            left=mid+1;
        }
        else if(a[mid]==find){
            return mid;
        }
    }
    return -1;
}
int main(){
    int a[10]={1,4,6,8,12,23,34,45,56,78};
    int find,i;
    int left=0;
    int right=9;
    scanf ("%d",&find);
    i=search(a,left,right,find);
    printf("%d",i);
    system("pause");
    return 0;
}