#include <iostream>
using namespace std;
// if does't use it we have to write std::cout<<"hello world"; etc

int main()
{
    std::cout << "hello world";

    // for exicution enter {g++ main.cpp} for comilation then enter {.\a.exe} for opening the compiled binary file

    cout << endl
         << "this is the first line" << endl;
    cout << "this is the second line";

    /*this is
    multi line comment*/

    short a = 1;
    int b = 2;
    long c = 3;
    long long d = 4;

    float e = 1.1;
    double f = 2.2;
    long double g = 3.3;

    cout << "sum of all int is :" << a + b + c + d << endl;
    cout << "sum of all float is :" << e + f + g << endl;

    a = 10;
    cout << "f/b= " << f / b << endl;
    cout << "a/c= " << a / c << endl;
    cout << "a/c= " << (float)a / c << endl;

    cout << "enter your age :";
    int age;
    cin >> age;
    cout << "enter your name :";
    string name;
    cin >> name;

    if (age < 18)
    {
        cout << "you are below 18" << endl;
    }
    else if (age == 18 || name == "yahya")
    {
        cout << "you are at 18 or your name is yahya" << endl;
    }
    else
    {
        cout << "you are above 18" << endl;
    }

    switch (age)
    {
    case 18:
        cout << "your age :" << age << endl;
        break;
    case 19:
        cout << "your age :" << age << endl;
        break; // if not use whole switch block below it get exicuted
    default:
        cout << "who you";
    }

    return 0;
}