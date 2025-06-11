#include <iostream>
#include <conio.h>
#include <string.h>
#include <cmath>
#include <ctime>
#include <stdlib.h>
using namespace std;
class HMS
{
	private:
	  time_t t = time(NULL);
      tm* timePtr = localtime(&t);
    int a,b,i,Remaining,n;
    double invoice[30][6];
    int tot,q;
    char ch;
    int Received_Amount;
     char c_name[20];
	    int fd_no;
        float price;
		public:
		 	HMS()                  // constructor
			{
				cout<<"Project Name:     HOTEL MANAGEMENT SYSTEM \nPresented To:     Ma'am Fareha Rubab \nPresented By:     MOBEENA SATTAR\n\t\t AROOSA TAZEEM \n\t\t\tREMSHAH MALIK"<<endl;
				cout<<"\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
				cout<<"\t\t\t\t\t @@@@@    WELCOME TO HOTEL MANAGEMENT SYSTEM!  @@@@@"<<endl;
				cout<<"\t\t\t\t\t @@@@@            HILL VIEW HOTEL              @@@@@"<<endl;
				cout<<"\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
				cout<<"\n";
				i=0;
				tot=0;
			}
	void menu_detail()
        {
        		cout<<"\t\t\t\t\t   @@@@@@  MENU OF HOTEL! @@@@@@\n"<<endl;
		 cout<<"\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
		 cout<<"\n\n\t\t\t\t\t@@@   1. Breakfast            @@@"<<endl;
   		 cout<<"\n\n\t\t\t\t\t@@@   2. Launch               @@@"<<endl;
		 cout<<"\n\n\t\t\t\t\t@@@   3. Dinner               @@@"<<endl;
		 cout<<"\n\n\t\t\t\t\t@@@   4. Drinks               @@@"<<endl;
		 cout<<"\n\n\t\t\t\t\t@@@   5. Sweet Dish           @@@"<<endl;
		 cout<<"\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
      do
      {
        cout<<"\n\t   [Choose One Type ]"<<endl;
        cin>>a;
        switch(a)
		{
			case 1:
				cout<<"\t\t @@@ BREAKFAST @@@"<<endl;
				cout<<"\t\t _________________"<<endl;
				cout<<"1.	Allo Paratha"<<endl;
				cout<<"2.	French Toast"<<endl;
				cout<<"3.	Fried Bread"<<endl;
			    cout<<"4.	Nan Chany"<<endl;
			    cout<<"5.	Boiled Egg"<<endl;
				cout<<"6.	Halwa Poori"<<endl;
				cout<<"7.	Home Made Tea"<<endl;
				cout<<"8.	Black Coffe"<<endl;
	       break;
			case 2:
			
			    cout<<"\t\t @@@ LAUNCH @@@"<<endl;
			    cout<<"\t\t ______________"<<endl;
				cout<<"9.	Chicken Nuggets"<<endl;
				cout<<"10.	Pasta Salads"<<endl;
				cout<<"11.	Sandwiches and Chips"<<endl;
				cout<<"12.	Chicken Karahi"<<endl;
				cout<<"13.	Mutton Karahi"<<endl;
				cout<<"14.	Home Made Teac"<<endl;
				cout<<"15.	Salad/Raita"<<endl;
			break;
			case 3:
			
			    cout<<"\t\t @@@ Dinner @@@"<<endl;
			    cout<<"\t\t ______________"<<endl;
				cout<<"16.	Chicken Biryani"<<endl;
				cout<<"17.	Mutton Biryani"<<endl;
				cout<<"18.	Chicken Pulao"<<endl;
				cout<<"19.	Russian Salid"<<endl;
				cout<<"20.	Sabzi"<<endl;
				cout<<"21.	Black Cofee"<<endl;
			break;
			case 4:
			
				cout<<"\t\t @@@ Drinks @@@"<<endl;
				cout<<"\t\t ______________"<<endl;
				cout<<"22.	Water"<<endl;
				cout<<"23.	Coca Cola"<<endl;
				cout<<"24.	Limbo Pani"<<endl;
				cout<<"25.	Pepsi"<<endl;
				cout<<"26.	Miranda"<<endl;
				cout<<"27	Tea"<<endl;
				cout<<"28.	Coffe"<<endl;
			break;
			case 5:
			
				cout<<"\t\t @@@ Sweet Dish @@@"<<endl;
				cout<<"\t\t __________________"<<endl;
				cout<<"29.	Ice Cream"<<endl;
				cout<<"30.	Shahi Tukray"<<endl;
				cout<<"31.	Custard"<<endl;
				cout<<"32.	Triffle"<<endl;
			break;
		    default:
				cout<<"Sorry This Dish Is Not Available!"<<endl;
	}
		cout<<"Do You Want To Order Again (y/n) "<<endl;
		cin>>ch;
	}
	while(ch == 'y' || ch == 'Y');
}

