#include<iostream>
using namespace std;

int pow(int a,int b){
    if(b==0)
     return 1;
    int ans=a*pow(a,b-1);
    return ans;
}

int main(){
    int a,b;
    cout<<"enter the values of a,b";
    cin>>a>>b;
    int p=pow(a,b);
    cout<<p;
    return 0;
}