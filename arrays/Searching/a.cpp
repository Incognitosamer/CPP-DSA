// Searching in arrays

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Time complexity is O(n)
int linearSearch(int arr[], int length, int key){
        for(int i=0; i<length; i++){
                if(arr[i]==key){
                        return i;
                }
        }
        return -1;
}

// Time complexity is O(log n base 2)
// Array should only be in accending order
int binarySearch(int arr[], int length, int key){
        int s=0;
        int e=length;
        sort(arr, arr+1);

        while (s<=e)
        {
                int mid=(s+e)/2;

                if (arr[mid]==key)
                {
                        return mid;
                } else if (arr[mid]>key)
                {
                        e=mid-1;
                } else{
                        s=mid+1;
                }
        }
}

int main(){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
                cin>>arr[i];
        }

        int key;
        cin>>key;
        
        cout<<linearSearch(arr, n, key)<<endl;
        cout<<binarySearch(arr, n, key)<<endl;

        return 0;
}