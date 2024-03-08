// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a =1;
    int nsp =n-1;//no of spaces
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
            cout<<" "<<" ";
        }
        nsp--;
        //numbers
        for(int k=1;k<=a;k++){
            cout<<(char)(k+64)<<" ";
        }
        a+=2;

        cout<<endl;
    }
}