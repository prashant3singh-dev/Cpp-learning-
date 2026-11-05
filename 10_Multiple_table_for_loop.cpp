#include<iostream>
using namespace std;
int main()
{
    int n,i,table;
    cout<<"Write the number to get it's table"<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    {
    table=i*n;
    cout<<n<<"×"<<i<<"="<<table<<endl;
    }
    
    return 0;
}
