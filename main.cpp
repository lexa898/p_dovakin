#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "customrandom.h"

#include <iostream>
   
int main() 
{
setlocale(LC_ALL,"rus");

Random();
 
int a1=0,a2=0,a3=0,a4=0;
printf ("Отгадайте задуманное число , введите цифры от 0 до 9 **** \n");


int chek=0; 
while (chek==0)
{

scanf ("%d%d%d%d",&a1,&a2,&a3,&a4);

int sum=0;  // блок кода , проверка на быков и коровок
int sum2=0;

	if (a1==zagadannoe_chislo[1]) 
	   sum++;
	if  (a2==zagadannoe_chislo[2]) 
	   sum++;
    if  (a3==zagadannoe_chislo[3]) 
	   sum++;   
    if  (a4==zagadannoe_chislo[4]) 
	   sum++; 
	if (sum==4)
    	{
	     printf ("вы отгадали");
         chek=1;
        }
	else
	printf ("%d быка\n", sum);
	
    if(a2== zagadannoe_chislo[1]||a3== zagadannoe_chislo[1]||a4 == zagadannoe_chislo[1])
     	sum2++;
    if(a1== zagadannoe_chislo[2]||a3== zagadannoe_chislo[2]||a4 == zagadannoe_chislo[2]) 
     	sum2++;
    if(a1== zagadannoe_chislo[3]||a2== zagadannoe_chislo[3]||a4 == zagadannoe_chislo[3])
     	sum2++;
    if(a1== zagadannoe_chislo[4]||a2== zagadannoe_chislo[4]||a3== zagadannoe_chislo[4])
     	sum2++;
     	
		 if (chek==0)		
     	printf ("%d коров", sum2);
       	

}
getch ();
return 0;
}












