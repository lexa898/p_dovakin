#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "customrandom.h"
#include <iostream>
using namespace std;
int main() 
{
	char c;
setlocale(LC_ALL,"rus");
while (1)
  { system("cls");
    puts("  1 - ������");
    puts("  2 - �������� � ���������� � ����");
    puts("  3 - �����");
    c=getch();
    switch(c)
    { case '1': {

   Random();
 
int a1=0,a2=0,a3=0,a4=0;
printf ("��������� ���������� ����� , ������� ����� �� 0 �� 9 **** \n");


int chek=0; 
while (chek==0)
{
printf ("������� ����� �� 0 �� 9\n");
scanf ("%d%d%d%d",&a1,&a2,&a3,&a4);

int sum=0;  // ���� ���� , �������� �� ����� � �������
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
	     printf ("�� ��������");
         chek=1;
         getch();
        }
	else
	printf ("\n%d ����\n", sum);
	
    if(a2== zagadannoe_chislo[1]||a3== zagadannoe_chislo[1]||a4 == zagadannoe_chislo[1])
     	sum2++;
    if(a1== zagadannoe_chislo[2]||a3== zagadannoe_chislo[2]||a4 == zagadannoe_chislo[2]) 
     	sum2++;
    if(a1== zagadannoe_chislo[3]||a2== zagadannoe_chislo[3]||a4 == zagadannoe_chislo[3])
     	sum2++;
    if(a1== zagadannoe_chislo[4]||a2== zagadannoe_chislo[4]||a3== zagadannoe_chislo[4])
     	sum2++;
     	
		 if (chek==0)		
     	printf ("%d �����\n", sum2);
     	
}
break;
     	return(0);
     	getch();
}
      case '2': {cout<<"	 ���� ���������� ���� � ������. ���� ���� ������� � ���, ����� �������� 4-� ������� ����� � ���������������� �������, ���������� �����������. \n"; 
	  			 cout<<"	 ����� � ���� ������ ����� ""������"", �������� ���� ��� ��� ����� ���������� ������ 4 ��������������� ����������� ����� �� 0 �� 9.";
				 cout<<" ���� �������������� �� ����� ����� � �������� ������� ""Enter"" �� ���������� ���� ����� ����� ������ ����� �������� ������� ������. ����� 4-� �������� ���� ����";
				 cout<<"��������� ������� ���������, ������� ����� � �����.\n ���� - ����� ����������� � �� �������� � �� ������� � �����. ������ - ����� ����������� ������ �� ��������, �� ������� �� �������� �������. ���� ������ ���������� ���� �� ������, �� ��� ���������� ���������� ������� ����� ��������� ���� ��������, ���� �� ������� ��������� � ���, �� ����� �������.\n"; 
				 cout<<"��� ���������� ������ �� ���� ���������� ������ ��������� ������ CTRL+C.\n ��� ������ � ������� ���� ������� ENTER";   
	  getch(); break;  }  
      case '3': return 0;
      default : puts(" �������� �����");
     }}
 
  getch();
return 0;
}
  










