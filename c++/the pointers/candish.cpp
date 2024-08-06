#include<iostream>
using namespace std;

int main(){

    int x;
    char cr;
    char *c;

    c=&cr;

    
    for (long long x=0;x<=1000000000000;x++)
    {

        cout<<"character is : "<<c<<endl;
        c++;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    return 0;

}