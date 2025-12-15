#include<stdio.h>
#define SIZE 5
int que[SIZE];
int f=-1,r=-1;
void enqueue(int val){
    if(r==SIZE-1){
        printf("\nQue is full");
    }
    else{
        if(f==-1){
            f=0;
        }
        r++;
        que[r]=val;
        printf("\n %d inserted in the queue ",val);
        
    }
}
void dequeue(){
    if(f==-1){
        printf("\nQue is empty");

    }
    else{
        printf("\n %d delete from the que ",que[f]);
        f++;
    }
}
void display(){
    if(f==-1||f>r){
        printf("\nQue is empty");
    }else{
        printf("\nQue is element");
        for(int i=f;i<=r;i++){
            printf("%d ",que[i]);
        }
        printf("\n");
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    // enqueue(60);
    display();
// enqueue(60);
display();
dequeue();
display();
enqueue(60);
    // dequeue();
    // dequeue();
    // display();

    return 0;
}