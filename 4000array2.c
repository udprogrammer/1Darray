#include<stdio.h>
 
main()
{
 
    int length; 
    int a[] = { 1, 2, 3, 4, 5 };
   
    length = sizeof(a) / sizeof(a[0]);
 
    printf("The length of the array is: %d", length);
 
}
