#include <iostream>

using namespace std;

int main()
{
    int num,sum=0,m,n;
    while(cin>>num and num!=0)
    {
        sum=0;
        for(int i=1; i<=num;i++)
        {
            m=i*i;
            sum=sum+m;
        }
        cout<<sum<<endl;
    }
}