	void Billing()
		{
		    do 
            {
            	
               cout<<"Enter the Serial No:"<<endl;
               cin>>invoice[i][0];
               cout<<"Enter the Dish N0:"<<endl;
               cin>>invoice[i][1];   
               cout<<"Enter the Price of item:"<<endl;
               cin>>invoice[i][2];
               cout<<"Enter The Quantity Of Item:"<<endl;
               cin>>invoice[i][3];
               invoice[i][4] = invoice[i][2] * invoice[i][3]; 
               cout<<"Do you Eat Any Other Dish (y/n) ? ";
               cin>>ch;
               i++;
            }
            while(ch == 'y' || ch == 'Y');
             cout<<"\nEnter the Cash Paid by Customer :"<<endl;
				cin>>Received_Amount;
				cout<<"\n";
				cout<<"\n";
                cout<<"_____________________________________________________"<<endl;
                cout<<"Date :   "<<(timePtr->tm_mday)<<"/"<<(timePtr->tm_mon)+1 <<"/"<<(timePtr->tm_year)+1900;
				cout<<"\tTime :   "<<(timePtr->tm_hour)<<":"<<(timePtr->tm_min)<<":"<<(timePtr->tm_sec)<<endl;
				cout<<"\n";
				cout << "Ser_no	| Dish N0 | Price | Quantity | Amount "<<endl;
				cout<<"____________________________________________________"<<endl;
                for(int m=0; m<i; m++)   
	               {
		            for(int n=0; n<=4; n++) 
		             {
		                 cout << invoice[m][n]  << " \t ";		   
		             }
		             cout<<endl;
		             tot = tot + invoice[m][4];
		           }
		        cout<< "-------------------------------------------"<<endl;
		        cout<<"Total Bill is :          "<<tot<<endl;
                cout<<"Cash Paid =              "<<Received_Amount<<endl;
				Remaining = Received_Amount-tot;
				if(Remaining<0)
				{
				cout<<"Amount is Payable  =     "<<Remaining<<endl;
			}
				else
				{
				cout<<"BALANCE =                "<<Remaining<<endl;
			    }
			    cout<<"____________________________________________"<<endl;
			}
};
class Hotel
{
	private:
		int room_no[30];
		string c_name;
		string c_address;
		double phone_no;
		int ch;
		public:
			Hotel()
			{
				cout<<"	&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
				cout<<"	&&&          HILL VIEW HOTEL SERVICES                   &&&"<<endl;
				cout<<"	&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
			}
		    void services()
		{
			cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
			cout<<"@@@ 1.	Book A Room                   @@@"<<endl;
			cout<<"@@@ 2.	Customer Record               @@@"<<endl;
			cout<<"@@@ 3.	Room Alloted                  @@@"<<endl;
			cout<<"@@@ 4.	Exit                          @@@"<<endl;
			cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
			cout<<"\n\n\t\t Room No (1 - 14) Economy Class:"<<endl;
			cout<<"\n\t\t Room No (15 - 24) Bussiness Class:"<<endl;
			cout<<"\n\t\t Room No (25 - 30) Meeting Class:"<<endl;
			cout<<"Enter Your Choice:"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
					void book_room();
					break;
				case 2:
					void customer_record();
					break;
				case 3:
					void alloted_room();
					break;
				case 4:
					void exit();
					break;
				default:
					cout<<"Thanks For Visiting!!!"<<endl;
			}
		}
			
			void book_room()
			{
			cout<<"\n\t\t Enter Customer Detail..!!!"<<endl;
			cout<<"Enter Room No:"<<endl;
			cin>>room_no[30];
			if(room_no[1] <= room_no[14])
			{
			
				cout<<"	******** ECONOMY CLASS ********"<<endl;
			}
			else if(room_no[15] <=room_no[24])
			{
				cout<<"	******** BUSINESS CLASS ********"<<endl;
			}
			else if(room_no[25]< room_no[30])
			{
				cout<<"	******** MEETING CLASS  ********"<<endl;
			}
			else 
			{
				cout<<"SORRY!!! Room Are Not Exsist"<<endl;
			}
			cout<<"Enter Customer Name:"<<endl;
			cin>>c_name;
			cout<<"Enter Customer Address:"<<endl;
			cin>>c_address;
			cout<<"Enter Phone No:"<<endl;
			cin>>phone_no;
			cout<<"\bn\n\t\t\tRoom Are Successfully Booked..!!!"<<endl;
			}
			void customer_record()
			{
				cout<<"	@@@@@	CUSTOMER DETAIL   @@@@@	"<<endl;
				cout<<"Room No:"<<room_no[30]<<endl;
					if(room_no[1] < room_no[14])
			{
				cout<<"	******** ECONOMY CLASS ********"<<endl;
			}
			else if(room_no[15] <room_no[24])
			{
				cout<<"	******** BUSINESS CLASS ********"<<endl;
			}
			else if(room_no[25]< room_no[30])
			{
				cout<<"	******** MEETING CLASS  ********"<<endl;
			}
			else 
			{
				cout<<"SORRY!!! Room Are Not Exsist"<<endl;
			}
			cout<<"Customer Name:"<<c_name<<endl;;
			cout<<"Customer Address:"<<c_address<<endl;
			cout<<"Customer Phone No:"<<phone_no<<endl;
			}
};
int main()
{
	int choice;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@	1.	RESTAURANT                    @@@"<<endl;
	cout<<"@@@	2.	ROOM SERVICES                 @@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
     HMS h;
     h.menu_detail();
     h.Billing();
      Hotel s;
     s.services();
     s.book_room();
     s.customer_record();
	getch();
	return 0;
	}
