#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number until which you want to add"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum= "<<sum<<endl;
    return 0;
}
