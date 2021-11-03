#include<iostream>
using namespace std;

int main(){
        // DO while Loop

        //do {
        //        BODY
        //} while(condition);

        // Difference is this will minimum run for one time even if it is false

        int n;
        cin>>n;

        do {
                cout<<n;
                cin>>n;
        } while(n>0); //IS POSITIVE


        return 0;
}