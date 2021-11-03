// number is armstrong or not

#include<iostream>
#include<math.h>
using namespace std;

int main(){
        bool armNumber=0;
        int n;
        int sum=0;
        cin>>n;
        int originaln = n;

        while (n>0)
        {
                int lastDigit = n%10;
                sum += pow(lastDigit, 3);
                n = n/10; //To remove the last digit
        }
        
        if(sum==originaln){
                cout<<originaln<<" is an Armstrong number";
        } else {
                cout<<originaln<<" is not an Armstrong number";
        }
 
        return 0;
}