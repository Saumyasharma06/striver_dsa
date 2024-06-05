#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0)
     return 1;
    int x=pow(a,b/2);
    if(b%2==0){
        return x*x;
    }
    else
        return x*x*a;
}

int main(){
    int a,b;
    cout<<"enter the values of a,b";
    cin>>a>>b;
    int p=pow(a,b);
    cout<<p;
    return 0;
}