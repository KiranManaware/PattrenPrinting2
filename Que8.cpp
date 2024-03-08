// Print the following pattern
// Sample Input : n = 4
// Output :
//       1
//     2  2
//   3      3
// 4          4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a=n-1;
    int b=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            cout<<" "<<" ";
        }
        a--;
        for(int k=1;k<=2*n-1;k++){
            if(k==1||(i+k)==b) cout<<i<<" ";
            else cout<<" "<<" ";
        }
        b+=3;
        cout<<endl;
    }    

}