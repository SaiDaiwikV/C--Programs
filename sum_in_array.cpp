#include<iostream>

using namespace std;

int suminarray(int arr[],int s,int x){
    for(int i = 0;i<s;i++)
    {
        for(int j = i+1;j<s;j++)
        {
            if((arr[i] + arr[j]) == x){
                return 1;
            }
        }
    }
    return 0;
}

void fillarray(int arr[],int s){
    cout << "Enter the elements one-by-one : ";
    for(int i = 0;i<s;i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int s;

    cout << "Enter the size of the array : ";
    cin  >> s;

    int arr[s];

    fillarray(arr,s);

    int x;

    cout << "Enter the SUM value to check in the Array : ";
    cin  >> x;

    int ans = suminarray(arr,s,x);

    if(ans == 1){
        cout << "TRUE";
    }
    else{
        cout << "FALSE";
    }
    
    return 0;
}