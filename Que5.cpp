// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a=n;
    int b=n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }
        //spaces
       for(int k=1;k<=2*i-1;k++){
        if(i==4) break;
         cout<<" "<<" ";
       }
       //stars
        for(int j=a-1;j>=1;j--){
            cout<<j<<" ";
        }
        a--;

        cout<<endl;
    }
}