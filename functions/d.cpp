// Fctorial of a number 
// n! = n x n-1 x n-2 x n-3......x 1

#include<iostream>
using namespace std;

int fact(int num){
        int factorial=1;
        for(int i=2; i<=num; i++){
                factorial*=i;
        }
        return factorial;
}

int main(){
        int n;
        cin>>n;
        int ans = fact(n);
        cout<<ans<<endl;
        return 0;
}