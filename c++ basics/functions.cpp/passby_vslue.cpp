// #include<iostream>
// using namespace std;
// void Incr(int n)
// {
//     n++;
// }
// int main(){
//     int a = 10;
//     Incr(a);
//     cout<<a;   this will give the output of 10//here int n only copies the value of a not the varaible a;
// }




#include<iostream>
using namespace std;
void Incr(int &n)
{
    n++;
}
int main(){
    int a = 10;
    Incr(a);
    cout<<a;// this will give the output of 11
}  //because here we call by refrence means that here n is not copying the value of a it becomes the a;