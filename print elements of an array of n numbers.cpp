#include<iostream>
using namespace std;
int main(){
int n,a[50],i;
cout<<"enter the size of an array: \n";
cin>>n;
cout<<"enter the elements of an array: \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<" output of array: ";
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
 return 0;
}
