#include <stdio.h>
int maximum(int arr[], int n)                                      //n=5
{
    int i;
    int max =0;// Initialize maximum element                       //max=0 ; 8, 9, 65; 
    for (i=0; i < n; i++)                                           //8>0
        if (arr[i] > max)                                           //9>8
            max = arr[i];                                            //65>9
    return max;                                                      //5>65 come out the loop
}                                                                    //4>65 come out the loop

int main()
{
    int arr[] = {8,9,65,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest element in given array is %d", maximum(arr, n));
    return 0;
}

