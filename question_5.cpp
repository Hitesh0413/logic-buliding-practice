#include<iostream>;
using namespace std;

int main(){
    int row;
    cout<<"Enter No. of rows"<<endl;
    cin>>row;

    for(int i = 0 ; i < row ; i++){
        for(int j=(row-i) ; j > 0 ; j--){
            cout<<row-i;            
        }
        cout<<endl;
    }
    return 0;
}