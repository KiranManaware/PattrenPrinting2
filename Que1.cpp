// Print the following pattern
// Input: n = 5
// Output:
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7
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
            cout<<k<<" ";
        }
        a+=2;

        cout<<endl;
    }
}