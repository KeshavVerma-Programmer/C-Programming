#include<iostream>
using namespace std;
int main(){
int a,b,temp=0;
cout<<"please enter value of : a =";
cin>>a;
cout<<"please enter value of : b =";
cin>>b;
cout<<"the value before swapping: a =" << a << "and b = " << b;

temp = a ;
a = b;
b = temp;
cout<<" the result after swaping a = "<< a << "and b = " << b <<endl;
return 0;
}
