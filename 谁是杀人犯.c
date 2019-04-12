#include <stdio.h> 
#include <stdlib.h>
int main(){
    char murder;
    for(murder='A';murder<'E';++murder){
        if((murder!='A')+(murder=='C')+(murder=='D')+(murder!='D')==3){
            printf("murder is %c",murder);
        }
    }
    system("pause");
    return 0;
}

