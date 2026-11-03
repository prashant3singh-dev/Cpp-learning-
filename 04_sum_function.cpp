include <iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
        }
        return sum;}

int main() {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The sum of numbers is "<<sum(n)<<endl;
    return 0;
}
