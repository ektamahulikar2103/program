#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i=1;
clrscr();
while(i<=25)
{
textcolor(YELLOW);
delay(100);
gotoxy(1,i);
cprintf("*");
i++;
}
i=2;
while(i<=80)
{
textcolor(YELLOW);
delay(100);
gotoxy(i,25);
cprintf("*");
i++;
}
i=24;
while(i>=1)
{
textcolor(YELLOW);
gotoxy(80,i);
delay(100);
cprintf("*");
--i;
}
i=79 ;
while(i>=1)
{
textcolor(YELLOW);
gotoxy(i,1);
delay(100);
cprintf("*");
--i;
}
 i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,2);
cprintf("*");
i++;
}    i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,3);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,4);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,5);
delay(100);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,6);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,7);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,8);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,9);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,10);
cprintf("*");
i++;
}i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,11);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
delay(100);
gotoxy(i,12);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,13);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,14);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,15);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,16);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,17);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,18);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,19);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,20);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,21);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,22);
cprintf("*");
i++;
}
i=2;
while(i<=79)
{
textcolor(i);
gotoxy(i,23);
cprintf("*");
i++;
}
getch();

}

