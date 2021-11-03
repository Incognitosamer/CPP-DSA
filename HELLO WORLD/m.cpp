// print numbers from 1-100 except divisible of 3
#include<iostream>
using namespace std;

int main(){

        for(int num=1; num<100; num++) {
                if (num%3==0){
                        continue;
                }
                cout<<num<<'\n';
        }

        return 0;
}