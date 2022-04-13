#include <stdio.h>
// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
	int sum = 0; // initialize sum
	for (int i = 0; i < n; i++)	// Iterate through all elements       // 0<n
	sum += arr[i];	// and add them to sum                             //0+=3=3
	return sum;                                                        //3+=8=11
}                                                                       //11+=9=20
int main()                                                                //20+=5=25
{                                                                           //25+=7=32
	int arr[]= {3,8,9,5,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Sum of given array is %d", sum(arr, n));
	return 0;
}

