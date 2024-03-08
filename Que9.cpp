// Print the following pattern
// Sample Input : n = 5
// Output :
//           *
//         * * *
//       *   *   * 
//     *     *     * 
//   *       *       * 
// * * * * * * * * * * *
//   *       *       *
//     *     *     * 
//       *   *   * 
//         * * *
//           *  
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int nsp=n;
    int nst=1;
    int a=0;
    for(int i=1;i<=n+1;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
            cout<<" "<<" ";
        }

        //stars
        for(int k=1;k<=nst;k++){
            if(i==(n+1)|| k==1 || i==k || a==(k-i)) cout<<"*"<<" ";
            else cout<<" "<<" ";
        }
        a++;
        nsp--;
        nst+=2;
        cout<<endl;
    }
    nsp=1;
    nst=2*n-1;
    a=n;
    int b=1;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
            cout<<" "<<" ";
        }

        //stars
        for(int k=1;k<=nst;k++){
          if(k==1 || k==a || k==(2*n-b)) 
          cout<<"*"<<" ";
          else cout<<" "<<" ";   
        }
        a--;
        b+=2;
        nsp++;
        nst-=2;
        cout<<endl;
    }
    
}