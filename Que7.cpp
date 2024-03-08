//         *
//       *   * 
//     *       * 
//   *           *
//     *       * 
//       *   * 
//         *
// Print the following pattern
// Sample Input : n=4
// Sample Output :
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int nsp =n-1;//no of spaces
    int c=n+1;
    int d=1;
    int e=2;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
            cout<<" "<<" ";
        }
        nsp--;
        //stars
          for(int k=1;k<=d;k++){
            if(k==1|| (i+k)==e) cout<<"*"<<" ";
           else cout<<" "<<" ";
        }
        d+=2;
        e+=3;
        cout<<endl;
    }
    n=n-1;
    int a=1;
    int b=2*n;
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=i;j++){
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