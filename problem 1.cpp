#include <iostream>
using namespace std;
void swaping(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main() {
int a,b;
cout<<"Enter the value of a: ";
cin>>a;
cout<<"Enter the value of b: ";
cin>>b;
swaping(a,b);
cout<<"Value of a after exchanging is: "<<a<<"\nValue of b after exchanging is: "<<b;
    return 0;
}
