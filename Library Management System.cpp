#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
class LibraryManagementSystem
{
	private:
		int b_no[6];
		char b_name[30];
		char a_name[30];
		int adm_no[6];
		char std_fname[215];
		char std_lname[15];
		char std_class;
		int std_rollno[6];
		int stb_no[6];
		string issue_date;
		string return_date;
		int token;
		int c,a,b,d,e;
		int choice;
		int searchkey;
		public:
			LibraryManagementSystem()
			{
				cout<<"\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\t\t\t"<<endl;
				cout<<"\n\t\t\t\t WELCOME TO THE LIBRARY MANAGEMENT SYSTEM \t\t\t\t\n"<<endl;
				cout<<"\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\t\t\t"<<endl;
			}
			void show()
			{
				cout<<"\t\t\t	%%%%%% GO TO MAIN PAGE %%%%%%%	"<<endl;
				cout<<"1.	BOOK INFORMATION.  "<<endl;
				cout<<"2.	STUDENT INFORMATION.  "<<endl;
				cout<<"3.	ADMINISTRATION INFORMATION.  "<<endl;
			
			}
			
			char createbook()
			{
				cout<<"\n NEW BOOK ENTRY "<<endl;
				cout<<"\n YOU ENTER THE BOOK NO. "<<endl;
				cin>>b_no[6];
				cout<<"\n ENTER THE BOOK NAME. "<<endl;
				gets(b_name);
				cout<<"\n ENTER THE AUTHOR NAME. "<<endl;
				gets(a_name);
			}
	
