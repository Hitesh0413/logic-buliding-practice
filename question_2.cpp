#include<iostream>;
using namespace std;

int main(){
    int row,col;
    cout<<"Enter No. of rows"<<endl;
    cin>>row;
    cout<<"Enter No. of col"<<endl;
    cin>>col;

    for(int i = 0 ; i < row ; i++){
        for(int j=0 ; j < col ; j++){
            if(j == 0 || j == (col-1) || i == 0 || i == (row-1))
                cout<<"*\t";
            else
                cout<<"\t";    
        }
        cout<<endl;
    }
    return 0;
}