#include <iostream>
using namespace std;

int main(){
//*(A+i) is same as A[i]
//(A+i) is same as &A[i]
//if A is arry and p is int pointer then (p=A) is correct but (A=p) is not correct

//2d array can be consider as array of array
//A[2][3]; means it is the array of 2 1d arrays which contain 3 integer each
    
int A[2][3]={
    {1,2,3},
    {4,5,6}
};
//int *pn=A;//error becaus it return pointer to it's first element means first array &A[0]

int (*p)[3]=A; //it recive the pointer of array of 3 elements

cout<<A<<" = "<<&A[0][0]<<endl;//where A return pointer to array and A[0][0] return pointer to int
cout<<*A<<" = "<<A[0]<<" = "<<&A[0][0]<<endl;//A* and A[0] is the name of array from first element of A

cout<<*(*(A+1))<<" or "<<*(A+1)[0]<<endl;//here *(A+1) repr the name of second array element of parent array

    
    
    return 0;
}