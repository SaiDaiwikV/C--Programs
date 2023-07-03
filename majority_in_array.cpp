#include<iostream>

using namespace std;

int majarr(int arr[],int s){
    int mc = 0;
    int index = -1;
    for(int i = 0;i<s;i++){
        int c = 0;
        for(int j = 0;j<s;j++){
            if(arr[i] == arr[j]){
                c++;
            }
        }
        if(c > mc)
        {
            mc = c;
            index = i;
        }
    }

    if(mc > (s/2))
    {
        cout << "The majority element is "<< arr[index] << endl;
    }
    else {
        cout << "No majority element\n";
    }
}

void fillarray(int arr[],int s)
{
    cout << "enter element one-by-one : \n";

    for(int i = 0;i<s;i++)
    {
        cin >> arr[i];
    }

}

int main()
{
    int s;

    cout << "enter the size of the array : ";
    cin  >> s;

    int arr[s];

    fillarray(arr,s);

    majarr(arr,s);

    return 0;
}