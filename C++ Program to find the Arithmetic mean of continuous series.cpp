#include<iostream>
using namespace std;
class Continuous{
public:
    Continuous (int terms)
    {
        int lower[50], upper[50], freq[50], sum=0, sumfreq=0, midterm[50];
        cout<<"Enter the Lower limits:"<<endl;
        for(int i=0;i<terms;i++)
        {
            cout<<"Enter the "<<i<<"th element: ";
            cin>>lower[i];
        }
        cout<<"Enter the Upper Limits:"<<endl;
        for(int i=0;i<terms;i++)
        {
            cout<<"Enter the "<<i<<"th element: ";
            cin>>upper[i];
        }
        cout<<"Enter the Frequencies:"<<endl;
        for(int i=0;i<terms;i++)
        {
            cout<<"Enter the "<<i<<"th frequency: ";
            cin>>freq[i];
        }
        for(int i=0;i<terms;i++)
        {
            midterm[i]=(lower[i]+upper[i])/2;
            sum=sum+freq[i]*midterm[i];
            sumfreq=sumfreq+freq[i];
        }
        cout<<"Output="<<(float)(sum/sumfreq)<<endl;
    }
};
int main(){
 Continuous obj(4);
 return 0;
}
