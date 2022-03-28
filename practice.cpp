#include <iostream>
using namespace std;
int main()
{
    int array[5], *max, *min, i; //pointer variables declared for max and min

    cout<<"Enter 5 numbers: ";
    for ( i = 0 ; i < 5 ; i++ )
    cin>>array[i];
    max = array; //assigning max pointer to the address of the first element
    min = array; //assigning min pointer to the address of the first element
    for (i = 0; i < 5; i++)
    {
    //Finding the largest element in the array
    if (*(array+i) > *max)//check if the value stored at array+i is greater than value stored at max
        *max = *(array+i);
    }
    cout<<"Maximum Number : "<< *max << "\n" ;
    for (i = 0; i < 5; i++)
    {
    //Finding the smallest element in the array
    if (*(array+i) < *min)//check if the value stored at array+i is lesser than value stored at min
        *min = *(array+i);
    }
    cout<<"Minimum Number : "<< *min <<"\n";
    return 0;
}