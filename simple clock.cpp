#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD pos ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    
}

int main()
{
	system("color 02");
	int h,m,s,a,err;
	int c;
	cout << "Press 1 if you want clock " << endl;
	cout << "Press 2 if you want timer"  << endl;
	cin >> c;
	err = a = 0;
	while(err==0)
	{
		
		cout << "enter hour : " << endl;
		cin >> h;
		cout << "enter minutes : " << endl;
		cin >> m;
		cout << "enter seconds : " << endl;
		cin >> s;
		
		if(h<24 && m<60 && s<60) err++;
		else system("cls");
			
	}
	
	if(c==1)
	{
	while(a==0)
	{
		system("cls");
		gotoxy(30,2);
		cout << h << " : " << m << " : " << s << endl;
		Sleep(1000);
		s++;
		
		if(s>59)
		{
			s=0; 
			m++;
		} 
		if(m>59)
		{
			 m=0; 
			 h++;
		}
		if(h>23) h=0;  
		
	}
    }
    
    
	else if(c==2)
	{
	while(a==0)
	{
		system("cls");
		gotoxy(30,2);
		cout << h << " : " << m << " : " << s << endl;
		Sleep(1000);
		s--;
		
		if(s<0)
		{
			s=59; 
			m--;
		} 
		if(m<0)
		{
			 m=59; 
			 h--;
		}
		if(h<0) h=23;  
		
	}
    }
    
    else cout << "Please select valid option " << endl;
	
	return 0;
}
