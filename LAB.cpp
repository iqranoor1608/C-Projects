#include<iostream>
#include<conio.h>
#include<string.h>
#include <ctime>
#include <cmath>
#include <stdio.h>
using namespace std;
class Lab
{
	private:
		int t_no;
		int t_charge;
		char t_name[20];
		char t_res[20];
		char type[20];
		int charge;
		char name[20];
		char res[20];
		int year;
		int mon;
		int day;
		public:
				
			char t_type[20];
					char getT1()
			{
				t_no=1;
				strcpy(t_name,"A1C test ");
				t_charge=2500;
				strcpy(t_type,"Diabetes Tests ");
				strcpy(t_res,"Nill ");
				
			}
			void getT2()
			{
				t_no=2;
				strcpy(t_name,"RPG test  ");
				t_charge=3000;
				strcpy(t_type,"Diabetes Tests ");
				strcpy(t_res,"Nill ");
				
			}
				void getT3()
			{
				t_no=3;
				strcpy(t_name,"OGT test ");
				t_charge=3500;
				strcpy(t_type,"Diabetes Tests ");
				strcpy(t_res,"Nill ");
				
			}
				void getT4()
			{
				t_no=4;
				strcpy(t_name,"FPG test ");
				t_charge=3000;
				strcpy(t_type,"Diabetes Tests ");
				strcpy(t_res,"Nill ");
				
			}
				void getT5()
			{
				t_no=5;
				strcpy(t_name,"CBC test ");
				t_charge=5000;
				strcpy(t_type,"Cancer blood ");
				strcpy(t_res,"Nill ");
				
			}
				void getT6()
			{
				t_no=6;
				strcpy(t_name,"Tumor marker ");
				t_charge=8000;
				strcpy(t_type,"Cancer blood ");
				strcpy(t_res,"Nill ");
				
			}
					void getT7()
			{
				t_no=7;
				strcpy(t_name,"Circulating");
				t_charge=7000;
				strcpy(t_type,"Cancer blood ");
				strcpy(t_res,"Nill ");
				
			}
				void getT8()
			{
				t_no=8;
				strcpy(t_name,"Breast MRI ");
				t_charge=5500;
				strcpy(t_type,"Cancer blood  ");
				strcpy(t_res,"Nill ");
				
			}
					void getT9()
			{
				t_no=9;
				strcpy(t_name,"Bone Scan ");
				t_charge=8000;
				strcpy(t_type,"Cancer blood  ");
				strcpy(t_res,"Nill ");
				
			}
				void getT10()
			{
				t_no=10;
				strcpy(t_name,"Barium Enema ");
				t_charge=7000;
				strcpy(t_type,"Cancer blood  ");
				strcpy(t_res,"Nill ");
				
			}
				void getT11()
			{
				t_no=11;
				strcpy(t_name,"TB Skin Test");
				t_charge=2000;
				strcpy(t_type,"Tuberculosis  ");
				strcpy(t_res,"Nill ");
				
			}
				void getT12()
			{
				t_no=12;
				strcpy(t_name,"TB Blood Tests ");
				t_charge=3000;
				strcpy(t_type,"Tuberculosis  ");
				strcpy(t_res,"Nill ");
				
			}
				void getT13()
			{
				t_no=13;
				strcpy(t_name,"Blood Urea");
				t_charge=2500;
				strcpy(t_type,"Uric Tests ");
				strcpy(t_res,"Nill ");
				
			}
				void getT14()
			{
				t_no=14;
				strcpy(t_name,"Body Fluid");
				t_charge=3000;
				strcpy(t_type,"Fluid Tests ");
				strcpy(t_res,"Nill ");
				
			}
				void getT15()
			{
				t_no=15;
				strcpy(t_name,"Cancer Antigen");
				t_charge=5000;
				strcpy(t_type,"Cancer Tests ");
				strcpy(t_res,"Nill ");
				
			}
			void putinfo()
			{
				cout<<"\n"<<t_no<<"\t\t"<<t_name<<"\t\t"<<t_charge<<"\t\t"<<t_type<<"\t\t"<<t_res<<endl;
			}
};
int main()
{
	int i;
	Lab R[15];
	R[0].getT1();
	R[1].getT2();
    R[2].getT3();
    R[3].getT4();
    R[4].getT5();
    R[5].getT6();
    R[6].getT7();
    R[7].getT8();
    R[8].getT9();
    R[9].getT10();
    R[10].getT11();
    R[11].getT12();
    R[12].getT13();
    R[13].getT14();
    R[14].getT15();
    	cout<<"\n                  TEST INFO                                   ";
	cout<<"\n                    "<<endl;
	cout<<"Test no |         Test Name      |    Test Charge     |  Test Type   |     Test Result  |"<<endl;
	for(i=0;i<=14;i++)
	{
		R[i].putinfo();
	}
	getch();
	return 0;
	}
