#include<iostream>;
using namespace std;

int main(){
    int row,col;
    cout<<"Enter No. of rows"<<endl;
    cin>>row;
    cout<<"Enter no. of columns"<<endl;
    cin>>col;

    cout<<"Pattern"<<endl;
    
    for(int i = 0 ; i < row ; i++ ){
        for(int j = 0 ; j < col ; j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
    
    return 0;
}