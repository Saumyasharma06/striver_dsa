#include<iostream>
using namespace std;
int stairways(int n){
    if(n==1 || n==2) return n;
    int totalWays=stairways(n-1)+stairways(n-2);
    return totalWays;
}
int main(){
    int n,ways;
    cout<<"enter the number of terms";
    cin>>n;
    ways=stairways(n);
    cout<<"the number of ways are "<<ways;
    return 0;
}
