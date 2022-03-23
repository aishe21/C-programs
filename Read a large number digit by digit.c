// C program to read a large number digit by digit
#include <stdio.h>
int main()
{
    // array to store digits
    int a[100000];
    int i, count;
    scanf("%d", &count);
    for (i = 0; i < count; i++) {
  
        // %1d reads a single digit
        scanf("%3d", &a[i]);
    }
  
    for (i = 0; i < count; i++) 
        printf("%d ", a[i]);
      
    return 0;
}
