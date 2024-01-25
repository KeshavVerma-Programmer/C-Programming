#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the elements of an array";
cin>>n;
int a[n];
for(int i=0;i<n;i++)

{
    cin>>a[i];
}
 int SMALLEST=INT_MAX;
 for(int i=0;i<n;i++)
{
    if(a[i]<SMALLEST)
    {
        SMALLEST=a[i];
    }
}
cout<<"smallest number is"<<SMALLEST;

return 0;

}
