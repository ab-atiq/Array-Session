#include <iostream>
using namespace std;
int main()
{

    // array declaration
    // data_type variable_name[array_size] ;
    int arr[5] = {5, 7, 0, 12, 15};

    // for (int i = 0; i < 5; i++)
    // {
    //     cin>> arr[i];
    // }

    // forward/original order print
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // reverse print/backward print
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    return 0;
}