#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++)
            (i+j>=4)?cout<<"*":cout<<" ";
        cout<<endl;
    }
    //cout<<endl;
    for(int i=0; i<5;i++){
        for(int j=0; j<9; j++)
            (i+j>=4 && i+4>=j)?cout<<"*":cout<<" ";
        cout<<endl;
    }
    return 0;
}
