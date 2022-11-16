// reverseOrder Function with *POINTERS*
#include <iostream>
using namespace std;

void VecReverse(int, double* x);

int main()
{
    int number = 0;
    cout << "Hello world!" << endl;
    cout << "How many numbers would you Enter ?\n >> ";
    cin >> number;
    const int num = number;
    double mat[num] = {0};

    cout << "Enter the [" << num << "] numbers ...\n >> ";
    for(int i=0 ; i<num; i++)
        cin >> mat[i];
    cout << "\n ---------------------------- \n";

    VecReverse(num, &mat[0]);
    cout<<endl;

    //Print results
    cout << " >> Reversed vector *main* \t";
    for(int i=0; i<num; i++)
        cout << mat[i] << "\t";
    cout << endl;
    return 0;
}

void VecReverse(int elementsNumber, double* x)
{
    //Print inputs
    cout << " >> The numbers \t\t";
    for(int i=0; i<elementsNumber; i++)
        cout << *(x+i) << "\t";
    cout << "\n ---------------------------- \n";

    double temp = 0;
    for(int i=0; i<elementsNumber/2; i++)
    {
        /* Reverse order */
        temp = *(x+i);
        *(x+i) = *(x+(elementsNumber-i-1));
        *(x+(elementsNumber-i-1)) = temp;
    }
    cout << " >> Reversed vector *function* \t";
    for(int i=0; i<elementsNumber; i++)
        cout << *(x+i) << "\t";
    cout << endl;
}
