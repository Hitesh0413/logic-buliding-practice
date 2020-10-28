#include<iostream>;
using namespace std;

int main(){
    int row;
    cout<<"Enter No. of rows"<<endl;
    cin>>row;

    for(int i = 1 ; i <= row ; i++){
        
        for(int j = 1 ; j <= row ; j++)
            if(j <= (row-i))
                cout<<" ";          
        
        for(int k = 1 ; k <= i ; k++){
            cout<<k;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}