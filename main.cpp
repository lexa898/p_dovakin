#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "customrandom.h"
#include <iostream>
using namespace std;

int array[4];
void proverka()
{
	int count = 0;bool flag;
	printf ("������� ����� �� 0 �� 9\n");
	do
	{
		flag = false;
		int prov;
		for (int i = count; i < 4; ++i) // ���������� �������
		 {
		  int num = 0;
		  std::cin >> num;
		  array[i] = num;
		 }
		for (int i=count; i<4; i++) 
		{   
			count=i;// ��������� ������ ���������� ������������ ��������
			if(array[i]<=9&&array[i]>=0)
			{
				
				for (int j=0; j<i; j++)	
				{
					if(array[i]==array[j]) // ����� ������ ������������� �������
					{
						flag=true;
						break;
					}
				}
				if(flag) break;		
			}
			else 
			{
				printf("\n��������? �� 0 �� 9 ����!!\n");
				flag=true;
				break;
			}
		}	
		
		if(flag) // ���� ����� ������������� �������
		{
			printf("\n�� ���� ���\n");
			for(int i=0;i<count;i++)
			{
				printf("%d ",array[i]);
			}
		}
	}while(flag==true);
	
}
	


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
 			printf ("��������� ���������� ����� \n");		
			int repeat=0;
			int chek=0; 

while (chek==0)
{
	proverka();
	printf ("\n");
	repeat++;
	int sum=0;  // ���� ���� , �������� �� ����� � �������
	int sum2=0;
	for(int i=0;i<4;i++)
	{
		if (array[i]==zagadannoe_chislo[i]) // �������� �����
	   	sum++;
	   	else
		{
			for(int j=0;j<4;j++)
    			if(i!=j&&zagadannoe_chislo[i]==array[j])
				{
     				sum2++;
     				break;
     			}		
     	}
 	}
 	if (sum==4)
    {
	     printf ("�� ��������, ����� ������� %d", repeat);
         chek=1;
         getch();
    }
    else
    {
    printf ("%d ������\n", sum2);
	printf ("%d ���\n\n", sum);
	}
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
    	 }
 }
 
  getch();
return 0;
}
  









