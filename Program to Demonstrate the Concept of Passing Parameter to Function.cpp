#include<iostream>
using namespace std;
int P_par(int a,int b,int c,int d)
{
    int product;
    product = a*b*c*d;
    return product;
}
int main(){
cout<<"Product is = "<<P_par(10,5,2,1)<<endl;
return 0;
}
