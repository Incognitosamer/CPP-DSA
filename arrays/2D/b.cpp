// Searching in matrix

#include<iostream>
using namespace std;

int main(){
        int n,m;
        cin>>n>>m;
        int arr[n][m]; // 2D array

        // Taking Input
        for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                        cin>>arr[i][j];
                }
        }

        int key;
        cin>>key;

        // Searching in matrix
       for(int i=0; i<n; i++){
               for(int j=0; j<n; j++){
                       if(arr[i][j]==key){
                               cout<<"Key is at: "<<"Row: "<<i<<" Column: "<<j<<endl;
                       }
               }
       }

        // Printing output
        for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                        cout<<i<<j<<": "<<arr[i][j]<<", ";
                }
                cout<<endl;
        }

        return 0;
}