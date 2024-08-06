#include <iostream>
#include <string>
#include <string.h>
using namespace std;


void print(const char* charp){//we can't change charp in this function
    cout<<endl<<"the print function begin"<<endl;
    while(*charp!='\0'){
        cout<<*charp;
        //charp[3]='e' cause error
        charp++;
    }
    cout<<endl;
    return;
}

int main(){
    string st="yahay";
    char chararr1[]={'y','a','h','y','a','\0'};
    char chararr2[20]="yahya";//null (\0) terminater is implicit
    //if controll reach to null terminator it teminate the readig the char
    cout<<sizeof(chararr2)<<endl;//out actull size with \0
    cout<<strlen(chararr2)<<endl;//from <string.h> and it does't include null char (\0)
    cout<<st.length()<<endl;//from <string> and it does't include null char (\0)
    print(chararr2);

    //array and pointers are of different type but used in similar manner
    char* cptr;
    cptr=&chararr2[0];
    for(int i=0;i<6;i++){
        cout<<cptr[i]<<endl;//cptr is pointer we can also use *(cptr+i)
    }

    char* c="hello";//this string get stored as compile time constant
    c[0]='r';
    print(c);

    return 0;
}