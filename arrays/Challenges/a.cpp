// Given an array a[] of size n. For every time i from 0 to n-1 output max[from array a[]]

#include<iostream>
using namespace std;

int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
                cin>>arr[i];
        }

        for(int i=0; i<n; i++){
                int max=arr[i];
                for(int j=0; j<i; j++){
                        max=arr[j];
                        if(arr[j]>max){
                                max=arr[j];
                        }
                }
                cout<<max<<" ";
        }

        // for(int i=0; i<n; i++){
        //         cout<<arr[i];
        // }

        return 0;
}