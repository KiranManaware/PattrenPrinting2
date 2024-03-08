//  Print the following pattern
// Input: n = 4

// Output:
// * * * * * * *
// * * *   * * *
// * *       * *
// *           *
// * *       * *
// * * *   * * *
// * * * * * * * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n-2;i++){
        int a=1;
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        //spaces
       for(int k=1;k<=2*i-1;k++){
        
         cout<<" "<<" ";

       }
       //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    int a=n+1;
    for(int i=1;i<=n-1;i++){
       
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        //spaces
       for(int k=1;k<=a;k++){
            if(i==4) break;
            cout<<" "<<" ";
       }
       a-=2;
       //stars
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++){
        cout<<"*"<<" ";
    }
}