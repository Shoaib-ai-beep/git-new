#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
    return;
}
int main()
{
    int a, b;
    cout << "Enter the value of A and B: ";
    cin >> a >> b;
    swap(a,b);
    cout <<"The value of a is: "<< a<<endl <<"the value of b is: "<< b;
}