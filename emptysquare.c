#include <iostream>

using namespace std;

//var
int n, d, i, e;


//function
void aste(int n){
    d = 1;
while(d<=n){
     if ((d == 1) || (d == n)){
    for(i = 1; i <= n; i++){
cout<<"*";
    }
    cout<<endl; 
} else { 
    for(i = 1; i <= n; i++){
        if ((i == 1) || (i == n)){
            cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
d++;
}
}


//prog

int main(){

    cout<<"CHOOSE A NUMBER"<<endl;
    cout<<"> ";
while (cin>>n){
if(n >= 0){
aste(n);
return 0;
}
cout<<"CHOOSE A POSITIVE NUMBER"<<endl;
    cout<<"> ";
}
}
