#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int zagadannoe_chislo [4];

void Random()
{
	srand(time(NULL));
	for (int i=0; i<4; i++) 
	{   // cikl zapolneniya Randomom
	
		int rand_zapolnenie = 0 + rand() %9;  // Random 
		int check=0;
		
		while (check==0) 
		{
			int count=0;
			
			for (int j=0; j<i; j++) 
			{
				if (rand_zapolnenie!=zagadannoe_chislo [j])
			    	count++;
			}	
			
			if (count == i) 
			{
			  zagadannoe_chislo [i] = rand_zapolnenie ;
			  check=1;
			}
			else 
			{
				rand_zapolnenie = 0 + rand() %9;  // Random again
			}
		}
		
	
	
	  printf ("%d " ,  zagadannoe_chislo [i] ) ;	 // Это строка для теста что все числа разные. Алгоритм работает нормально
		
	}
		
}


	

