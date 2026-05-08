#include<iostream>
using namespace std;
void Diamond(int n){
    for (int l=1; l<=n; l++){
        for (int m=1; m<=n-l; m++){
            cout<< " ";
        }
        for(int n=1; n<=2*l-1; n++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int l=n-1; l>=1; l--){
        for (int m=1; m<=n-l; m++){
            cout<< " ";
        }
        for (int n=1; n<=2*l-1; n++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter the size of the Diamond:";
    cin>>n;

    Diamond(n);
    return 0;

}

    