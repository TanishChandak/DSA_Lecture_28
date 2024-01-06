#include <iostream>
using namespace std;
// This is very bad pratice, it will give you an error because of local variables:
int &func(int a)
{
    // (a and n) are the local variables, it will used in this function only:
    // So don't used it, it is very bad pratice:
    int n = a;
    int &ans = n;
    return ans;
}
// Creating an pointers, it will also give an error because of local variables:
int *fun(int a)
{
    // it is an local variable:
    int *ptr = a;
    return ptr;
}
// Creating an function which can give the sum of an array:
int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int i = 5;
    // Creating an Reference Variable using the (i):
    int &j = i;
    cout << "The value of i is: " << i << endl;
    i++;
    cout << "The value of i is: " << i << endl;
    j++;
    cout << "The value of i is: " << i << endl;
    cout << "The value of j is: " << j << endl;
    // fun(i);  // it will give an error
    // func(i); // it will give an error

    // Creating an array with the dynamic memory allocation:
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    // it will goes to the dynamic allocation:
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout << "The sum of an array is: " << ans << endl;
}
