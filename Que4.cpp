// Print the following pattern
// Input: n = 4
// Output:
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<(char)(i+64)<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        int a=1;
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<(char)(a+64)<<" ";
            a++;
        }
        //spaces
       for(int k=1;k<=2*i-1;k++){
        if(i==4) break;
         cout<<" "<<" ";
            a++;

       }
       //stars
        for(int j=1;j<=n-i;j++){
            cout<<(char)(a+64)<<" ";
            a++;
        }
        cout<<endl;
    }
}