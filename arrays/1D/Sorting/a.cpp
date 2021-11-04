// Sorting in accending array

// Selction Sort: Find the min array in unsorted array and swap it with element at begining

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
                for(int j=i+1; j<n; j++){
                        if(arr[j] < arr[i]){
                                int temp = arr[j];
                                arr[j] = arr[i];
                                arr[i] = temp;
                        }
                }
        }
        
        // printing the array
        for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
        } cout<<endl;


        return 0;
}