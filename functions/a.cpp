#include<iostream>
using namespace std;


//printing function
void print(int num){
        cout<<num<<endl;
        return;
}

//ADD TWO NUMBERS FUNCTION
int add(int num1,int num2){
        print(num1);
        print(num2);
        int sum = num1 + num2;
        return sum;
}

int main(){
        int a, b;
        cin>>a>>b;

        print(add(a,b)); //using the function

        return 0;
}