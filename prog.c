#include <iostream>

using namespace std;

//var
int n, d, i;


//function
void aste(int n){
while(d<n){
    for(i = 1; i <= n; i++){
cout<<"*"; 
} 
cout<<endl;
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
