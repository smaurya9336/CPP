#include<iostream>
using namespace std;

void dp1(int n){
    int i,j;
   for(i=0;i<n;i++){
    
    // star pattern
    for(j=0;j<1;j++){
        cout<<"*";
    }
   

// e pattern

  for(j=0;j<n;j++){
   if(i==n/2){
        cout<<"e";
    }
    else{
        cout<<" ";
    }
    }

    // star print 
   
    for(j=0;j<n;j++){
        if(i==n/2){
        cout<<"*";  
        }
        else{
            cout<<" ";
        }    
    }

// e pattern 
    for(int j=0;j<n;j++){
        if(i==n/2){
            cout<<"e";
        }
        else{
            cout<<" ";
        }
    }

    // star pattern
    for(int j=0;j<1;j++){
        cout<<"*";
    }

     cout<<endl;
    }
  
   
    //  cout<<endl;
   }



 


    

   




int main(){
    int n;
    cout<<"enter a number: ";
    cin >> n;
    dp1(n);
    return 0;
}