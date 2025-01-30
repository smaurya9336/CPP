#include<iostream>
using namespace std;

void Pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
           if(i==0 || i==n-1){
            cout<<" ";
           }
           else{
            cout<<"*";
           }
        }
         
        
        for(int j=1;j<n;j++){
            if(i==n/2){
                cout<<"e";
            }
            else{
                cout<<" ";
            }

        }

        for(int j=0; j<1;j++){

            cout<<"*";
        }
     cout<<endl;
    }
 

}

int main(){
    int n;
    cout<<"enter a number: ";
    cin >> n;
   
    Pattern(n);
    return 0;
}