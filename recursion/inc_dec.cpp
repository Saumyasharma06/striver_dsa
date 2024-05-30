#include <stdio.h>
//increment decrement
void inc_dec(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    inc_dec(n-1);
    printf("%d\n",n);
    return;
}

int main() {
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    inc_dec(n);
    return 0;
}