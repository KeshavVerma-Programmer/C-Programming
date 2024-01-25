#include<iostream>
using namespace std;
int sum(int a,int b,int c,int d)
{
    return a+b+c+d;
}
int product(int a,int b,int c,int d)
{
    return a*b*c*d;
}
int keshav(int a,int b,int c,int d)
{
    return a-b-c-d;
}
int keshavverma(int a,int b,int c,int d)
{
    return a+b*c-d;
}
int main(){
 cout<<"\nsum of a,b,c,d is :"<<sum(1,3,4,5);
 cout<<"\nsum of a,b,c,d is :"<<product(1,3,4,5);
 cout<<"\nsum of a,b,c,d is :"<<keshav(1,3,4,5);
 cout<<"\nsum of a,b,c,d is :"<<keshavverma(1,3,4,5);
}
