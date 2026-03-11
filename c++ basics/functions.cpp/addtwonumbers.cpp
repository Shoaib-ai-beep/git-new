#include <iostream>
using namespace std;
int sum(int a, int b)//functiom declare
{
    int ans = a + b;//function define
    return ans;
}
int main()
{
    int m, n;
    cout << "Enter the two numbers :";
    cin >>  m>> n;
//function call
   cout<< sum(m,n);
    cout<<endl;
}