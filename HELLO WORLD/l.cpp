#include<iostream>
using namespace std;

int main(){
        // Jumps in loops

        int pocketMoney = 3000;
        // Going out only at ODD days 
        for(int date=1; date<=30; date++){
                if(date%2==0){
                        continue; //This loop will be continued
                } 
                if(pocketMoney==0){
                        cout<<"Monthly allowence is over on "<<date<<"th day";
                        break; //This loop will end here
                }
                cout<<"Go out today on "<<date<<endl;
                pocketMoney -= 300; //Spending whenever going out
        }

        return 0;
}