#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1 || n==2)
     return 1;
    int fibonacci=fibo(n-1)+fibo(n-2);
     return fibonacci;
}

int main(){
    int n,fibonacci;
    cout<<"enter the number of terms";
    cin>>n;
    fibonacci=fibo(n);
    cout<<"the value of fibonacci series is"<<fibonacci;
    return 0;
}
