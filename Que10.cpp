// Print the following pattern
// Input : n = 4
// Output :

// *           *  
// * *       * *  
// * * *   * * *  
// * * * * * * *  
// * * * * * * *  
// * * *   * * *  
// * *       * *  
// *           *  
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int b=n+1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        for(int k=1;k<=b;k++){
            cout<<" "<<" ";
        }
        b-=2;
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=2*n-1;j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }
    int a=n-1;
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            cout<<"*"<<" ";
        }
        for(int k=1;k<=c;k++){
            cout<<" "<<" ";
        }
        c+=2;
        for(int j=1;j<=a;j++){
            cout<<"*"<<" ";
        }
        a--;
        cout<<endl;
    }
}