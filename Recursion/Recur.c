#include<stdio.h>
void solve(){
    // int c=5;
    for (int i = 5; i >= 0; i--)
    {
        printf("%d",i);
        // c++;
    }
    
    solve();
}
int main ()
{
    solve();
    return 0;
}