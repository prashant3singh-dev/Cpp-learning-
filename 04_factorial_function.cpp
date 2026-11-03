#include <iostream>
using namespace std;
int factorial(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result=result*i;
        }
        return result;
        }

int main() {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The factorial of the numbers is "<<factorial(n)<<endl;
    return 0;
}
