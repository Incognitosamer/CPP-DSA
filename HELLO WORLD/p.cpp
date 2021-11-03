#include<iostream>
using namespace std;

int main(){
        // SWITCH CASE IN CPP
        int input;
        cin>>input;

        switch(input){
                case 'a':
                        cout<<"Hello";
                        break; // this is only to terminate the switch statement 

                case 'b':
                        cout<<"Namaste";
                        break;

                case 'c':
                        cout<<"Hello";
                        break;

                case 'd':
                        cout<<"salute";
                        break;

                case 'e':
                        cout<<"Hola";
                        break;

                case 'f':
                        cout<<"Chio";
                        break;

                default:
                cout<<"No input matches any of the cases";
                break;
        }


        return 0;
}