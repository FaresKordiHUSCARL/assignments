/* Function to sort numbers A/D , using Variadic Functions */
#include <iostream>
#include <stdarg.h>
using namespace std;

void ListSort(char, int ...);

int main()
{
    bool errorInput = 1;
    const int num = 5;
    double mat[num] = {0};
    char order = 'A';
    cout << "Hello world!" << endl;
//    cout << "How many numbers would you sort ?\n >> ";cin >> num;
    while(errorInput){
    cout << "How to sort these numbers Ascending or Descending order [A/D] ?\n >> ";cin >> order;
    if(order == 'A' || order == 'D') errorInput = 0;
    else cout << "Error\nTry again\n";
    }
    cout << "Enter the [" << num << "] numbers ...\n >> "; for(int i=0; i<num; i++) cin >> mat[i];
    cout << "\n ---------------------------- \n";
    ListSort(order, num, mat[0], mat[1], mat[2], mat[3], mat[4] );
    return 0;
}

void ListSort(char arranging, int elementsNumber ...)
{
    double x[elementsNumber] = {0};
    va_list myList;
    va_start(myList, elementsNumber);
    for(int i=0; i<elementsNumber; i++) x[i] = va_arg(myList, double);
    va_end(myList);

    //Print inputs
    cout << " >> The numbers \t";
    for(int i=0; i<elementsNumber; i++) cout << x[i] << "\t";
    cout << "\n ---------------------------- \n";

    int temp = 0;
    for(int i=0; i<elementsNumber-1; i++)
    {
        for(int j=i+1; j<elementsNumber; j++)
        {
            /* Ascending order  */
            if(arranging=='A' && x[i] > x[j]){
                temp = x[i]; x[i] = x[j]; x[j] = temp;
            }
            /* Descending order */
            else if(arranging=='D' && x[i] < x[j]){
                temp = x[i]; x[i] = x[j]; x[j] = temp;
            }
        }

        cout << " >> Pass [" << i << "] \t\t";
        for(int ii=0; ii<elementsNumber; ii++) cout << x[ii] << "\t";
        cout << "\n ---------------------------- \n";
    }

    //Print results
    if(arranging == 'A')cout << " >> Ascending order \t";
    else if(arranging == 'D')cout << " >> Descending order \t";
    //else cout << " >> There are an error in this order \t";
    for(int i=0; i<elementsNumber; i++) cout << x[i] << "\t";
    cout << endl;
}
