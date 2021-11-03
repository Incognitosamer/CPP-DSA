// USED TO STORE VARIABLES OF SIMILAR TYPES

#include<iostream>
using namespace std;

int main(){

        // // array basics
        // int array[4] = {10,20,30,40};
        // cout<<array[0]<<endl; // 10
        // cout<<array[1]<<endl; // 20
        // cout<<array[2]<<endl; // 30
        // cout<<array[3]<<endl; // 40


        // custom size array
        int n;
        cin>>n;
        int array[n];
        
        for(int i=0; i<n; i++){
                cin>>array[i]; // Array input from user
        }
        for(int i=0; i<n; i++){
                cout<<array[i]<<" ";
        }

        return 0;
}