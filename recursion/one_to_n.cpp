#include <iostream>
using namespace std;
void decreasing(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    decreasing(n-1);
    return;
}

int main() {
    int n;
    cout<<"enter the value of n";
    cin>>n;
    decreasing(n);
    return 0;
}