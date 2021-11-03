// max and min element in the array

#include<iostream>
#include<climits>
using namespace std;

int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
                cin>>arr[i]; // Array input from user
        }

        int max=INT_MIN; // smallest possible int value in CPP
        int min=INT_MAX; // largest int value
        for(int i=0; i<n; i++){
                if(arr[i]>max){
                        max = arr[i];
                } // or max=max(max, arr[i]);
                if(arr[i]<min){
                        min = arr[i];
                }
        }
        cout<<"Min: "<<min<<" Max: "<<max;


        return 0;
}