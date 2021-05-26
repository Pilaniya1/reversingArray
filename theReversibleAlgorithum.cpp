#include<bits/stdc++.h>

using namespace std;

/*Function to reverse arr[] for index start to end */
void reversearray(int arr[],int Start, int End){

    while(Start<End){
        int temp=arr[Start];
        arr[Start]=arr[End];
        arr[End]= temp;
        Start ++;
        End--;


    }
}
/*Function to Left rotate arr[]  of size n by d */ 
void leftrotate(int arr[],int d,int n)
{
    if(d==0)
    return;
    //incase the rotating factor is greater than array length//
    d=d%n;
    reversearray(arr,0,d-1);
    reversearray(arr,d,n-1);
    reversearray(arr,0,n-1);

}
//Function to print an array 
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}


/*Driver program to test above functions*/
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    //function calling 
    leftrotate (arr,d,n);
    
    printArray(arr,n);

    return 0;
}