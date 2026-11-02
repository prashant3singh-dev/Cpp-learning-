#include<iostream>
using namespace std;
int main(){
    int n;
    long long factorial = 1;
    cout<<"Enter the number till which you want to get factorial"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
        }
    cout<<"The factorial of the number is "<<factorial<<endl;   
    return 0;
}
