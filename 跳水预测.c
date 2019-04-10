#include <stdio.h> 
#include <stdlib.h>
int check(int player,int a){
    int res=0,i;
    for(i=0;i<5;++i){
        res|=1<<player[i];
    }
    return res==0x3e;
}//查重函数实例
int main(){
    int a,b,c,d,e;
    for(a=1;a<=5;++a){
        for(b=1;b<=5;++b){
            for(c=1;c<=5;++c){
                for(d=1;d<=5;++d){
                    for(e=1;e<=5;++e){
                        if((b==2)+(a==3)==1&&
                            (b==2)+(e==4)==1&&
                            (c==1)+(d==2)==1&&
                            (c==5)+(d==1)==1&&
                            (e==4)+(a==1)==1){
                            	if(a*b*c*d*e==120){
                                    printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n",a,b,c,d,e);
                            	}
                            }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}