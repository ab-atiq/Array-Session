#include <iostream>
using namespace std;
int main()
{
    // variable declaration
    // data_type variable_name = value ;
    int n1;
    int num = 10;
    // cin>>n1;
    // cout<<num<<endl;

    // array declaration
    // data_type variable_name[array_size] ;
    int arr[5] = {5, 7, 0, 12, 15};
    int arr2[5];
    cout<<arr2[3];
    // cin>>arr[2]; // replace/delete then assign value -> modify or update 
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cin>> arr[i];
    }
    // update/modify
    arr[2] = 100;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}