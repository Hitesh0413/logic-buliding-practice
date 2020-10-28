#include<iostream>;
using namespace std;

int main(){
    int row;
    cout<<"Enter No. of rows"<<endl;
    cin>>row;

    for(int i = 1 ; i <= row ; i++){
        for(int j = 1 ; j <= i ; j++){
            int sum = i + j;

            if(sum%2 == 0)
                cout<<"1";
            else
                cout<<"0";

            cout<<" ";        
        }
        cout<<endl;
    }
    return 0;
}