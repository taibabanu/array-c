#include <stdio.h>
int main()    
{    
    int arr[] = {21,76,98,54,34};      
    int length = sizeof(arr)/sizeof(arr[0]);    
    int min = arr[0];    
    for (int i = 0; i < length; i++)
    {     
       if(arr[i] < min)    
           min = arr[i]; 
    }      
    printf("Smallest element  in given array: %d\n", min);    
    return 0;    
}    
