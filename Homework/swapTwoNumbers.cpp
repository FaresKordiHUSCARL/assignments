// Swap Two Numbers
#include <iostream>

using namespace std;

void swapNum(double&, double&);

int main()
{
    double x, y;
    cout << "Hello world!" << endl;

    // input
    cout << " >> Enter two numbers : \n";
    cout << " >> Number 1 = \t";
    cin >> x;
    cout << " >> Number 2 = \t";
    cin >> y;

    // function call
    swapNum(x, y);

    // results print
    cout << "\n >> Number 1 = \t"<< x;
    cout << "\n >> Number 2 = \t"<< y;
    cout << endl;
    return 0;
}

void swapNum(double& x1, double& x2){
double temp=0;
temp = x1;
x1 = x2;
x2 = temp;
}
