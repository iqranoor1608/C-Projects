#include<fstream>
#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;


class student
{
	int rollno;
	char name[50];
	int p_marks, c_marks, m_marks, e_marks, cs_marks;
	float per;
	char grade;
	void calculate();	
public:
	void getdata();		
	void showdata();	
	void show_tabular();
	int retrollno();
}; 


void student::calculate()
{
	per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
	if(per>=70)
		grade='A';
	else if(per>=60)
		grade='B';
	else if(per>=50)
		grade='C';
	else
		grade='F';
}

void student::getdata()
{
	cout<<"\nEnter The roll number of student :\t\t ";
	cin>>rollno;
	cout<<"\n\nEnter The Name of student      :\t\t ";
	cin>>name;
	cout<<"\n\n\n\n\t\t\t\t\t\t\t::NOTE TOTAL MARKS ARE 100::\t\t\t\n\n\n\n";
	cout<<"\n\nEnter The marks in OOP                 :\t ";
	cin>>p_marks;
	cout<<"\n\nEnter The marks in Communication Skills:\t ";
	cin>>c_marks;
	cout<<"\n\nEnter The marks in  Project            :\t";
	cin>>m_marks;
	cout<<"\n\nEnter The marks in Networking          :\t ";
	cin>>e_marks;
	cout<<"\nEnter The marks in entrepenureship       :\t ";
	cin>>cs_marks;
	calculate();
}

void student::showdata()
{
	cout<<"\n\n\t\t\t::STUDENT DETAILS::\t\t\t";
	cout<<"\n\n\t\tRoll Number          :\t"<<rollno;
	cout<<"\n\n\t\tNAME                 :\t"<<name;
	cout<<"\n\n\t\tPROGRAMMING          :\t"<<p_marks;
	cout<<"\n\n\t\tCOMMUNICATION SKILLS :\t"<<c_marks;
	cout<<"\n\n\t\tPROJECT              :\t"<<m_marks;
	cout<<"\n\n\t\tNETWORKING           :\t"<<e_marks;
	cout<<"\n\n\t\tENTREPRENURSHIP      :\t"<<cs_marks;
	cout<<"\n\n\t\t\t\tPERCENTAGE       :\t"<<per;
	cout<<"\n\n\t\t\t\tGRADE            :\t"<<grade;
}

void student::show_tabular()
{
	cout<<rollno<<setw(7)<<" "<<name<<setw(8)<<p_marks<<setw(15)<<c_marks<<setw(15)<<m_marks<<setw(10)
		<<e_marks<<setw(17)<<cs_marks<<setw(17)<<per<<setw(7)<<" "<<grade<<endl;
}

int  student::retrollno()
{
	return rollno;
}



void write_student();	
void display_all();	
void display_sp(int);	
void modify_student(int);	
void delete_student(int);	
void class_result();	
void result();		
void intro();		
void entry_menu();	



int main()
{
	char ch;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(3);
	
	intro();
	do
	{
		cout<<"\n\n\n\t\t\t\t\t\tMAIN MENU";
		cout<<"\n\n\t01. RESULT MENU";
		cout<<"\n\n\t02. ENTRY/EDIT MENU";
		cout<<"\n\n\t03. EXIT";
		cout<<"\n\n\t\t\tPlease Select Your Option ";
		cin>>ch;
		switch(ch)
		{
			case '1': 
			    result();
				break;
			case '2': 
			    entry_menu();
				break;
			case '3':
				break;
			default :cout<<"\a";
		}
    	}while(ch!='3');
	return 0;
}


void write_student()
{
	student st;
	ofstream outFile;
	outFile.open("student.dat",ios::binary|ios::app);
	st.getdata();
	outFile.write((char *) &st, sizeof(student));
	outFile.close();
    	cout<<"\n\n\t\t\t\t\t\t::Student record Has Been Created::\n\n";
	cin.ignore();
}


void display_all()
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\n\t\t\t\t\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read((char *) &st, sizeof(student)))
	{
		st.showdata();
		cout<<"\n\n=============================================================================\n";
	}
	inFile.close();
}


