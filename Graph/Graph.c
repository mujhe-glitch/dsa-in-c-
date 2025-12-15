#include<stdio.h>
#define S 4
int main(){
    int i,j;
    int gra[S][S];
    int source;
    for(int i=0;i<S;i++){
        for(int j=0;j<S;j++){
            printf("\n%d   connected    %d   ? ",i,j);
            scanf("%d",&gra[i][j]);
        }
    }
    
    printf("\n\n");
    for(i=0;i<S;i++){
        for(j=0;j<S;j++){
            printf("%d ",gra[i][j]);
        }
        printf("\n");
    }
    source = 0;
    printf("\n %d is connected with : ",source);
    for(i=0;i<S;i++){
        if(gra[source][i] == 1 ){
            printf(" %d ",i);
        }
    }

    return 0; 
}