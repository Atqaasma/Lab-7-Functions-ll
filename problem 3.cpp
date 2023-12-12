#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
float sum(float x,float y){
    return x+y;
}
int main(){
    int a,b,integersum;
    float floatsum,x,y;
    cout<<"Enter first integer value: ";
    cin>>a;
    cout<<"Enter second integer value: ";
    cin>>b;
    integersum=sum(a,b);
    cout<<"Sum of "<<a<<" and "<<b<<" is = "<<integersum;
    cout<<"\n***************************";
    cout<<"\nEnter first float value: ";
    cin>>x;
    cout<<"Enter second float value: ";
    cin>>y;
    floatsum=sum(x,y);
    cout<<"Sum of "<<x<<" and "<<y<<" is = "<<floatsum;
    return 0;
}
