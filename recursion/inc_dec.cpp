#include <iostream>
using namespace std;
//increment decrement
void inc_dec(int n){

    //base condition
    if(n==0){
        return;
    }
    cout<<n<<endl;
    inc_dec(n-1);
    
    cout<<n<<endl;
    return;
}
//main
int main() {
    int n;
    cout<<"enter the value of n";
    cin>>n;
    inc_dec(n);
    return 0;
}