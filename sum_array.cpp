#include <iostream>
using namespace std;
int main()
{

    // array declaration
    // data_type variable_name[array_size] ;
    // int arr[5] = {5, 7, 0, 12, 15};
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int sum;
    sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    cout << sum << endl; // 39

    int sum2 = 0;
    // forward/original order print
    for (int index = 0; index < 5; index++)
    {
        // cout << arr[i] << endl;
        sum2 = sum2 + arr[index];
    }

    cout << sum2;
    return 0;
}