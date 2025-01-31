#include<iostream>
using namespace std;

void dp2(int n){
    for(int i=0;i<(n/2)+1;i++){
    for(int j=0;j<n-i;j++){
        cout<<" ";
    }
    for(int j=0;j<(2*i)+1;j++){
        cout<<"e";
    }
    cout<<endl;
}
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    dp2(n);
    return 0;
}