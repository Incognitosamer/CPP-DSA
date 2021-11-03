#include<iostream>
using namespace std;

int main() {

        int savings;
        cin>>savings;

        if (savings>5000){
                cout<<"Date with expensive GF";
        } else if (savings>2000){
                cout<<"Date with cheap GF";
        } else{
                cout<<"ALONE is good";
        }


        return 0;
}