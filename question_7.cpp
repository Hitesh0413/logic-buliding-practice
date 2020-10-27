#include<iostream>;
using namespace std;

int main(){
    int row;
    cout<<"Enter No. of rows"<<endl;
    cin>>row;

    for(int i = 1 ; i <= row ; i++){
        for(int j=1 ; j <= row ; j++){
            if(j<=i)
                cout<<"*";
            else
                cout<<" ";                
        }
        for(int k=1 ; k <= row ; k++){
            if(k<=(row-i))
                cout<<" ";
            else
                cout<<"*";                
        }
        cout<<endl;
    }


    for(int i = 1 ; i <= row ; i++){
        for(int j=row ; j > 0 ; j--){
            if(j<=(i-1))
                cout<<" ";
            else
                cout<<"*";                
        }

        for(int k=row ; k > 0 ; k--){
            if(k >= (row-i + 2))
                cout<<" ";
            else
                cout<<"*";                
        }
        
        cout<<endl;
    }
    

    
    return 0;
}