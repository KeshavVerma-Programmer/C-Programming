#include<iostream>
#include<algorithm>
using namespace std;

class Mean1{
public:
    int n;
    double arr[30], armean, sum = 0;
    void formula()
    {
        cout<<"To Find Mean___\n"<<endl;
        cout<<"Enter Number of the Terms :"<<endl;
        cin>>n;
        cout<<"Enter "<<n<<"  Number"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        armean=sum/n;
    }
    void output(){
        cout<<"Mean = "<<armean<<endl;
    }
};

class Median2 {
private:
    double Median;
public:
    void Median1(int arr[], int n)
    {
        sort (arr,arr+n);
        if(n%2==0)
        {
            Median = (arr[(n/2)-1]+arr[n/2])/2;
        }
        else
        {
            Median = arr[n/2];
        }
    }
    double getMedian()
    {
        return Median;
    }
};

class Mode3
{
private:
    int mode;
public:
    void Mode1(int arr[], int n)
    {
        sort(arr,arr+n);
        int mode=arr[0];
        int count=1;
        int max_count=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                count ++;
            }
            else
            {
                if(count>max_count)
                {
                    max_count=count;
                    mode=arr[i-1];
                }
                count = 1;
            }
        }
        if(count>max_count)
        {
            max_count=count;
            mode=arr[n-1];
        }
        this->mode=mode;
    }
    int getMode(){
        return mode;
    }
};

int main(){
    Mean1 obj;
    obj.formula();
    obj.output();

    Median2 ob;
    cout<<"To Find Median____"<<endl;
    int n;
    cout<<"Enter no. of Elements = "<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter "<<n<<" Elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    ob.Median1(nums, n);
    cout<<"Median is :"<<ob.getMedian()<<endl;

    Mode3 mf;
    int n1;
    cout<<"To find Mode___"<<endl;
    cout<<"Enter no. of Elements :"<<endl;
    cin>>n1;
    int nums1[n1];
    cout<<"Enter "<<n1<<" Elements"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>nums1[i];
    }
    mf.Mode1(nums1,n1);
    cout<<" Mode = "<<mf.getMode()<<endl;
    return 0;
}
