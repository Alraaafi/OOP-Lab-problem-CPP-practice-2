#include <iostream>
using namespace std;
int main() {
    int n,i,j,maxIndex,minIndex,tmp;
    cout<<"how many Array elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Individual Array elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Before Sorting Array elements: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //using ascending selection sorting algo:
    
    for(i=0; i<n; i++)
    {
        minIndex=i;
        for(j=i; j<n; j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex = j;
                //cout<<arr[minIndex]<<endl;
            }
        }

        tmp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = tmp;
    }

    cout<<"After Ascending Sorting Array elements: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


        //using descending selection sorting algo:
    
    for(i=0; i<n; i++)
    {
        maxIndex=i;
        for(j=i; j<n; j++)
        {
            if(arr[maxIndex]<arr[j])
            {
                maxIndex = j;
                //cout<<arr[minIndex]<<endl;
            }
        }

        tmp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = tmp;
    }

    cout<<endl;
     cout<<"After descending Sorting Array elements: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
//Alraaafi
}