#include<iostream>
using namespace std;
void sum_of_n(int n,int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    sum_of_n(n-1,n+sum);
    return;

}
int main(){
    int n,sum=0;
    cout<<"enter the value of n";
    cin>>n;
    sum_of_n( n, sum);
    return 0;
}