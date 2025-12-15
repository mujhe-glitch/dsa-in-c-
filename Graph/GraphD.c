#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct edge
{
    int src;
    int dest;
};
int main(){
    int totalVertax;
    int totalEdge;

    int i;

    struct edge *e;
    int src,dest;

    printf("\n How many vertex you have? ");
    scanf("%d",&totalVertax);

    printf("\n How many Edge you have? ");
    scanf("%d",&totalEdge);

    totalEdge = totalEdge * 2;

    e=calloc(totalEdge,sizeof(struct edge));

    for(i=0;i<totalEdge;i++){
        printf("\nEnter Source and Destination : ");
        scanf("%d  %d",&src,&dest);
        e[i].src = src;
        e[i].dest = dest;

        i++;
        e[i].src = dest;
        e[i].dest = src;

    }
    for (i = 0; i < totalVertax; i++)
    {  
        printf("\n%d  %d",e[i].src,e[i].dest);
    }
    return 0;
}
