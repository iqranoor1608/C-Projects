#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Info
{
	private:
		char v_name[20];
		int v_no;
		int v_millage;
		int v_registration;
		char driver_name[20];
		int v_capacity;
		public:
	void inputdata()
	{
		cout<<"\n\n\tEnter the vehicle Name:\t";
	    cin>>v_name;
		cout<<"\n\n\tEnter the  Nehicle No:\t";
		cin>>v_no;
		cout<<"\n\n\t Enter the Vehicle Millage:\t";
		cin>>v_millage;
		cout<<"\n\n\t Enter the Vehicle Registration:\t";
		cin>>v_registration;
		cout<<"\n\n\tEnter the Driver Name:\t";
		cin>>driver_name;
		cout<<"\n\n\tEnter the vehicle Capacity:\t";
		cin>>v_capacity;
       }
       void displaydata()
       {
       	cout<<"\n\n\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
       	cout<<"\n\n\t\t\t@@@	Enter the vehicle Name:"<<v_name<<"\t\t@@@";
		cout<<"\n\n\t\t\t@@@	Enter the  Nehicle No:"<<v_no<<"\t\t\t@@@";
		cout<<"\n\n\t\t\t@@@	Enter the Vehicle Millage "<<"km"<<v_millage<<"\t@@@";
		cout<<"\n\n\t\t\t@@@	Enter the Vehicle Registration"<<v_registration<<"\t@@@";
		cout<<"\n\n\t\t\t@@@	Enter the Driver Name:"<<driver_name<<"\t\t@@@";
		cout<<"\n\n\t\t\t@@@	Enter the vehicle Capacity"<<v_capacity<<"\t\t@@@";
		cout<<"\n\n\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	   }
};
class complaints
	{	
public:	
int complaint()
{
system("cls");
	char ch;
	system("cls");
	ofstream fin9;
	fin9.open("complaintbox.cpp",ios::app);
	fin9<<endl;
	string mystr;
   	getline (cin, mystr);
  	cout << "Enter the Complaint :";
  	getline (cin, mystr);
  	fin9<<mystr;
  	cout<<"\n\n\nEnter any key to retun back to menu :";
	getch();
	system("cls");
	return 1;
}
};
	class complaintsbox
	{
	public:
int complaint1()
{
	char ch;
	system("cls");
	ifstream fin6;
	fin6.open("complaintbox.cpp",ios::in);
	while(fin6)
	{
		fin6.get(ch);
		cout<<ch;
	} 
	cout<<"\n\n\n\n\n\n   Enter the any key to return to main menu";
	getch();
	system("cls");
	return 1;
}
};
class Reply
{
	public:
		replybox()
		{
	system("cls");
	fstream fin;
	fin.open("program.txt",ios::out | ios::app );
	fin<<endl;
	string mystr;
   	getline (cin, mystr);
  	cout << "Enter the REPLY :";
  	getline (cin, mystr);
  	fin<<mystr;
  	cout<<"\n\n\n\nEnter any key to return main menu :";
  	getch();
  	system("cls");
  	return 1;
}
};
class Replybox
{
	public:
		reply1()
		{
	char ch;
		system("cls");
	ifstream fin;
	fin.open("program.txt",ios::out | ios::in );
     	while(fin)
	{
		fin.get(ch);
		cout<<ch;
	} 

  	cout<<"\n\n\n\nEnter any key to return main menu :";
  	getch();
  	system("cls");
  	return 1;
}
};
	struct First
	{
	string user;
	struct
	{
		char username[10];
		char password[10];
	}
	signup;
	struct
	{
		char username2[10];
		char password2[10];
	}
	login;
	struct
	{
		char firstname[50];
		char lastname[50];
	}
	name;
    }
};
int option=0;
int inlog; 
class RouteDefinition
{
	 public:
	 	 string array[30];
		 string city; 
		 string camp;
		 char route_start;
		 char route_stop;
		 int status;
	 	 int title;
	 	 char ch,a;
	int route_title()
	{
		cout<<"1.    Chattar"<<endl;
		cout<<"2.    Trait"<<endl;
		cout<<"3.    Muree Bus Stand"<<endl;
		cout<<"4.    Ghora Gali"<<endl;
		cout<<"5.    Bansa Gali"<<endl;
		cout<<"6.    Sunny Bank"<<endl;
		cout<<"7.    Kuldana Chowk"<<endl;
		cout<<"8.    Jhika Gali"<<endl;
		cout<<"9.    Dairy Form"<<endl;
		cout<<"10.   Chitta Mor"<<endl;
		cout<<"11.   Chara Pani"<<endl;
		cout<<"12.   Comapny Bagh"<<endl;
		cout<<"13.   Salgran"<<endl;
		cout<<"14.   22 meel"<<endl;
		cout<<"15.   Judicial Town"<<endl;
		cout<<"16.   Bhara Khau"<<endl;
		cout<<"\n\n"<<endl;
		cout<<"Choose your route"<<endl;
		cin>>title;
		switch(title)
		{
			case 1:
				cout<<"Chattar"<<endl;
				break;
				case 2:
				cout<<"Trait"<<endl;
				break;
				case 3:
				cout<<"Muree Bus Stand"<<endl;
				break;
				case 4:
				cout<<"Ghora Gali"<<endl;
				break;
				case 5:
				cout<<"Bansa Gali"<<endl;
				break;
				case 6:
				cout<<"Sunny bank"<<endl;
				break;
				case 7:
				cout<<"Kuldana Chowk"<<endl;
				break;
				case 8:
				cout<<"Jhika Gali"<<endl;
				break;
				case 9:
				cout<<"Dairy Form"<<endl;
				break;
				case 10:
				cout<<"Chitta Mor"<<endl;
				break;
				case 11:
				cout<<"Charra Pani"<<endl;
				break;
				case 12:
				cout<<"Company Bagh"<<endl;
				break;
				case 13:
				cout<<"Salgran"<<endl;
				break;
				case 14:
				cout<<"22 Meel"<<endl;
				break;
				case 15:
				cout<<"Judicial Town"<<endl;
				break;
				case 16:
				cout<<"Bhara Khau"<<endl;
				break;
				default:
					cout<<"Invalid"<<endl;
		}
		
		cout<<"Do you Want To Add New Route Title(y/n) :"<<endl;
		cin>>ch;	
{
if (ch=='y')
     return getcity();
    else
     return getroute_start();
 
}
}
int getcity()
{
	int c;
	cout<<"Press any key to continue";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"Enter the city "<<endl;
		cout<<"1.    Islamabad"<<endl;
		cout<<"2.    Muree"<<endl;
	cin>>c;
	if(c == 1)
	{
		cout<<"	Islamabad	"<<endl;
	}
	else if(c == 2)
	{
		cout<<"	Muree	"<<endl;
	}
	else
	{
		cout<<"	Invalid	"<<endl;
	}
		cout<<"Enter route name"<<endl;
		cin>>a;
	    cout<<"Save Route"<<endl;
	return campus();
}
int campus()
{
	cout<<"\n";
	cout<<"\n";
	cout<<"*/*/*/*/*	BHARA KHAU CAMPUS	*/*/*/*/*/* "<<endl;
	return getroute_start();
}
int getroute_start()
{
	cout<<"\n";
	cout<<"\n";
	cout<<"	Route start From:	Punjab College 17 Meel "<<endl;
	cout<<"College Time      6:30  AM"<<endl;
	cout<<"University Time   12:30 Pm"<<endl;
	return getroute_stop();
}
int getroute_stop()
{
	cout<<"	*/*/*/	press any key to continue	*/*/*/	"<<endl;
	cout<<"\n";
	cout<<"\n";
	int s ;
	cout<<"	YOU ENTER THE BUS STOP	"<<endl;
	    cout<<"1.    Chattar"<<endl;
		cout<<"2.    Trait"<<endl;
		cout<<"3.    Muree Bus Stand"<<endl;
		cout<<"4.    Ghora Gali"<<endl;
		cout<<"5.    Bansa Gali"<<endl;
		cout<<"6.    Sunny Bank"<<endl;
		cout<<"7.    Kuldana Chowk"<<endl;
		cout<<"8.    Jhika Gali"<<endl;
		cout<<"9.    Dairy Form"<<endl;
		cout<<"10.   Chitta Mor"<<endl;
		cout<<"11.   Chara Pani"<<endl;
		cout<<"12.   Comapny Bagh"<<endl;
		cout<<"13.   Salgran"<<endl;
		cout<<"14.   22 meel"<<endl;
		cout<<"15.   Judicial Town"<<endl;
		cout<<"16.   Bhara Khau"<<endl;
		cout<<"\n\n"<<endl;
	cin>>s;
	if(s==1)
	{
		cout<<"Chattar"<<endl;
	}
	else if(s==2)
	{
		cout<<"	Trait	"<<endl;
	}
	else if(s==3)
	{
		cout<<"	Muree Bus Stand	"<<endl;
	}
	else if(s==4)
	{
		cout<<"	Ghora Gali	"<<endl;
	}
	else if(s==5)
	{
		cout<<"	Bansa Gali	"<<endl;
	}
	else if(s==6)
	{
		cout<<"	Sunny Bank	"<<endl;
	}
	else if(s==7)
	{
		cout<<"	Kuldana Chowk	"<<endl;
	}
	else if(s==8)
	{
		cout<<"	Jhika Gali	"<<endl;
	}
	else if(s==9)
	{
		cout<<"	Dairy Form	"<<endl;
	}
	else if(s==10)
	{
		cout<<"	Chitta Mor	"<<endl;
	}
	else if(s==11)
	{
		cout<<"	Charra Pani	"<<endl;
	}
	else if(s==12)
	{
		cout<<"	Company Bagh	"<<endl;
	}
	else if(s==13)
	{
        cout<<"	Salgran	"<<endl;
	}
	else if(s==14)
	{
	     cout<<"	22 Meel	"<<endl;
	}
	else if(s==15)
	{
		cout<<"	Judicial Town	"<<endl;
	}
	else if(s==16)
	{
		cout<<"	Bhara Khau	"<<endl;
	}
	else
	{
		cout<<"	*/*/*/*/*	INVALID ENTER BUS STOP		*/*/*/*/*	"<<endl;
	}
		return getstatus();
}
int getstatus()
{
	int status;
	cout<<"\n";
	cout<<"\n";
	cout<<"		******	BUS STATUS IS	********		"<<endl;
	cout<<"1.    Active"<<endl;
	cout<<"2.    INACTIVE"<<endl;
	cin>>status;
	{
	if (status==1)
	{
		cout<<"	ACTIVE	"<<endl;
	cout<<"\n\n\n\n\n\n   Enter the any key to return to main menu";
	getch();
	system("cls");
	return 1;
	}
	else
	{
		cout<<"	INACTIVE	"<<endl;
	}
}
}
};
 struct Cars {
    string mark [20] = {"Hiace","Bus","Suzuki Bolan","Suzuki"};

    string model [20]= {"2018OW","2005Ps","2008PW","2010QW"};

    string route [20]={" 17 meels to Chattar"," 17 meels to Trait"," 17 meels to Muree Bus Stand"," 17 meels to Ghora Gali"," 17 miles to Bansa Gali"," 17 meels to Sunny Bank"," 17 meels to Kuldana Chowk"," 17 meels to Jhika Gali"," 17 meels to Dairy Form","17 meels to Chitta Mor","17 meels to Chara Pani","17 meels to Comapny Bagh","17 meels to Salgran","17 meels to 22 meel","17 meels to Judicial Town","17 meels to Bhara Khau"};

    int rate [ 20 ] ={3000,3500,4500,3500,3000,4000,35000,4000,3700,3000,2500,4500,2500,2500,2500,2500,3000} ;

    int date [20] = {2010,2012,2013,2017,2018};
};

   struct Lessee {

   string Name [10];
   string Roll_ID [10] ;
   int payment_acc [ 10] ;
   string classs[10]; 
   };
 Cars car ;
 Lessee lessee ;
   void Minu ()
 {
   int num=1;
 for(int i=0 ;i<16;++i)
 {
 	cout<<"\t\t\t";
    cout<<"Enter " <<num<<"- To Select  "<<car.route[i]<<endl;
    num++ ;
 }

 }
 void Details (int theChoice)
  {
  	system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.mark[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<car.model[theChoice-1]<<endl;
     cout<<"\t\t\tRoute : "<<car.route[theChoice-1]<<endl;
     cout<<"\t\t\tRate : "<<car.rate[theChoice-1]<<"Rs"<<endl;


  }
   int check (int j )
  {
      if(lessee.payment_acc[j]  >= car.rate[j])
           cout<<"\n\n\n\t\t\tProcess has been done successfully!! " <<endl;
           else
              cout<<"\n\n\n\t\t\tNot Available " <<endl;
  }
  void user_input (int theChoice)
   {
   	system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF Transport Fee\n\n\n\n";
       cout<<"\t\t\tEnter Your Name : ";
       cin>>lessee.Name[j];
       cout<<"\t\t\tEnter Your Roll ID : ";
       cin>>lessee.Roll_ID[j] ;
       cout<<"\t\t\tPayment Amount: " ;
       cin>>lessee.payment_acc[j] ;
       cout<<"\t\t\tEnter Your Class : ";
       cin>>lessee.classs[j] ;
     check( j ) ;
   }
   int login()
{
   string password ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      password.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(password == "Iqra Noor"){
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted!\n\n";
      system("PAUSE");
      system("CLS");
      
   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
int main()
{
	{
	
    First A;
	cout << "LOADING PROGRAM...";
	Sleep (2000);
	cout << ".....";
	Sleep (2000);
	cout << ".....";
	Sleep (3000);
	cout << ".....";
	Sleep (2000);
	cout << ".....";
	Sleep (1000);
	cout << "" << endl;
	system("cls");
	cout << "**********************************************" << endl;
	cout << "WELCOME TO  Collage Transport Management ! PLEASE CHOOSE FROM THE CHOICES BELOW:" << endl;
	cout << "[1] REGISTER" << endl;
	cout << "[2] LOG-IN" << endl;
	cout << "**********************************************" << endl;
	cout << "Enter your choice here: ";
	cin >>option;
	if (option == 1)
	{
		system("cls");
		cout << "LOADING...";
		Sleep (2000);
		cout << ".....";
		Sleep (2000);
		cout << ".....";
		Sleep (3000);
		cout << ".....";
		cout << "" << endl;
		system("cls");
		cout << "==============================================" << endl;
		cout << "REGISTER BELOW:" << endl;
		cout << "==============================================" << endl;
		cout << "ENTER FIRST NAME: ";
		cin >> A.name.firstname;
		cout << "ENTER LAST NAME: ";
		cin >> A.name.lastname;
		cout << "ENTER USERNAME (UP TO 10 CHARACTERS LONG): ";
		cin >> A.signup.username;
		cout << "\n\nENTER PASSWORD (UP TO 10 CHARACTERS LONG): ";
		cin >> A.signup.password;
		cout << "==============================================" << endl;
		system("cls");
		cout << "PROCESSING...";
		Sleep (2000);
		cout << ".....";
		Sleep (2000);
		cout << ".....";
		Sleep (3000);
		cout << "....." << endl;
		system("cls");
		cout << "CONGRATULATIONS! YOU ARE NOW REGISTERED!" << endl;
		cout << "Want to Log-in? Press [2]." << endl;
		cin >> option;
		if (option == 2)
		{
			system("cls");
			cout << "LOADING...";
			Sleep (2000);
			cout << ".....";
			Sleep (2000);
			cout << ".....";
			Sleep (3000);
			cout << ".....";
			cout << "" << endl;
			system("cls");
			cout << "==============================================" << endl;
			cout << "LOG-IN BELOW:" << endl;
			cout << "==============================================" << endl;
			cout << "ENTER USERNAME: ";
			cin >> A.login.username2;
			cout << "\nENTER PASSWORD: ";
			cin >> A.login.password2;
			cout << "==============================================" << endl;
			system("cls");
			cout << "PROCESSING...";
			Sleep (2000);
			cout << ".....";
			Sleep (2000);
			cout << ".....";
			Sleep (3000);
			cout << "....." << endl;
			cout << "" << endl;
			system("cls");
			if(A.signup.username == A.login.username2 && A.signup.password == A.login.password2)
			{
				cout << "CONGRATULATIONS! YOU ARE NOW LOGGED IN!" << endl;
			}
			else if(A.signup.username != A.login.username2 && A.signup.password != A.login.password2)
			{
				cout << "OOPS! SEEMS LIKE YOUR USERNAME OR PASSWORD IS WRONG!" << endl;
				cout << "LOADING...";
				Sleep (2000);
				cout << ".....";
				Sleep (2000);
				cout << ".....";
				Sleep (3000);
				cout << ".....";
				system("cls");
				cout << "WELCOME, " << A.login.username2 << "!" << "YOU'VE OPENED OUR PROGRAM! Good Luck!" <<endl;
				cout<<"\n\n\nHave a Nice Day"<<endl;
			}
		}
	}

	else if (option == 3){
	}
	else{
		cout << "WRONG INPUT!" << endl;
	}
	}
	char ch;
	int num;
	do
	{
	cout<<"\n\n\n\t\t\tTEAM IQRA NOOR";	
	cout<<"\n\n\n\t\t\tWelcome To MAIN Menu ";
	cout<<"\n\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\n\t\t\t@@@	01: Vehicle Info                              @@@";
	cout<<"\n\n\t\t\t@@@	02: Complain Box                              @@@";
	cout<<"\n\n\t\t\t@@@	03: Complaint Box                             @@@";
	cout<<"\n\n\t\t\t@@@	04: Complaint Reply Box                       @@@";
	cout<<"\n\n\t\t\t@@@	05: Students read reply of Complaint BOX      @@@";
	cout<<"\n\n\t\t\t@@@	06: Route Defination                          @@@";
	cout<<"\n\n\t\t\t@@@	07: Transport Rate                            @@@";
	cout<<"\n\n\t\t\t@@@	08: Exit                                      @@@";
	cout<<"\n\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\n\t\t\tselect a Choose (01-06)";
	cin>>ch;
	switch (ch)
	{
		case '1':
			{
			cout<<"\n\nVEHICLE INFORMATION";	
           	Info obj;
        	obj.inputdata();
	        obj.displaydata();
            }		
			break;
	    case '2':
        {
	    cout<<" Complain BOX";
	    complaints obj;
	    obj.complaint();
        }
        break;
        case '3':
        {
	    cout<<" Complaint BOX";
	    complaintsbox obj1;
	    obj1.complaint1();
        }
        break;
           case '4':
        {
	    cout<<" Complaint Reply BOX";
	    Reply obj2;
	    obj2.replybox();
        }
        break;
          case '5':
        {
	    cout<<" Students read reply of Complaint BOX";
	    Replybox obj2;
	    obj2.reply1();
        }
        break;
        case '6':
    	cout<<"Route Defination";
    	{
    		RouteDefinition obj;
		cout<<"		*/*/*/*/	WELCOME  TO  THE  PGC  ROUTE  DEFINITION  INFORMATION	*/*/*/*/		"<<endl;
		obj.route_title();
		obj.getcity();
		obj.campus();
		obj.getroute_start();
		obj.getroute_stop();
		obj.getstatus();
		}
    	break;
    	case '7':
    		{
    		cout<<"Transport Rate";
    			int login();
                 login();

         string decide ="yes" ;
     cout<<"\t\t\t----------------------------------------------\n";    
     cout<<"\t\t\t\tTransport Rates \n";
     cout<<"\t\t\tWelcome to PGC TRANSPORT ,Choose from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     while(decide!="exit")
     {
         Minu();
     cout<<"\n\n\n\t\t\tYour Choice: ";
     int theChoice ;
     cin>>theChoice ;
     Details(theChoice);
     cout<<"\n\n\n\t\t\tAre You Sure, you want to Install Fee? (yes /no /exit ) : ";
     cin>>decide ;
     if(decide=="yes") {
        user_input(theChoice);
        cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
        cin>>decide;
        if (decide=="no") break ;
        
system("CLS");
     }

   else {
      if(decide=="no")
      {
      	system("CLS");
          continue ;
      }
     else if  (decide=="exit")
     {
     	system("CLS");
     	cout<<"\n\n\n\t\t\t TEAM IQRA NOOR";
     }

}
}

}
    		break;
    		
        case '8':
        	{
    		cout<<"Thanks For Visiting";
    		cout<<"\n\n\n\t\t\t Team Leader   ==========>>>>>>  Iqra Noor";
    		cout<<"\n\n\n\t\t\t Team Members\t\t\t\n\tYousia\n\tIqra Noor\n\tMobbena Sattar";
    	}
    		break;
    	default:
    		cout<<"Invalid Choice";
}
}
while(ch!='6');
getch();
return 0;
}
