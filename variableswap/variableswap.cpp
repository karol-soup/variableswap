

using namespace std;
#include <iostream>


int main()
{
    int var1 = 5;
    int var2 = 7;
    int temp;

    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << var1 << " " << var2;

    return 0; 

}

