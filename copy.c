#include <stdio.h>
int main()    
{    
    int arr1[] = {4,6,8,3,2};    
    int length = sizeof(arr1)/sizeof(arr1[0]);      //Calculate length of array arr1   
    int arr2[length];  //Create another array is the name arr2 with the size of arr1.   
    //Copying all elements of one array into another    
    for (int i = 0; i < length; i++) {     
        arr2[i] = arr1[i];     
    }      
    //Displaying elements of array arr1     
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr1[i]);    
    }    
    printf("\n");    
    //Displaying elements of array arr2     
    printf("Elements of new array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr2[i]);    
    }    
    return 0;    
}    


