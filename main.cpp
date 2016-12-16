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
	printf ("Введите цифры от 0 до 9\n");
	do
	{
		flag = false;
		int prov;
		for (int i = count; i < 4; ++i) // Заполнение массива
		 {
		  int num = 0;
		  std::cin >> num;
		  array[i] = num;
		 }
		for (int i=count; i<4; i++) 
		{   
			count=i;// сохраняем индекс последнего обработаного элемента
			if(array[i]<=9&&array[i]>=0)
			{
				
				for (int j=0; j<i; j++)	
				{
					if(array[i]==array[j]) // нашли первый повторяющийся элемент
					{
						flag=true;
						break;
					}
				}
				if(flag) break;		
			}
			else 
			{
				printf("\nСерьёзно? От 0 до 9 Карл!!\n");
				flag=true;
				break;
			}
		}	
		
		if(flag) // если нашли повторяющийся элемент
		{
			printf("\nНе надо так\n");
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
	    puts("  1 - Играть");
	    puts("  2 - Описание и инструкция к игре");
	    puts("  3 - Выход");
	    c=getch();
	    switch(c)
	    { case '1': {

  			Random();
 			printf ("Отгадайте задуманное число \n");		
			int repeat=0;
			int chek=0; 

while (chek==0)
{
	proverka();
	printf ("\n");
	repeat++;
	int sum=0;  // блок кода , проверка на быков и коровок
	int sum2=0;
	for(int i=0;i<4;i++)
	{
		if (array[i]==zagadannoe_chislo[i]) // проверка быков
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
	     printf ("Вы отгадали, число попыток %d", repeat);
         chek=1;
         getch();
    }
    else
    {
    printf ("%d корова\n", sum2);
	printf ("%d бык\n\n", sum);
	}
		}
break;
     	return(0);
     	getch();
}
      case '2': {cout<<"	 Игра называется быки и коровы. Суть игры состоит в том, чтобы отгадать 4-х значное число с неповторяющимися цифрами, загаданное компьютером. \n"; 
	  			 cout<<"	 Когда в меню нажмёте пункт ""Играть"", появится окно где Вам будет предложено ввести 4 неповторяющихся однозначных цифры от 0 до 9.";
				 cout<<" Ввод осуществляется по одной цифре и нажатием клавиши ""Enter"" на клавиатуре либо после ввода каждой цифры нажатием клавиши Пробел. После 4-х введённых Вами цифр";
				 cout<<"компьютер покажет результат, сколько быков и коров.\n Быки - цифры совпадающие и по значению и по позиции в числе. Коровы - цифры совпадающие только по значению, но стоящие на неверной позиции. Если хотите продолжить игру до победы, то Вам необходимо продолжать вводить цифры указанным выше способом, пока не повится сообщение о том, то число угадано.\n"; 
				 cout<<"Для досрочного выхода из игры необходимо нажать сочетание клавиш CTRL+C.\n Для выхода в Главное меню нажмите ENTER";   
	  getch(); break;  }  
      case '3': return 0;
      default : puts(" неверный режим");
    	 }
 }
 
  getch();
return 0;
}
  









