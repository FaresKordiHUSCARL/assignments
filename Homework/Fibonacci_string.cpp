#include <iostream>

using namespace std;

int fibonacci(int);

int fibonacci(int x){
    if(x==0 || x==1) return x;
    else return(fibonacci(x-2)+fibonacci(x-1));
}

int main()
{
    int x=0;
    cout << "Hello world!" << endl;
    cout << "Enter a number : ";cin >> x;
    cout<<endl;
    for(int i=0; i<x; i++) cout << fibonacci(i) << "\t";
    cout<<endl;
    return 0;
}
