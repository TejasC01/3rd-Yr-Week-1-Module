#include <iostream>
using namespace std;
int main(){

for(int i=0;i<6;i++){
    cout<<"*";
}cout<<"\n";

for(int i=0;i<4;i++){
    for(int j=0;j<6;j++){
        if(j==0||j==5){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }cout<<"\n";

}







for(int i=0;i<6;i++){
    cout<<"*";
}

    return 0;
}