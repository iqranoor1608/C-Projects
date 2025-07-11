#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<dos.h>
#include<windows.h>
using namespace std;
class hotel
{
	int room_no;
	char id[10];
	char name[30];
	char address[50];
	char phone[20];
	public:
	void main_menu();	//to dispay the main menu
	void add();		//to book a room
	void display();	//to display the customer record
	void rooms();	//to display alloted rooms
	void edit();	//to edit the customer record
	int check(int);	//to check room status
	void modify(int);	//to modify the record
	void delete_rec(int);	//to delete the record
};
 
void hotel::main_menu()
{
	int choice;
	
	while(choice!=5)
	{
		system("cls");
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\t* MAIN MENU *";
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\n\n\t\t\t1:Book A Room";
		cout<<"\n\t\t\t2:Customer Record";
		cout<<"\n\t\t\t3:Rooms Allotted";
		cout<<"\n\t\t\t4:Edit Record";
		cout<<"\n\t\t\t5:Exit";
		cout<<"\n\n\t\t\tEnter Your Choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: add();
					break;
			case 2: display();
					break;
			case 3: rooms();
					break;
			case 4: edit();
					break;
			case 5: system("cls");
			        break;
			default:
					{
						cout<<"\n\n\t\t\tWrong choice!!!";
						cout<<"\n\t\t\tPress any key to continue!!";
						getch();
					}
		}
	}
}
 
void hotel::add()
{
	system("cls");
	int r,flag;
	ofstream fout("Record.dat",ios::app);
	
	cout<<"\n Enter Customer Detalis";
	cout<<"\n **********************";
	cout<<"\n\n Room no: ";
	cin>>r;
	flag=check(r);
	
	if(flag)
		cout<<"\n Sorry..!!!Room is already booked";
	else
	{
		room_no=r;
		cout<<"";
		gets(id);
		cout<<" Name: ";
		gets(name);
		cout<<" Address: ";
		gets(address);
		cout<<" Phone No: ";
		gets(phone);
		fout.write((char*)this,sizeof(hotel));
		cout<<"\n Room is booked!!!";
	}
	
	cout<<"\n Press any key to continue!!";
	getch();
	fout.close();
}
 
void hotel::display()
{
	system("cls");
	ifstream fin("Record.dat",ios::in);
	int r,flag;
	cout<<"\n Enter room no: ";
	cin>>r;
	
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			system("cls");
			cout<<"\n Cusromer Details";
			cout<<"\n ****************";
			cout<<"\n\n Room no: "<<room_no;
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone no: "<<phone;
			flag=1;
			break;
		}
	}
	
	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant!!";
		
	cout<<"\n\n Press any key to continue!!";
	getch();
	fin.close();
}
 
void hotel::rooms()
{
	system("cls");
	ifstream fin("Record.dat",ios::in);
	cout<<"\n\t\t\tList Of Rooms Allotted";
	cout<<"\n\t\t\t*********************";
	cout<<"\n\n Room No.\tName\t\t\tAddress\t\t\tPhone No.\n";
	
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		cout<<"\n\n "<<room_no<<"\t\t"<<name;
		cout<<"\t\t"<<address<<"\t\t"<<phone;
	}
	
	cout<<"\n\n\n\t\t\tPress any key to continue!!";
	getch();
	fin.close();
}
 
void hotel::edit()
{
	system("cls");
	int choice,r;
	
	cout<<"\n EDIT MENU";
	cout<<"\n *********";
	cout<<"\n\n 1.Modify Customer Record";
	cout<<"\n 2.Delete Customer Record";
	
	cout<<"\n Enter your choice: ";
	cin>>choice;
	
	system("cls");
	cout<<"\n Enter room no: ";
	cin>>r;
	
	switch(choice)
	{
		case 1: modify(r);
				break;
		case 2: delete_rec(r);
				break;
		default: cout<<"\n Wrong Choice!!";
	}
	
	cout<<"\n Press any key to continue!!!";
	getch();
}
 
int hotel::check(int r)
{
	int flag=0;
	ifstream fin("Record.dat",ios::in);
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			flag=1;
				break;
		}
	}
	
	fin.close();
	return(flag);
}
 
void hotel::modify(int r)
{
	long pos,flag=0;
	fstream file("Record.dat",ios::in|ios::out|ios::binary);
	
	while(!file.eof())
	{
		pos=file.tellg();
		file.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			cout<<"\n Enter New Details";
			cout<<"\n *****************";
			cout<<"";
			gets(id);
			cout<<"\n Name: ";
			gets(name);
			cout<<" Address: ";
			gets(address);
			cout<<" Phone no: ";
			gets(phone);
			
			file.seekg(pos);
			file.write((char*)this,sizeof(hotel));
			cout<<"\n Record is modified!!";
			flag=1;
			break;
		}
	}
	
	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant!!";
		
	file.close();
}
 
void hotel::delete_rec(int r)
{
	int flag=0;
	char ch;
	ifstream fin("Record.dat",ios::in);
	ofstream fout("temp.dat",ios::out);
	
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Pone No: "<<phone;
			cout<<"\n\n Do you want to delete this record(y/n): ";
			cin>>ch;
			
			if(ch=='n')
			fout.write((char*)this,sizeof(hotel));
			
			flag=1;
		}
		else
			fout.write((char*)this,sizeof(hotel));
	}
	
	fin.close();
	fout.close();
	
	if(flag==0)
		cout<<"\n Sorry room no. not found or vacant!!";
	else
	{
		remove("Record.dat");
		rename("temp.dat","Record.dat");
	}
}
 
int main()
{
	hotel h;
	system("cls");
	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t* HOTEL MANAGEMENT PROJECT *";
	cout<<"\n\t\t\t****************************";
	Sleep(1000);
	cout<<"\n\n\n\n\t\t MADE BY:";
	Sleep(1000);
	cout<<"  IQRA NOOR  ";
	Sleep(1000);
	cout<<"\n\n\n\n\n\t\t\t\t Press any key to continue!!";
	getch();
	h.main_menu();
	return 0;
}
