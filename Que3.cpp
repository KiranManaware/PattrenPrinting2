// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        //number
        for(int k=i;k>=1;k--){
            cout<<(char)(k+64)<<" ";
        }
       
        for(int l=2;l<=i;l++){
            cout<<(char)(l+64)<<" ";
        }

        cout<<endl;
    }
}