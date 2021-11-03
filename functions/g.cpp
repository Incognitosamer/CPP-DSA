// Sum of first n natural numbers

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumN(int num){
        int sum = 0;
        for(int i=1; i<=num; i++){
                sum += i;
        }
        return sum;
}

int sumN2(int num){
        int sum = (num*num+1)/2;
        return sum;
}

int main(){
        int n;
        cin>>n;
        cout<<sumN(n)<<endl;
        cout<<sumN2(n);
        return 0;
}