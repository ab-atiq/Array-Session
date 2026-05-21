#include <iostream>
using namespace std;
int main()
{

    // array declaration
    // data_type variable_name[array_size] ;
    // int arr[5] = {5, 7, 0, 12, 15};

    int size_arr;
    cin>>size_arr;

    int arr[size_arr];

    for (int i = 0; i < size_arr; i++)
    {
        cin >> arr[i];
    }
    int sum=0;
    for (int i = 0; i < size_arr; i++)
    {
        // cout << arr[i] << endl;
        sum = sum+arr[i];
    }

    cout<<sum<<endl;
    return 0;
}