//PATTERN 1
//rectangle: row 5, column 4
#include <iostream>
using namespace std;

int main(){
        int row, column;
        cin>>row>>column;

        for(int i=0; i<row; i++){
                for(int j=0; j<column; j++){
                        cout<<"* ";
                }
                cout<<'\n';
        }


        return 0;
}
