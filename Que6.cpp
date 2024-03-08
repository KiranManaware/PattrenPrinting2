// Print the following pattern
// Input : n = 5
// Output:
// *               *
//   *           *
//     *       *
//       *   *
//         *
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a=1;
    int b=2*n;
    for(int i=1;i<=n;i++){
        //space
        for(int j=2;j<=i;j++){
            cout<<" "<<" ";
        }
        //stars
        for(int k=1;k<=2*n-a;k++){
          if(i+k==b || k==1) cout<<"*"<<" ";
          else cout<<" "<<" ";
        }
        a+=2;
        b--;
        

        cout<<endl;
    }
}