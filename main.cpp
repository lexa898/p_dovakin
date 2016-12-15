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
    puts("  1 - Играть");
    puts("  2 - Описание и инструкция к игре");
    puts("  3 - Выход");
    c=getch();
    switch(c)
    { case '1': {

   Random();
 
int a1=0,a2=0,a3=0,a4=0;
printf ("Отгадайте задуманное число , введите цифры от 0 до 9 **** \n");


int chek=0; 
while (chek==0)
{
printf ("Введите цифры от 0 до 9\n");
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
         getch();
        }
	else
	printf ("\n%d быка\n", sum);
	
    if(a2== zagadannoe_chislo[1]||a3== zagadannoe_chislo[1]||a4 == zagadannoe_chislo[1])
     	sum2++;
    if(a1== zagadannoe_chislo[2]||a3== zagadannoe_chislo[2]||a4 == zagadannoe_chislo[2]) 
     	sum2++;
    if(a1== zagadannoe_chislo[3]||a2== zagadannoe_chislo[3]||a4 == zagadannoe_chislo[3])
     	sum2++;
    if(a1== zagadannoe_chislo[4]||a2== zagadannoe_chislo[4]||a3== zagadannoe_chislo[4])
     	sum2++;
     	
		 if (chek==0)		
     	printf ("%d коров\n", sum2);
     	
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
     }}
 
  getch();
return 0;
}
  










