
#include <iostream>

using namespace std;

int main()
{
    int Number=5;
    int *Size = new int(10);
    Size = &Number;
    cout<<"Address Memory : "<<Size<<endl;
    cout<<"Size Memory : "<<*Size<<endl;
    cout<<"Address Memory+1 : "<<*(Size+1)<<endl;
    delete Size;
    return 0;
}

