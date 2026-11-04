#include <iostream>
using namespace std;
void changenumber(int x)
{
    x=20;
    cout<<"Inside function: "<<x<<endl;
}
int main() 
{
    int x=30;
    changenumber(x);
    cout<<"inside main: "<<x<<endl;
    return 0;
}    
    
