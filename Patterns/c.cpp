// INVERTED HALF PYRAMID 

// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;

int main(){
        int n;
        cin>>n; //Height of the pyramid 

        for(int i=n; i>=1; i--){
                for(int j=1; j<=n; j++){
                        if(j<=i){
                                cout<<"*";
                        }
                }
                cout<<endl;
        }


        return 0;
}