void display_sp(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}

	int flag=0;
	while(inFile.read((char *) &st, sizeof(student)))
	{
		if(st.retrollno()==n)
		{
			 st.showdata();
			 flag=1;
		}
	}
	inFile.close();
	if(flag==0)
		cout<<"\n\nrecord not exist";
}


void modify_student(int n)
{
	int found=0;
	student st;
	fstream File;
	File.open("student.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(File.read((char *) &st, sizeof(student)) && found==0)
	{
		if(st.retrollno()==n)
		{
			st.showdata();
			cout<<"\n\n\t\tPlease Enter The New Details of student"<<endl;
			st.getdata();
		    	int pos=(-1)*sizeof(st);
		    	File.seekp(pos,ios::cur);
		    	File.write((char *) &st, sizeof(student));
		    	cout<<"\n\n\t\t Record Updated";
		    	found=1;
		}
	}
	File.close();
	if(found==0)
		cout<<"\n\n\t\t Record Not Found ";
}


void delete_student(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read((char *) &st, sizeof(student)))
	{
		if(st.retrollno()!=n)
		{
			outFile.write((char *) &st, sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	cout<<"\n\n\tRecord Deleted ..";
	
}


void class_result()
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tALL STUDENTS RESULT \n\n";
	cout<<"=====================================================================================================================\n";
	cout<<"R.No       Name        Programming   CommunicationSkill  Project   Networking   Entreprenurship   Percentage   Grade"<<endl;
	cout<<"=====================================================================================================================\n";
	while(inFile.read((char *) &st, sizeof(student)))
	{
		st.show_tabular();
	}
	inFile.close();
}


void result()
{
	char ch;
	int rno;
	cout<<"\n\n\n\t\t\t\tRESULT MENU";
	cout<<"\n\n\n\t1. Class Result";
	cout<<"\n\n\t2. Student Report Card";
	cout<<"\n\n\t3. Back to Main Menu";
	cout<<"\n\n\n\tEnter Choice ";
	cin>>ch;
	switch(ch)
	{
	case '1' :
	        class_result(); 
	        break;
	case '2' :
	      cout<<"\n\n\tEnter Roll Number Of Student : ";
		  cin>>rno;
		  display_sp(rno); 
		  break;
	case '3' :
	      break;
	default :
	       cout<<"\a";
	}
}


void intro()
{
	cout<<"\n\n\n\t\t\t\t\t\t\t\t  STUDENT";
	cout<<"\n\n\t\t\t\t\t\t\t\tREPORT CARD";
	cout<<"\n\n\t\t\t\t\t\t\t\t  PROJECT";
	cout<<"\n\n\n\t MADE BY    :\tMuhammad Zeeshan Janjua\n\t\t\t\t & \n\t\t\tSyed Akhtar Abbas";
	cout<<"\n\n\n\tSubmitted to:\tProf.Fareeha Rubab\n\t\t\t\t & \n\t\t\tProf.Muhammad Usman ";
	cout<<"\n\n\t\t\t\t\tUniversity Of Central Punjab";
}


void entry_menu()
{
	char ch;
	int num;
	cout<<"\n\n\n\tENTRY MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout<<"\n\n\t3.SEARCH STUDENT RECORD ";
	cout<<"\n\n\t4.MODIFY STUDENT RECORD";
	cout<<"\n\n\t5.DELETE STUDENT RECORD";
	cout<<"\n\n\t6.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice ";
	cin>>ch;
	switch(ch)
	{
	case '1':	write_student(); 
	            break;
	case '2':	display_all(); 
	            break;
	case '3':	cout<<"\n\n\tPlease Enter The roll number "; 
	            cin>>num;
			    display_sp(num); break;
	case '4':	cout<<"\n\n\tPlease Enter The roll number "; 
	            cin>>num;
			    modify_student(num);
				break;
	case '5':	
	        cout<<"\n\n\tPlease Enter The roll number "; 
	        cin>>num;
			delete_student(num);
			break;
	case '6':	
	break;
	default:	
	cout<<"\a"; entry_menu();
	}
}

 
