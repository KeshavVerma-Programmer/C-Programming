#include<iostream>
using namespace std;

class md
{
    double x[30];
    public:
    double counter;
    double med,temp,sum;
    int i,j;
    void median(int n)
    {
        cout<<"Enter "<<n<<" no. in Series"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
            if(i!=0)
            {
                counter ++;
            }
        }
        for(i=0;i<(n-1);i++)
        {
            for(j=0;j<(n-1);j++)
            {
                if(x[j]>x[j+1])
                {
                    temp=x[j];
                    x[j]=x[j+1];
                    x[j+1]=temp;
                }
            }
        }
        cout<<"\n___Sorted Elements___"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<"\n"<<x[i];
        }
        if(n%2==0)
        {
            med=(x[(n/2)-1]+x[n/2])/2;
        }
        sum=(counter+1)/2;
        cout<<"\n";
        cout<<sum<<" Median of X series :"<<endl;
        cout<<"\n Median of Individual Series is :"<<med<<endl;
    }
};

int main(){
    int terms;
    cout<<"Please Enter no. of Terms :";
    cin>>terms;
    md obj;
    obj.counter=1;
    obj.median(terms);
    return 0;
}
