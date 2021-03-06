/********************************************************************************************
*    Title: QuickSort Soure Code                                                            *
*    Author: Lawrance J                                                                     *
*    Date: 16-11-2019                                                                       *
*    Availability: http://github.com/LawranceMichaelite/Data-Structures-and-Algorithm.git   *
*********************************************************************************************/

#include<iostream>
using namespace std;

int Partitioning(int *arr, int left , int right)
{
    int pivot = arr[right];
    int Tracker = left ;
    for(int i = left ; i < right ; i++)
    {
        if ( arr[i] < pivot)
        {
            swap( arr[i] , arr[Tracker] ) ;
            Tracker++ ; 
        }
    }
    swap( arr[Tracker] , arr[right] ) ;
    return Tracker ;
}




void Quick_Sort(int *arr , int left , int right)
{
    if ( left < right )
    {
        int Pivot_Index = Partitioning(arr,left,right) ;
        Quick_Sort(arr, Pivot_Index + 1 , right) ;
        Quick_Sort(arr, left , Pivot_Index - 1) ;
    }
}

int main()
{
    int size ; 
    cout << "Enter the Number of Elements to Sort" << endl;
    cin >> size ;
    int *arr = new int[size];
    for( int i = 0; i < size ; i++)
    {
        cin >> arr[i] ;
    }
    Quick_Sort(arr , 0 , size-1) ;
    cout << "The Sorted Array is: " << endl;
    for( int i=0; i < size ; i++ )
    {
        cout << arr[i] << " ";
    }

    cout << "\n" ;

    return 0;
}

