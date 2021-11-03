#include<iostream>
using namespace std;

int main(){

        int savings;
        cin>>savings;

        if(savings>5000) {
                if(savings>7000) {
                        cout<<"Amount is greater then 7k";
                } else {
                        cout<<"Amount is is less then 7k but more then 5k";
                }
        } else if(savings>2000){
                cout<<"Amount is greater then 2k";
        } else {
                cout<<"Amount is less then 2k";
        }

        return 0;
}