#include<iostream>
using namespace std;
class harmonic{
 private:
     double x[30];
 public:
    mean(int n)
    {
        int i;
        double sum=0,hm;
        cout<<"\nplease enter "<<n<<"elements in x series:"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        cout<<"division of x series :"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<"|"<<x[i]<<"|"<<endl;
            sum+=1/x[i];
        }
        cout<<"summation of 1/x series:"<<sum<<endl;
        hm=n/sum;
    }
};
int main(){
 harmonic ob;
 int n;
 cout<<"please enter no of terms :";
 cin>>n;
 ob.mean(n);
 return 0;
}
