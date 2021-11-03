// Insertion sort: Insert an element from unsorted array and correct position in sorted array.
// https://www.geeksforgeeks.org/insertion-sort/

#include<iostream>
using namespace std;

int main(){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
                cin>>arr[i];
        }
        
        for(int i=1; i<n; i++){
                int current = arr[i];
                int j = i-1;
                while(arr[j]>current && j>=0){
                        arr[j+1] = arr[j];
                        j--; // Going to one element back
                }
                arr[j+1]==current;
        }

        for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
        }

        return 0;
}