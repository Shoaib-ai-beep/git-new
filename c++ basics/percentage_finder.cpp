#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter marks:";
cin>>n;
if(n>80){
    cout<<" A+ grade";
}
else if(n>70){
    cout<<"A grade";
}
else if(n>60){
    cout<<"B grade";

}
else if (n>50){
    cout<<"C grade";

}
else {
    cout<<"Fail";
}



}