			void report()
			{
				cout<<b_no<<setw(30)<<b_name<<setw(30)<<a_name<<endl;
			}
			char bookdetail()
			{
				cout<<"\t\t\t	%%%%%%%%%%%% WELCOME TO THE BOOK INFO %%%%%%%%%%%%	\t\t\t"<<endl;
				cout<<"1.	MEDICAL BOOKS. "<<endl;
				cout<<"2.	CS BOOKS. "<<endl;
				cout<<"3.	NOVELS. "<<endl;
				cout<<"4	POLITICAL BOOKS. "<<endl;
				cout<<"5	PHILOSoPHY BOOKS. "<<endl;
			}
				char getmedicalbookdetail()
				{
						cout<<"MEDICAL BOOKS DETAIL. "<<endl;
						cout<<"1.	ANATOMY."<<endl;
						cout<<"2.	Human Physiology."<<endl;
						cout<<"3.	Medical Biochemistry."<<endl;
						cout<<"4.	Human Genetics."<<endl;
						cout<<"5.	Medical Ehics."<<endl;
						cout<<"6.	General pathology."<<endl;
						cout<<"7.	Pharmacology."<<endl;
						cout<<"8.	Community Medicine."<<endl;
						cout<<"9.	Ophthalmology."<<endl;
						cout<<"10.	Special/Systematic Pythalogy."<<endl;
						cout<<"11.	Internal Medicine."<<endl;
						cout<<"12.	Cardiology."<<endl;
						cout<<"13.	Hematology."<<endl;
						cout<<"14.	Hepatology. "<<endl;
						cout<<"15.	Neurology "<<endl;
						cout<<"16.	Pulmonology."<<endl;
						cout<<"17.	Dermatology."<<endl;
						cout<<"18.	Nephrology."<<endl;		
						cout<<"19.	Critical Care Medicine."<<endl;		
						cout<<"What Want To Read That Book. "<<endl;
						cin>>c;
						if(c == 1)
						{
							cout<<"	ANATOMY. "<<endl;
						}
						else if(c == 2)
						{
							cout<<"	Human Physiology. "<<endl;
						}
						else if(c ==3)
						{
						cout<<"	Medical Biochemistry. "<<endl;
					    }
					    else if(c == 4)
					    {
					    	cout<<"	Human Genetics. "<<endl;
						}
						else if(c == 5)
						{
							cout<<"	Medical Ehics. "<<endl;
						}
						else if(c == 6)
						{
							cout<<"	General pathology. "<<endl;
						}
						else if(c == 7)
						{
							cout<<"	Pharmacology. "<<endl;
						}
						else if(c == 8)
						{
							cout<<"	Community Medicine. "<<endl;
						}
						else if(c == 9)
						{
							cout<<"	Ophthalmology. "<<endl;
						}
						else if(c == 10)
						{
							cout<<"	Special/Systematic Pythalogy. "<<endl;
						}
						else if(c == 11)
						{
							cout<<"	Internal Medicine. "<<endl;				
						}
						else if(c == 12)
						{
							cout<<"	Cardiology. "<<endl;
						}
						else if(c == 13)
						{
							cout<<"	Hematology. "<<endl;
						}
						else if(c == 14)
						{
							cout<<"	Hepatology. "<<endl;
						}
						else if(c == 15)
						{
							cout<<"	Neurology. "<<endl;
						}
						else if(c == 16)
						{
							cout<<"	Pulmonology. "<<endl;
						}
						else if(c == 17)
						{
							cout<<"	Dermatology. "<<endl;
						}
						else if(c == 18)
						{
							cout<<"	Nephrology. "<<endl;
						}
						else if(c ==19)
						{
							cout<<"	Critical Care Medicine. "<<endl;
						}
						else
						{
							cout<<"	NOT AVAILABLE IN THIS LIBRARY."<<endl;
					}
				}
					char getCSbookdetail()
					{
							cout<<"	CS BOOKS DETAIL. "<<endl;
							cout<<"1.	JAVA 1. "<<endl;
							cout<<"2.	Get Programing."<<endl;
							cout<<"3.	Introductions To Algorithms."<<endl;
							cout<<"4.	The Art Of Computer Programing."<<endl;
							cout<<"5.	Graphics Shaders."<<endl;
							cout<<"6.	Computer Organization and designs."<<endl;
							cout<<"7.	Programing in ANSI."<<endl;
							cout<<"8.	Law For Computing Students. "<<endl;
							cout<<"9.	JAVA 3 Object Oriented Programing."<<endl;
							cout<<"10.	CODE 2 Complete."<<endl;
							cout<<"11.	Quantum Computing For Everone."<<endl;
							cout<<"12.	Calculus."<<endl;
							cout<<"13.	Accounting For Management."<<endl;
							cout<<"14.	Introduction For Computing."<<endl;
							cout<<"15.	Communities Of Computing."<<endl;
							cout<<"WHAT WANT TO READ THAT BOOK. "<<endl;
							cin>>a;
							if(a == 1)
							{
								cout<<"	JAVA 1. "<<endl;
							}
							else if(a == 2)
							{
									cout<<"	Get Programing. "<<endl;
							}
							else if(a == 3)
							{
									cout<<"	Introductions To Algorithms. "<<endl;
							}
							else if(a == 4)
							{
									cout<<"	The Art Of Computer Programing. "<<endl;
							}
							else if(a == 5)
							{
									cout<<"	Graphics Shaders. "<<endl;
							}
							else if(a == 6)
							{
									cout<<"	Computer Organization and designs. "<<endl;
							}
							else if(a == 7)
							{
									cout<<"	Programing in ANSI. "<<endl;
							}
							else if(a == 8)
							{
									cout<<"	Law For Computing Students. "<<endl;
							}
							else if(a == 9)
							{
									cout<<"	JAVA 3 Object Oriented Programing. "<<endl;
							}
							else if(a == 10)
							{
									cout<<"	CODE 2 Complete. "<<endl;
							}
							else if(a == 11)
							{
									cout<<"	Quantum Computing For Everone. "<<endl;
							}
							else if(a == 12)
							{
									cout<<"	Calculus. "<<endl;
							}
							else if(a == 13)
							{
									cout<<"	Accounting For Management. "<<endl;
							}
							else if(a == 14)
							{
									cout<<"	Introduction For Computing. "<<endl;
							}
							else if(a == 15)
							{
									cout<<"	Communities Of Computing. "<<endl;
							}
							else
							{
								cout<<"	NOT AVAILABLE IN THIS LIBRARY. "<<endl;
							}
						}
						char getnoveldetail()
						{
								cout<<"	NOVELS DETAIL. "<<endl;
								cout<<"1.	Chand Se Pehly.  "<<endl;
								cout<<"2.	Jannat Kat Pattay. "<<endl;
								cout<<"3.	Mushaf. "<<endl;
								cout<<"4.	Aab-e-Hayat. "<<endl;
								cout<<"5.	Hasil. "<<endl;
								cout<<"6.	Mann O Salwa. "<<endl;
								cout<<"7.	Iman Umeed Aur Muhabbat. "<<endl;
								cout<<"8.	Maat Hone Tak. "<<endl;
								cout<<"9.	Peer-e-Kamil. "<<endl;
								cout<<"10.	Darbar-e-Dil. "<<endl;
								cout<<"11.	Pagal Ankho Wali. "<<endl;
								cout<<"12.	Amarbail. "<<endl;
								cout<<"13.	Sans Sakin Thi. "<<endl;
								cout<<"14.	Namal. "<<endl;
								cout<<"15.	Hadd. "<<endl;
								cout<<"16.	KaraKoram Ka Taj Mahal. "<<endl;
								cout<<"17.	Bachpan Ka December. "<<endl;
								cout<<"18.	Haalim. "<<endl;
								cout<<"19.	Paras. "<<endl;
								cout<<"20.	Wo Mera Hai. "<<endl;
						        cout<<"	WHAT WANT TO READ THAT BOOK. "<<endl;
						        cin>>d;
						        if(d == 1)
						        {
						        	cout<<"	Chand Se pehly. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 2)
								{
								    cout<<"	Jannat Kay Pattay. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 3)
								{
									cout<<"	Mushaf. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 4)
								{
									cout<<"	Abe-e-Hayat. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 5)
								{
									cout<<"	Hasil. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 6)
								{
								    cout<<"	Mann O Salwa. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 7)
								{	
								    cout<<"	Iman Umeed aur Muhabbat. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 8)
								{
									cout<<"	Mat Hone Tak. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 9)
								{
									cout<<"	Peer-e-Kamil. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 10)
								{
									cout<<"	Darbar-e-Dil. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 11)
								{
									cout<<"	Pagal Ankho Wali. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 12)
								{
									cout<<"	Amarbail. "<<endl;
						        	cout<<"WRITER: "<<"UMERA AHMED. "<<endl;
								}
								else if(d == 13)
								{
									cout<<"	Namal. "<<endl;
						        	cout<<"WRITER: "<<"NIMRA AHMED. "<<endl;
								}
								else if(d == 14)
								{
									cout<<"	Hadd. "<<endl;
						        	cout<<"WRITER: "<<"NIMRA AHMED. "<<endl;
								}
								else if(d == 15)
								{
									cout<<"	KaraKoram Ka Taj mahal. "<<endl;
						        	cout<<"WRITER: "<<"NIMRA AHMED. "<<endl;
								}
								else if(d == 16)
								{
									cout<<"	Bachpan Ka December. "<<endl;
						        	cout<<"WRITER: "<<"NIMRA AHMED. "<<endl;
								}
								else if(d == 17)
								{
									cout<<"	Haalim. "<<endl;
						        	cout<<"WRITER: "<<"NIMRA AHMED. "<<endl;
								}
								else if(d == 19)
								{
									cout<<"	Paras. "<<endl;
						        	cout<<"WRITER: "<<"NIMRA AHMED. "<<endl;
								}
								else if(d == 20)
								{
									cout<<"	Wo Mera Hai. "<<endl;
						        	cout<<"WRITER: "<<"NIMRA AHMED. "<<endl;
								}
								else
								{
									cout<<"Not Available In This Library. "<<endl;
								}
							}
							char getpoliticalbookdetail()
							{
								cout<<"	POLITICAL BOOKS DETAIL. "<<endl;
								cout<<"1.	The Republic Of Plato. "<<endl;
								cout<<"2.	The Social Contract. "<<endl;
								cout<<"3.	On Liberty. "<<endl;
								cout<<"4.	Democracy In America. "<<endl;
								cout<<"5.	Second Treatise Of Governmement. "<<endl;
								cout<<"6.	The Human Conditions. "<<endl;
								cout<<"7.	On Revolutions. "<<endl;
								cout<<"8.	Utopia. "<<endl;
								cout<<"9.	The Concept Of The Political. "<<endl;	
								cout<<"10.	Common Sense. "<<endl;
								cout<<"WHAT WANT TO READ THAT BOOK: "<<endl;
								cin>>b;
								if(b == 1)
								{
									cout<<"	The Republic Of Plato. "<<endl;
									cout<<"	AUTHOR :"<<"	Plato."<<endl;
									}
									else if(b == 2)
									{
									cout<<"	The Social Contract. "<<endl;
									cout<<"	AUTHOR :"<<"	Jean Jacques Rousseau."<<endl;
										}	
										else if(b ==3)
										{
										     cout<<"		On Liberty. "<<endl;
									         cout<<"	AUTHOR :"<<"	John Staurt Mill. "<<endl;
										}
										else if(b == 4)
										{
												cout<<"	Democracy In America. "<<endl;
									            cout<<"	AUTHOR :"<<"	Alexis de Tocqueville."<<endl;
										}
										else if(b == 5)
										{
												cout<<"	Second Treatise Of Government. "<<endl;
									            cout<<"	AUTHOR :"<<"	John Locke."<<endl;
										}
										else if(b == 6)
										{
												cout<<"	The Human Condition. "<<endl;
									            cout<<"	AUTHOR :"<<"	Hannah Arendit."<<endl;
										}
										else if(b == 7)
										{
												cout<<"	On Revolutions. "<<endl;
								               	cout<<"	AUTHOR :"<<"	Hannah Arendit."<<endl;
										}
										else if(b == 8)
										{
												cout<<"	Utopia. "<<endl;
								            	cout<<"	AUTHOR :"<<"	Thomas More."<<endl;
										}
										else if(b == 9)
										{
												cout<<"	The Concept Of The Political. "<<endl;
								            	cout<<"	AUTHOR :"<<"	Carl Schmitt."<<endl;
									}
									else if(b == 10)
									{
											cout<<"	Common Sense. "<<endl;
								           	cout<<"	AUTHOR :"<<"	Thomas Paine."<<endl;
									}
									else
									{
										cout<<"	NOT AVAILABLE IN THIS LIBRARY. "<<endl;
									}
										
							}
							char getphilosophybookdetail()
							{
							cout<<"	PHILOSOPHT BOOK DETAIL. "<<endl;
							cout<<"1.	Being and Time. "<<endl;	
							cout<<"2.	Critique Of Pure Reason. "<<endl;	
							cout<<"3.	Mediations. "<<endl;	
							cout<<"4.	The Stranger. "<<endl;	
							cout<<"5.	Fear And Trembling. "<<endl;	
							cout<<"6.	Anti oedipus. "<<endl;	
							cout<<"7.	Truth and Method. "<<endl;	
							cout<<"8.	Apology. "<<endl;	
							cout<<"9.	Tao Te Ching. "<<endl;
							cout<<"10.	Beyond Good And Evil. "<<endl;
							cout<<"WHAT WANT TO READ THAT BOOK: "<<endl;
								cin>>e;
								if(e == 1)
								{
									cout<<"	Being and Time. "<<endl;
									cout<<"	Author: "<<"Martin Heidigger. "<<endl;
								}
									if(e == 2)
								{
									cout<<"	Critique Of Pure Reason. "<<endl;
									cout<<"	Author: "<<"Immanuel Kant. "<<endl;
								}
									if(e == 3)
								{
									cout<<"	Mediations. "<<endl;
									cout<<"	Author: "<<"Marcus Aurelius. "<<endl;
								}
									if(e == 4)
								{
									cout<<"	The Stranger. "<<endl;
									cout<<"	Author: "<<"Albert Camus. "<<endl;
								}
									if(e == 5)
								{
									cout<<"	Fear and Trembling. "<<endl;
									cout<<"	Author: "<<"Soren Kierkeggard. "<<endl;
								}
									if(e == 6)
								{
									cout<<"	Anti oedipus. "<<endl;
									cout<<"	Author: "<<"Gilles Deleauze. "<<endl;
								}
									if(e == 7)
								{
									cout<<"	Truth And Method. "<<endl;
									cout<<"	Author: "<<"Hans-George Gadamer. "<<endl;
								}
									if(e == 8)
								{
									cout<<"	Apology. "<<endl;
									cout<<"	Author: "<<"Plato. "<<endl;
								}
									if(e == 9)
								{
									cout<<"	Tao Te Ching. "<<endl;
									cout<<"	Author: "<<"Lao Tzu. "<<endl;
								}
									if(e == 10)
								{
									cout<<"	Beyond Good And Evil. "<<endl;
									cout<<"	Author: "<<"Friedrich Nietzsche. "<<endl;
								}
								else
								{
									cout<<"NOT AVAILABLE IN THIS LIBRARY. "<<endl;
								}
							}
					char getchoosebook()
					{
						cout<<"Enter student first name. "<<endl;
						gets(std_fname);
						cout<<"Enter student last name. "<<endl;
						gets(std_lname);
						cout<<"Enter Student roll no"<<endl;
						cin>>std_rollno[6];
						cout<<"Enter student admission no. "<<endl;
						cin>>adm_no[6];
						cout<<"Enter your choice. "<<endl;
						cin>>choice;
						switch(choice)
						{
							case 1:
								getmedicalbookdetail(); 
								break;
							case 2:
								getCSbookdetail();
								break;
							case 3:
								getnoveldetail();
								break;
							case 4:
								getpoliticalbookdetail();
								break;
							case 5:
							    getphilosophybookdetail();
							    break;
							    default:
							    	cout<<"		\t\t\t	INVALID	\t\t\t		"<<endl;
						}
				}
				void studentinfo()
				{
					cout<<"\n\n\n********************************************************************\n\n\n"<<endl;
					cout<<"				 	|WELCOME TO THE STUDENT INFO|							"<<endl;
					cout<<"\n\n\n********************************************************************\n\n\n"<<endl;
				}
			string getdata()
			{
			
 cout<<"Enter student roll number : "<<endl;

 cin>>std_rollno[6];

 cout<<"Enter student first name: "<<endl;

 cin>>std_fname;

 cout<<"Enter student Last name: "<<endl;

 cin>>std_lname;

 cout<<"Enter student admission number: "<<endl;

 cin>>adm_no[6];

 cout<<"Enter student class: "<<endl;

 cin>>std_class;

 cout<<"Enter Book Issue Date: "<<endl;

 cin>>issue_date;
 cout<<"Enter Book Return Date: "<<endl;
 cin>>return_date;
 
			}
			void showdata()
			{
				

 int i=searchkey;

 cout<<i<<"    "<<endl;

 cout<<std_rollno[6]<<"   "<<endl;

 cout<<std_fname<<"     "<<endl;

 cout<<std_lname<<"\t"<<endl;

 cout<<adm_no[6]<<"   "<<endl;

 cout<<std_class<<"   "<<endl;

 cout<<issue_date<<"\n\n"<<endl;
cout<<return_date<<"\n\n\n"<<endl;
			}
			void searchstudent()
{

 for(int i=0;i<=4;i++)  
 {
 if (std_rollno[6]==searchkey)
 {
 cout<<"Student Roll_no   "<<"Student First Name   "<<"Student Last Name      "<<"Student Admission No		"<<"Student class.      "<<"Book Issue Date    "<<"Book Return Date\n\n";

 showdata(); 

 }

 } 

}
void addstudent()    
{
 for(int i=0;i<=4;i++)
 {
  getdata();   

 }


 cout<<endl;

 cout<<"Student record Table"<<endl;

 cout<<"Student Roll_no   "<<"Student First Name   "<<"Student Last Name      "<<"Student Admission No.      "<<"  Student class        "<<"Book Issue Date"<<"	Book rETURN No.\n\n\n";

 for(int i=0;i<=4;i++)
 {

  showdata(); 

}
}
void showstudent()
{
 cout<<"\n\t\tWhat do you want to do?"<<endl;

 cout<<"\t\t1-Add student"<<endl;

 cout<<"\t\t3-Search student"<<endl;

 cout<<"Enter your choice: ";

 cin>>choice;

 switch(choice)
 {

 case 1: 

 addstudent();

 break;

 case 2: 

 if(std_rollno==0)
 {

 cout<<"Please Add sudents first."<<endl;
addstudent();

 }

 else 
 {
  cout<<endl;

 cout<<"Student record Table"<<endl;

 cout<<"Student Roll No   "<<"Student First Name   "<<"Student Last Name      "<<"Student Admission No      "<<"Student Class         "<<"Issue Date"<<"Return Date\n\n\n		"<<endl;

 for(int i=0;i<=4;i++)
 {

 showdata[];

 }

 break;

 case 3:

 if(std_rollno==0)   
 {
 cout<<"Please Add sudents first."<<endl;

 addstudent();

 }

 else
 {

 cout<<"Enter roll_no of student you want to search: ";

 cin>>searchkey; 

 searchstudent();
 }


 default:

 cout<<"Invalid number."<<endl;

 main();

 }
}
};
int main()
{
    LibraryManagementSystem LMS;
	LMS.show();
	LMS.getchoosebook();
	LMS.getdata();
	LMS.showdata();
	LMS.searchstudent();
	LMS.addstudent();
	LMS.showstudent();
	getch();
	return 0;
}  
