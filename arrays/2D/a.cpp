#include <iostream>
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

        // Printing output
        for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                        cout<<i<<j<<": "<<arr[i][j]<<", ";
                }
                cout<<endl;
        }

        return 0;
}