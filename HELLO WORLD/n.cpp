#include<iostream>
using namespace std;

int main(){
        // number is a Prime or not

        int n;
        cin>>n;

        for (int i=2; i<n; i++){
                if(n%i==0){
                        cout<<i<<"Non Prime number\n";
                        break; // to end the code 
                }
        }
        
        cout<<"Prime"<<endl;
        return 0;
}