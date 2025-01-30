#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<n+2;i++){
          for(int j=0; j<1;j++){
            cout<<"*";
          }
        for(int j=1;j<n+1;j++){
            if(i==n/2 +1){
                cout<<"e";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=0;j<1;j++){
            if(i==0 || i==n+1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}



// pattern2

// *****
//   e
//   e
//   e
//   e
//  ***


void pattern2(int n){
   
    
       for(int i=0;i<1;i++){
        for(int j=0;j<n+2;j++){
            cout<<"*";
        }
        cout<<endl;
       }
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n/2+1;j++){
                cout<<" ";
            }
            for(int j=0;j<1;j++){
                cout<<"@";
            }
            cout<<endl;
        }
        for(int i=0;i<1;i++){
            for(int j=0;j<1;j++){
                cout<<" ";
            }
            for(int j=1;j<n+1;j++){
                cout<<"*";
            }
        }
    
}



int main(){
    int n;
    cout<<"enter a number: ";
    cin>> n;
    pattern2(n);
    return 0;
}