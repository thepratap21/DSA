#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)

{    int j=-1;
     for(int i=0;i<n;i++)
    {
      if(arr[i]==0)
      {
       j=i;
      break;
      }
    }
    if(j==-1)
    {
    cout<<"No 0s present in array";
    return 0;
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }


    cout << "Array after shifting 0s to end is" << endl;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(auto &it : arr)
    {
        cin >> it;
    }

    cout << "The entered elements are" << endl;

    for(auto &it : arr)
    {
        cout << it << " ";
    }

    cout << endl;

    largest(arr, n);

    return 0;
}