#include <iostream>
using namespace std;
int areasquare(int l){
   float result= l*l;
   return result;
}
float arearectangle(float l,float b){
    float result= l*b;
    return result;  
}
float areacircle(float l){
    float result=3.14*l*l;
    return result;
}
int main() {
    int l,b,r;
cout<<"Press 1 for area of square.\nPress 2 for area of rectangle.\nPress 3 for area of circle.\nEnter your choice---";
int choice;
cin>>choice;
switch(choice){
    float result;
 case 1: 
 cout<<"Enter length of square= ";
 cin>>l;
 result= areasquare(l);
 cout<<"Area of square is== "<<result;
 break;
 case 2: 
 cout<<"Enter length of rectangle= ";
 cin>>l;
 cout<<"Enter breadth of rectangle= ";
 cin>>b;
 result= arearectangle(l,b);
 cout<<"Area of rectangle is== "<<result;
 break;
 case 3: 
 cout<<"Enter radius of circle= ";
 cin>>r;
 result=areacircle(r);
 cout<<"Area of circle is== "<<result;
 break;}
    return 0;}
