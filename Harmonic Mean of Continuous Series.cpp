#include<iostream>
using namespace std;
class Continuous{
 double lower[50],upper[50],mid[50],fre[50];
 public:
     static double sum,sumf;
     int n,i;
     mean()
     {
         float hm;
         cout<<"Enter Number of Elements :";
         cin>>n;
         cout<<"Enter Lower limit (_)and Upper limit(-) :"<<endl;
         for(i=0;i<n;i++)
         {
             cout<<"_";
             cin>>lower[i];
             cout<<"_";
             cin>>upper[i];
         }
         cout<<"Enter "<<n<<" elements in frequency :";
         for(i=0;i<n;i++)
         {
             cin>>fre[i];
             mid[i]=(lower[i]+upper[i])/2;
             sum+=fre[i]/mid[i];
             sum+=fre[i];
         }
         cout<<"\n Sum of Frequency :"<<sumf<<endl;
         cout<<"\n Sum of f/m :"<<sum<<endl;
         hm=sumf/sum;
         cout<<"Harmonic mean of Continuous Series :"<<hm<<endl;
         }

};
double Continuous ::sum=0;
double Continuous ::sumf=0;
int main(){
 Continuous ob;
 ob.mean();
 return 0;
}
