#include <iostream>
#include <string>
using namespace std;

int add(int a,int b){
    return a+b;
}
int main()
{
    int index = 0;
    while (index < 11)
    {
        cout << "i am at index :" << index << endl;
        index++;
    }

    index = 0;
    do
    {
        cout << "i am at index " << index << endl;
        index++;
    } while (index > 10);

    for(index=0;index<=5;index++){
        cout<<"we are at index "<<index<<endl;
    }

    cout<<"addition of 3 and 5 is :"<<add(3,5)<<endl;

    int arr[3]={1,2,3};//arr[]={1,2,3}
    cout<<"value at arr[1] :"<<arr[1]<<endl;

    // int marks[6];
    // for(int i=0;i<6;i++){
    //     cout<<"enter the value for "<<i+1<<" elem :";
    //     cin>>marks[i];
    // }
    // for (int i=0;i<6;i++){
    //     cout<<"value at "<<i+1<<" elem is "<<marks[i]<<endl;

    // }

    int marks[2][3]={
        {1,2,3},
        {4,5,6}
    };
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }

    float f=3.14;
    cout<<(int)f<<endl;

    string name="mohammed yahya";
    cout<<"name length is "<< name.length()<<endl;

    cout<<name.substr(4,5);

    int a=5;
    int * ptr;
    ptr=&a;

    cout<<"value of a is :"<<a<<endl;
    cout<<"value of a is :"<<*ptr<<endl;
    cout<<"value of address is :"<<ptr<<endl;
    cout<<"value of adddress is :"<<&a<<endl;//same for float

    return 0;
}