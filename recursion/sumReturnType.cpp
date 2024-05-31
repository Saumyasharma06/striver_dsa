#include<iostream>
using namespace std;
int sumReturnType(int n){
    if(n==1 || n==0)
    return 1;
    int sum=(n+sumReturnType(n-1));
    return sum;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int fact=sumReturnType(n);
    cout<<fact;
    return 0;
}