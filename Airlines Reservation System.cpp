#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>
#include<stdio.h>
#include<cmath>
#include<ctime>
char L_destination[6][20]={"ISLAMABAD","PESHAWAR","KARACHI","LAHORE","QUETTA","MULTAN"};
char I_destination[5][20]={"HONG KONG","BEIJING","PARIS","SEOUL","KSA"};
using namespace std;
class Airline
{
    private:
      time_t t = time(NULL);
      tm* timePtr = localtime(&t);
      int chose,num,n,h,r;
      int select,option;
      char firstname[60];
      char lastname[60];
      char address[60];
      char c_loc[30];
      char dest[30];
      char reservation_no[60];
		public:
			Airline()
			{
				h=1;
                r=12895;
			}
			void timee()
			{
				cout<<"\t\t\t\t\t\t ON WHICH TIME YOU TRAVEL \n\n"<<endl;
				cout<<" 1: 10  A.M"<<endl;
				cout<<" 2: 12  A.M"<<endl;
				cout<<" 3: 02  P.M"<<endl;
				cout<<" 4: 04  P.M"<<endl;
				cout<<" 5: 06  A.M"<<endl;
				cout<<" 6: 08  P.M"<<endl;
				cout<<" 7: 10  P.M"<<endl;
				cout<<" 8: 09  P.M"<<endl;
				cout<<" 9: 02  A.M"<<endl;
				cout<<"10: 04  A.M"<<endl;
				cout<<"\nEnter your choice: ";
				cin>>chose;
				system("cls");
				if(chose==1)
                {  
                    cout<<"Flight Time 10 A.M "<<endl;
                }
                else if(chose==2)
                {
                    cout<<"Flight Time 12 P.M "<<endl;
                }
                else if(chose==3)
                {
                	cout<<"Flight Time 02 P.M "<<endl;
				}
			    else if(chose==4)
                {
                	cout<<"Flight Time 04 P.M "<<endl;
				}
			    else if(chose==5)
                {
                	cout<<"Flight Time 06 P.M "<<endl;
				}
				else if(chose==6)
                {
                	cout<<"Flight Time 08 P.M "<<endl;
				}
				else if(chose==7)
                {
                	cout<<"Flight Time 10 P.M "<<endl;
				}
				else if(chose==8)
                {
                	cout<<"Flight Time 09 P.M "<<endl;
				}
				else if(chose==9)
                {
                	cout<<"Flight Time 02 A.M "<<endl;
				}
				else if(chose==10)
                {
                	cout<<"Flight Time 04 A.M "<<endl;
				}
				else
				{
					cout<<"INVALID TIMING"<<endl;
				}
            }
			void airline()
			{
				cout<<"\nIn which AIRLINE you want to travel"<<endl<<endl;
                cout<<"1) PIA"<<endl;
                cout<<"2) AIR BLUE"<<endl;
                cout<<"3) ARAB EMIRATES"<<endl;
                cout<<"4) SERENE AIR"<<endl;
                cout<<"5) SHAHEEN AIR"<<endl;
                cout<<"Enter your choice: ";
                cin>>option;
                system ("cls");
                cout<<"\n In which Flight You Travel"<<endl;
                cout<<"1: BOING 747"<<endl;
                cout<<"2: BOING 385"<<endl;
                cout<<"3: BOING 269"<<endl;
                cout<<"4: BOING 432"<<endl;
                cout<<"5: BOING 903"<<endl;
                cout<<"\nEnter the Flight No: ";
                cin>>select;
                system("cls");
                switch(option)
                {
                    case 1:
                        cout<<"\n\n\n                  WELCOME TO PIA"<<endl;
                    break;
                    case 2:
                        cout<<"\n\n\n                  WELCOME TO AIRBLUE"<<endl;
                    break;
                    case 3:
                        cout<<"\n\n\n                  WELCOME TO ARAB EMIRATES"<<endl;
                    break;
                    case 4:
                        cout<<"\n\n\n                  WELCOME TO SERENE AIR"<<endl;
                    break;
                    case 5:
                    	cout<<"\n\n\n                  WELCOME TO SHAHEEN AIR"<<endl;
                    break;
                }
                switch(select)
                {
            	case 1:
            		cout<<"\n\n\tBOING 747"<<endl;
            	break;
            	case 2:
            		cout<<"\n\n\tBOING 385"<<endl;
            	break;
            	case 3:
            		cout<<"\n\n\tBOING 269"<<endl;
            	break;
            	case 4:
            		cout<<"\n\n\tBOING 432"<<endl;
            	break;
            	case 5:
            		cout<<"\n\n\tBOING 903"<<endl;
            	break;
			   }
			}
			void seat()
			{
				cout<<"\n\t\t\t\t\t FLIGHT IS AVAILABLE"<<endl;
				cout<<"\n\nIn which class you want to travel?"<<endl;
                cout<<"\n\n";
                cout<<setw(60)<<"|***********************************|"<<endl;
                cout<<setw(60)<<"|     Press 1 for Buisness Class    |"<<endl;
                cout<<setw(60)<<"|     Press 2 for Economy Class     |"<<endl;
                cout<<setw(60)<<"*************************************"<<endl<<endl<<endl;
                cout<<"Enter your choice: ";
                cin>>num;   
                system("cls");
                if(num==1)
                {
                    cout<<"Ticket Information:                                                      "<<endl;
                    cout<<"BUISNESS CLASS                                                           "<<endl;
                    cout<<"Status: confirmed                                                        "<<endl;
                    cout<<"_______________________"<<endl;
                }
                else if(num==2)
                { 
                    cout<<"Ticket Information:                                                      "<<endl;
                    cout<<"ECONOMY CLASS                                                            "<<endl;
                    cout<<"Status: confirmed                                                        "<<endl;
                    cout<<"________________________"<<endl;
                }  
                else
                {
                	cout<<"INVALID CHOICE"<<endl;
				}
				cout<<"\n\t\t SEAT IS AVAILABLE"<<endl;
			}
            void getdata()
            {
               cout<<"\n\n                :: Please enter the required information for Passenger ::"<<endl; 
               cout<<"Enter the Firstname of Passenger:  ";
               cin.getline(firstname,60);
               cout<<endl;
               cout<<"Enter the Lastname of Passenger:  ";
               cin.getline(lastname,60);
               cout<<endl;
               cout<<"Enter Address of Passenger:  ";
               cin.getline(address,60);
               cout<<endl;
               cout<<"Enter the Resevation No. of Ticket:  ";
               cin.getline(reservation_no,60);
               cout<<endl;
               cout<<"Enter the Current Location of Passenger(IN CAPITAL LETTERS ONLY):  ";
               cin.getline(c_loc,60);
               cout<<endl;
               cout<<"Enter the Destination of Passenger(IN CAPITAL LETTERS ONLY):  ";
               cin.getline(dest,60);
               cout<<endl;
               system("cls");
            }
            void show()
            {
            cout<<"\n                           AIRLINE TICKET \n                            "<<endl;
            cout<<" _________________________________________________________________________"<<endl;
            cout<<"|                                                                          "<<endl;
            cout<<"|Ticket No."<<h<<"                                Reference No."<<r<<"\t  "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            cout<<"|Resevation No. :"<<reservation_no<<"                                     "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            cout<<"|Passenger Information :                                                  "<<endl;
            cout<<"|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl;
            cout<<"|Address :"<<address<<"                                                   "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            cout<<"|Other Information :                                                      "<<endl;
            cout<<"|Issue Date :   "<<(timePtr->tm_mday)<<"/"<<(timePtr->tm_mon)+1 <<"/"<<(timePtr->tm_year)+1900<<endl;
            cout<<"|Issue Time :   "<<(timePtr->tm_hour)<<":"<<(timePtr->tm_min)<<":"<<(timePtr->tm_sec)<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
            cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
            cout<<"|BAGGAGE allowed 40 Kilos                                                "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            if(num==1)
            {
            cout<<"|Ticket Information:                                                      "<<endl;
            cout<<"|BUISNESS CLASS                                                           "<<endl;
            cout<<"|Status: confirmed                                                        "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            }
            else if(num==2)
            {
            cout<<"|Ticket Information:                                                      "<<endl;
            cout<<"|ECONOMY CLASS                                                            "<<endl;
            cout<<"|Status: confirmed                                                        "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            }
            else
            {
            cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            }
            cout<<"|Flight Information :                                                     "<<endl;
            cout<<"|Airline Name=  ";
            switch(option)
                {
                    case 1:
                        cout<<"PIA"<<endl;
                    break;
                    case 2:
                        cout<<"AIRBLUE"<<endl;
                    break;
                    case 3:
                        cout<<"ARAB EMIRATES"<<endl;
                    break;
                    case 4:
                        cout<<"SERENE AIR"<<endl;
                    break;
                    case 5:
                    	cout<<"SHAHEEN AIR"<<endl;
                    break;
                }
            cout<<"|Flight(s)=  ";
            switch(select)
            {
            	case 1:
            		cout<<"BOING 747"<<endl;
            	break;
            	case 2:
            		cout<<"BOING 385"<<endl;
            	break;
            	case 3:
            		cout<<"BOING 269"<<endl;
            	break;
            	case 4:
            		cout<<"BOING 432"<<endl;
            	break;
            	case 5:
            		cout<<"BOING 903"<<endl;
            	break;
			}
            	if(chose==1)
                {  
                    cout<<"|Flight Time=  10 A.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
                }
                else if(chose==2)
                {
                    cout<<"|Flight Time=  12 P.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
                }
                else if(chose==3)
                {
                	cout<<"|Flight Time=  02 P.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
				}
			    else if(chose==4)
                {
                	cout<<"|Flight Time=  04 P.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
				}
			    else if(chose==5)
                {
                	cout<<"|Flight Time=  06 P.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
				}
				else if(chose==6)
                {
                	cout<<"|Flight Time=  08 P.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
				}
				else if(chose==7)
                {
                	cout<<"|Flight Time=  10 P.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
				}
				else if(chose==8)
                {
                	cout<<"|Flight Time=  09 P.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
				}
				else if(chose==9)
                {
                	cout<<"|Flight Time=  02 A.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
				}
				else if(chose==10)
                {
                	cout<<"|Flight Time=  04 A.M                                                       "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
				}
				else
				{
					cout<<"|Flight Time is INVALID                                                   "<<endl;
					cout<<"|_________________________________________________________________________"<<endl;
				}
                    cout<<"|                           HAVE A SAFE JOURNEY!                          "<<endl;
                    cout<<"|_________________________________________________________________________"<<endl;
			}
            void local_booking()
            {
            	cout<<"\n"<<setw(40)<<"THESE ARE THE LOCAL PLACES AVAILABLE\n"<<endl;
                cin.ignore();
                for(int i=0;i<6;i++)
                {
                   cout<<L_destination[i]<<endl;
                }
			}
			void international_booking()
			{
				cout<<"\n"<<setw(40)<<"THESE ARE THE INTERNATIONAL PLACES AVAILABLE"<<endl<<endl;
                cin.ignore();
                for(int i=0;i<5;i++)
                   {
                       cout<<I_destination[i]<<endl;
                   }
			}
			void search_flight()
			{
				cout<<"\n\n\n\n";
				cout<<"\t\t\t 1: LOCAL FLIGHT\n"<<endl;
				cout<<"\t\t\t 2: INTERNATIONAL FLIGHT\n"<<endl;
				cout<<"Enter your choice: ";
				cin>>n;
				system("cls");
				if(n==1)
				{
					cout<<"\t\t\t\t\t     FOLLOWING ARE THE LOCAL FLIGHTS AVAILABLE\n\n"<<endl;
					cout<<"\t\t\t\t\t\t Flight From ISLAMABAD to PESHAWAR"<<endl;
			        cout<<"\t\t\t\t\t\t Flight From ISLAMABAD to MULTAN"<<endl;
			        cout<<"\t\t\t\t\t\t Flight From ISLAMABAD to QUETTA"<<endl;
			        cout<<"\t\t\t\t\t\t Flight From ISLAMABAD to KARACHI"<<endl;
			        cout<<"\t\t\t\t\t\t __________________________________"<<endl;
			        cout<<"\t\t\t\t\t\t Flight From PESHAWAR to QUETTA"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From PESHAWAR to LAHORE"<<endl;
					cout<<"\t\t\t\t\t\t Flight From PESHAWAR to KARACHI"<<endl;
					cout<<"\t\t\t\t\t\t Flight From PESHAWAR to MULTAN"<<endl;
					cout<<"\t\t\t\t\t\t __________________________________"<<endl;
					cout<<"\t\t\t\t\t\t Flight From KARACHI to MULTAN"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From KARACHI to QUETTA"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From KARACHI to ISLAMABAD"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From KARACHI to LAHORE"<<endl;
				    cout<<"\t\t\t\t\t\t __________________________________"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From LAHORE to KARACHI"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From LAHORE to ISLAMABAD"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From LAHORE to MULTAN"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From LAHORE to PESHAWAR"<<endl;
				    cout<<"\t\t\t\t\t\t __________________________________"<<endl;
			        cout<<"\t\t\t\t\t\t Flight From QUETTA to LAHORE"<<endl;
			        cout<<"\t\t\t\t\t\t Flight From QUETTA to KARACHI"<<endl;
			        cout<<"\t\t\t\t\t\t Flight From QUETTA to MULTAN"<<endl;
			        cout<<"\t\t\t\t\t\t Flight From QUETTA to PESHAWAR"<<endl;
			        cout<<"\t\t\t\t\t\t __________________________________"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From MULTAN to ISLAMABAD"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From MULTAN to PESHAWAR"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From MULTAN to LAHORE"<<endl;
				    cout<<"\t\t\t\t\t\t Flight From MULTAN to KARACHI"<<endl;
				    cout<<"\t\t\t\t\t\t __________________________________"<<endl;
                }
				else if(n==2)
				{
				cout<<"\t\t\t\t\t FOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE\n"<<endl;
                for(int i=0;i<6;i++)
                  {
                    for(int j=0;j<5;j++)
                        { 
                            cout<<"\t\t\t\t\t\t Flight From "<<L_destination[i]<<" to "<<I_destination[j]<<endl;
                        }
                            cout<<"\t\t\t\t\t\t ____________________________________"<<endl;
                  }
                }
                else
                {
                	cout<<"INVALID CHOICE"<<endl;
				}
			}
			void End()
			{
				cout<<"\n\n\n\n\n\n\n\n\n"<<endl;
				cout<<setw(100)<<"***********************************************"<<endl;
				cout<<setw(100)<<"|                                             |"<<endl;
				cout<<setw(100)<<"|                                             |"<<endl;
				cout<<setw(100)<<"|                                             |"<<endl;
				cout<<setw(100)<<"|                                             |"<<endl;
				cout<<setw(100)<<"|             THANK YOU FOR USING             |"<<endl;
				cout<<setw(100)<<"|         AIRLINES RESERVATION SYSTEM!        |"<<endl;	
				cout<<setw(100)<<"|                                             |"<<endl;
				cout<<setw(100)<<"|                                             |"<<endl;
				cout<<setw(100)<<"|                                             |"<<endl;
				cout<<setw(100)<<"|                                             |"<<endl;
				cout<<setw(100)<<"***********************************************"<<endl;
			}
};
int main()
{
	int choose;
    system("color 5f");
    cout<<"\n\n\n\n\n\n\t\t\t\t ***** WELCOME TO AIRLINES RESERVATION SYSTEM *****"<<endl;
    Sleep(2000);
    cout<<"\n\n\n\n\t\t\t\t\t\t DEVELOPED BY :"<<endl;
    Sleep(1000);
    cout<<"\n\n\t\t\t\t\t\t\t\t\t IQRA NOOR"<<endl;
    Sleep(3000);
    system("cls");
    abc:
    cout<<"\n\n\n\n\n\n";
    cout<<setw(80)<<" ____________________________________ "<<endl;
    cout<<setw(80)<<"|                                    |"<<endl;
    cout<<setw(80)<<"|        AIRLINES RESERVATION!       |"<<endl;
    cout<<setw(80)<<"|             MAIN MENU              |"<<endl;
    cout<<setw(80)<<"|       1:  LOCAL BOOKING            |"<<endl;
    cout<<setw(80)<<"|       2:  INTERNATIONAL BOOKING    |"<<endl;
    cout<<setw(80)<<"|       3:  SCHEDULE OF FLIGHTS      |"<<endl;
    cout<<setw(80)<<"|       4:  SHOW TICKET              |"<<endl;
    cout<<setw(80)<<"|       5:  EXIT                     |"<<endl;
    cout<<setw(80)<<"|____________________________________|"<<endl;
    Airline A;
    cout<<"Enter Your Choice:  ";
    cin>>choose;
    cout<<"\n\n";
    system("cls");
    switch(choose)
    {
    	case 1:
    		system("cls");
    		cout<<setw(80)<<"LOCAL BOOKING"<<endl;
    		A.airline();
    		A.local_booking();
    		A.getdata();
    		A.seat();
    		getch();
    		system("cls");
    		A.timee();
    		getch();
    		system("cls");
    		goto abc;
    		break;
    	case 2:
    		system("cls");
    		cout<<setw(80)<<"INTERNATIONAL BOOKING"<<endl;
    		A.airline();
    		A.international_booking();
    		A.getdata();
    		A.seat();
    		getch();
    		system("cls");
    		A.timee();
    		getch();
    		system("cls");
    		goto abc;
    		break;
    	case 3:
    		system("cls");
    		cout<<setw(80)<<"SCHEDULE OF FLIGHTS"<<endl;
    		A.search_flight();
    		getch();
    		system("cls");
    		goto abc;
    		break;
    	case 4:
    		system("cls");
    		A.show();
    		getch();
    		system("cls");
    		goto abc;
    	case 5:
    		system("cls");
    		A.End();
    		getch();
	}
	system("cls");
	return 0;
}
