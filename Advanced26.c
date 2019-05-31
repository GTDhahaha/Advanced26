#include <stdio.h> 
#include<conio.h>

int main(void){ 
int i; 

printf("All possible outcomes:\n"); 
for (i=0;i<10000;i++) 
if (i%3==2 && i%7==2 && i%11==2) 
{printf("%d\n",i); }
getch(); 
return 0; 
} 
