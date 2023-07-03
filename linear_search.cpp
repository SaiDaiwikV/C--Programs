#include<iostream>

using namespace std;

// this program is a recursive program : 

int  search(int arr[],int s,int k){
    
    if(s == 0)
    {
        return -1;
    }

    else if(arr[s - 1] == k){
        return s - 1;
    }

    return search(arr, s - 1,k);

}

void fillarray(int arr[],int s){
    
    cout << "Enter the elements one-by-one : ";
    for(int i = 0;i<s;i++){
        cin >> arr[i];
    }
}

int main()
{
    int s;

    cout << "Enter the SIZE of the Array : ";
    cin  >> s;

    int arr[s];

    fillarray(arr,s);

    int k;

    cout << "Enter the KEY to find in the Given Array : ";
    cin  >> k;

    int r = search(arr,s,k);

    if (r == -1){
        cout << "The element " << k << " is not found in the given array.";
    }

    else {
        cout << "The element " << k << " is found at " << r+1 << " in the given array.";
    }

    return 0;
}