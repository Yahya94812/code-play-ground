#include <iostream>
using namespace std;

int fact(int x){
if (x==1){
    return 1;
}
else{
    return x*fact(x-1);
}
}

int main(){
    int x;
    cout<<"enter the value :";
    cin>>x;
    cout<<"factorial of "<<x<<" is :"<<fact(x)<<endl;
}

