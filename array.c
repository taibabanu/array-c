#include <stdio.h>  
int main()  
{  
    int arr[] = {1, 2, 3, 4, 5};   //Initialize array  
    int sum = 0;  
    int length = sizeof(arr)/sizeof(arr[0]);  //Calculate length of array  
      
    //Loop through the array to calculate sum of elements  
    for (int i = 0; i < length; i++) {   
       sum = sum + arr[i];  
    }    
    printf("Sum of all the elements of an array: %d", sum);  
    return 0;  
}  

