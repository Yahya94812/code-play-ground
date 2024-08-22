/*Recursion*/ 
#include <iostream>
using namespace std;

int factorial(int n){//O(1)
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }     
}

int find_power(int x, int n){//O(n)
    if(n==0){
        return 1;
    }
    else{
        return x*find_power(x,n-1);
    }
}

int find_power2(int x, int n){//O(log(n))
    if(n==0){
        return 1;
    }
    else{
        if(n%2==0){
            int temp=find_power2(x,n/2);
            return temp*temp;
        }
        else{
            return x*find_power2(x,n-1);
        }
    }
}

unsigned long long fibonacci(unsigned long long num){//O(n)
    if(num<=1){
        return num;//base case
    }
    else{
        int f1=0,f2=1,f3;
        for(int i=2;i<=num;i++){
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        return f3;
    }
}

unsigned long long fibonacci2(unsigned long long num){//O(2^n)
    if(num<=1){
        return num;//base case
    }
    else{
        return fibonacci2(num-1)+fibonacci2(num-2);
        }
}  


int main(){
cout<<factorial(5)<<endl<<endl;
cout<<find_power(2,10)<<endl<<endl;
cout<<find_power2(2,10)<<endl<<endl;
cout<<fibonacci(300)<<endl<<endl;
cout<<fibonacci2(300)<<endl<<endl;
return 0;
}