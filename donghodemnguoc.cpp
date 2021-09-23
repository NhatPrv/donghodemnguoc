#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main (int argv, char** argc)  {
	int t,mode,h,m,s,i,s1,m1,h1;
	cout << "DEMO DONG HO DEM NGUOC ";
	sleep(2);
	system("cls");
	cout << "Moi ban chon 1 che do: " << endl;
	cout << "   1. hour:Minute:second " <<endl;
	cout << "   2. minute:second " <<endl;
	cout << "   3. second " <<endl;
	cout << " Che do: ";
	cin >> mode;
	
	if (mode==3)
	{
		cout << "Da chon che do 3. second ";
		sleep(2);
		system("cls");
		cout << "Nhap thoi gian can dem nguoc: ";
		cin >> s;
		sleep(1);
		system("cls");
		for(i=s;i>=0;i--)
		{
			cout << "Dang dem nguoc..." <<endl;		
			cout << "   "<< i << "s";
			sleep(1);
			system("cls");
		}
		cout << "TIME UP!" <<endl;
		cout << "Bam Enter de thoat... ";
	}
	
	else if (mode==2)
	{
		cout << "Da chon che do 2. minute:second ";
		sleep(2);
		system("cls");
		cout << "Nhap thoi gian can dem nguoc: " <<endl;
		cout << "Nhap so phut: ";
		cin >> m;
		cout << "Nhap so giay: ";
		cin >> s;
		sleep(1);
		system("cls");
		t=60*m+s;
		while(true)
		{
			i=t;
			while(i>=0)
			{
				m1=i/60;
				s1=i-60*m1;
				cout << "Dang dem nguoc..." <<endl;
				cout << "   " << m1 << "m" << s1 << "s";
				sleep(1);
				system("cls");
				i--;
			}
			cout << "TIME UP!" <<endl;
			cout << "Bam Enter de thoat...";
			break;
		}
		
	}
	else if (mode==1)
	{
		cout << "Da chon che do 1. hour:minute:second ";
		sleep(2);
		system("cls");
		cout << "Nhap thoi gian can dem nguoc: " <<endl;
		cout << "Nhap so gio: ";
		cin >> h;
		cout << "Nhap so phut: ";
		cin >> m;
		cout << "Nhap so giay: ";
		cin >> s;
		sleep(1);
		system("cls");
		t = 3600*h + 60*m +s;
		while(true)
		{
			i=t;
			while(i>=0)
			{
				h1=i/3600;
				m1=(i-3600*h1)/60;
				s1=i-(60*m1+h1*3600);
				cout << "Dang dem nguoc..." <<endl;
				cout << "   " << h1 << "h" << m1 << "m" << s1 << "s";
				sleep(1);
				system("cls");
				i--;
			}
			cout << "TIME UP!" <<endl;
			cout << "Bam Enter de thoat...";
			break;
		}
	}
	return 0;
}
