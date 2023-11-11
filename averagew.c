#include <iostream>

using namespace std;

//var
int n, d, i, j, m;


//function
void aste(int n){
d = d + n*j;
m = m + j;
i = d/m;

}

//prog

int main(){
    cout<<"TYPE END TO SEE YOUR AVERAGE"<<endl;
    cout<<"INSERT VOTE"<<endl;
    cout<<"> " ;
while(cin>>n){
    if(n >= 18 && n <= 30){
        cout<<"INSERT WEIGHT"<<endl;
    cout<<"> " ;
        cin>>j;
        if((j == 6) || (j == 12)){
aste(n);
cout<<"INSERT VOTE"<<endl;
    cout<<"> " ;
} else {
    cout<<"ERROR: wrong cfu inserted"<<endl;
    return 0;
} 
} else {
    cout<<"ERROR: insufficient vote inserted"<<endl;
    return 0;
}
}
cout<<"The average of the votes is: "<<i<< endl;
return 0;
}
