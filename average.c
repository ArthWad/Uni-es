#include <iostream>


using namespace std;

//var
int i, d, n, f, p;
float k, t;



//if
void media(int n) {
if(n%2 == 0){
i++;
f = f+n;
k = (float)f/i;
} else if (n%2 != 0){
d++;
p = p+n;
t = (float)p/d;
}
}

//prog

int main(){
cout <<"Type END to finish the stream" "\n";
cout <<"CHOOSE NUMBERS"<< "\n";
 cout <<">"<< "\t";
while(cin >> n) {
    cout <<">"<< "\t";
    media(n);
}
cout<<"The averege of evens is: " <<k<< "\n";
cout<<"The average of odd is: " <<t<< "\n";
return 0;
}
