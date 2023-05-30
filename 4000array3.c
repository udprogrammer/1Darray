#include <stdio.h>

main() {
	 	
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
   int sum = 0,i,avg;
   
   for(i=0;i<10;i++) {
      sum = sum + a[i];
   }
   
   avg = sum / i;
   printf("Average of array values is %d", avg);   
   
}
