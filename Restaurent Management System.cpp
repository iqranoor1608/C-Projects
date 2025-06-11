#include <iostream>       
#include <cmath>
#include <ctime>
#include <stdio.h>
#include <windows.h>
using namespace std;
class Usmania
{
	private:
	    time_t t = time(NULL);
        tm* timePtr = localtime(&t);
		int tot,pno,Rem,n,s,i;
		double invoice[100][6];
		char more;
		int Received_Amount;
	public:
			Usmania()
			{
				i=0;
				tot=0;
			}
        void product_detail()
        {
        cout<<"\t\t\t\t\t\t\t  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@                                @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  1:    Breakfast               @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  2:    Meal                    @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  3:    Fast Food               @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  4:    Sweet Dish              @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@                                @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"\n\t\t\t\t\t\t\t         *** Choose One Type ***"<<endl;
        for(n=1;n<=5;n++)
        {
        cout<<"\nEnter the Product Type :: ";
        cin>>n;
        if(n==1)
        {
        cout<<"Breakfast :-"<<endl;
		cout<<"\nEnter the Dish number :";
		cin>>pno;
		switch(pno)
	    	{
			    case 1:
				cout<<"The Dish Name is =  Nihari"<<endl;
				cout<<"________________________________"<<endl;
				break;
				case 2:
				cout<<"The Dish Name is =  Haleem"<<endl;
				cout<<"________________________________"<<endl;
				break;
				case 3:
				cout<<"The Dish Name is =  Siri Paye"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 4:
				cout<<"The Dish Name is =  Naan Chanay"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 5:
				cout<<"The Dish Name is =  Anda Paratha"<<endl;
				cout<<"____________________________________"<<endl;
				break;
				case 6:
				cout<<"The Dish Name is =  Halwa Puri"<<endl;
				cout<<"__________________________________"<<endl;
				break;
				case 7:
				cout<<"The Dish Name is =  Corn Flakes"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 8:
				cout<<"The Dish Name is =  Rusk Chai"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 9:
				cout<<"The Dish Name is =  Aloo Qeema Paratha"<<endl;
				cout<<"________________________________________"<<endl;
				break;
				case 10:
				cout<<"The Dish Name is =  Pathoray and Cholay"<<endl;
				cout<<"_________________________________________"<<endl;
				break;
				default:
				cout<<"Invalid Dish Number "<<endl;
				cout<<"_______________________"<<endl;
			}
		}
		else if(n==2) 
		{
		cout<<"Meal :-"<<endl;
		cout<<"\nEnter the Dish no :";
		cin>>pno;
		switch(pno)
	    	{
			    case 1:
				cout<<"The Dish Name is =  Chicken Biryani"<<endl;
				cout<<"______________________________________"<<endl;
				break;
				case 2:
				cout<<"The Dish Name is =  Beef Biryani"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 3:
				cout<<"The Dish Name is =  Chicken Pulao"<<endl;
				cout<<"____________________________________"<<endl;
				break;
				case 4:
				cout<<"The Dish Name is =  Chicken Karahi"<<endl;
				cout<<"______________________________________"<<endl;
				break;
				case 5:
				cout<<"The Dish Name is =  Chicken Tikka"<<endl;
				cout<<"____________________________________"<<endl;
				break;
				case 6:
				cout<<"The Dish Name is =  Handi"<<endl;
				cout<<"_____________________________"<<endl;
				break;
				case 7:
				cout<<"The Dish Name is =  Seekh Kebab"<<endl;
				cout<<"__________________________________"<<endl;
				break;
				case 8:
				cout<<"The Dish Name is =  Kofta"<<endl;
				cout<<"____________________________"<<endl;
				break;
				case 9:
				cout<<"The Dish Name is =  Chicken Malai Boti"<<endl;
				cout<<"________________________________________"<<endl;
				break;
				case 10:
				cout<<"The Dish Name is =  Aloo Qeema"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				default:
				cout<<"Invalid Dish Number "<<endl;
				cout<<"__________________________"<<endl;
			}
		}
		else if(n==3)
		{
		cout<<"Fast Food :-"<<endl;
		cout<<"\nEnter the Dish no :";
		cin>>pno;
		switch(pno)
	    	{
	    		case 1:
				cout<<"The Dish Name is =  Spicy Cheese Paratha"<<endl;
				cout<<"___________________________________________"<<endl;
				break;
				case 2:
				cout<<"The Dish Name is =  Chana Chaat"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 3:
				cout<<"The Dish Name is =  Chicken Pakoras"<<endl;
				cout<<"______________________________________"<<endl;
				break;
				case 4:
				cout<<"The Dish Name is =  Samoosa Chaat"<<endl;
				cout<<"______________________________________"<<endl;
				break;
				case 5:
				cout<<"The Dish Name is =  Fruit Chaat"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 6:
				cout<<"The Dish Name is =  Zinger Burger"<<endl;
				cout<<"____________________________________"<<endl;
				break;
				case 7:
				cout<<"The Dish Name is =  Fish Burger"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 8:
				cout<<"The Dish Name is =  Chicken Burger"<<endl;
				cout<<"______________________________________"<<endl;
				break;
				case 9:
				cout<<"The Dish Name is =  Beef Burger"<<endl;
				cout<<"__________________________________"<<endl;
				break;
				case 10:
				cout<<"The Dish Name is =  Shawarma"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				default:
				cout<<"Invalid Dish Number "<<endl;
				cout<<"_______________________"<<endl;
			}
		}
		else if(n==4) 
		{
		cout<<"Sweet Dish :-"<<endl;
		cout<<"\nEnter the Dish no :";
		cin>>pno;
		switch(pno)
	    	{
			    case 1:
				cout<<"The Dish Name is =  Kheer"<<endl;
				cout<<"___________________________"<<endl;
				break;
				case 2:
				cout<<"The Dish Name is =  Halwa"<<endl;
				cout<<"____________________________"<<endl;
				break;
				case 3:
				cout<<"The Dish Name is =  Sawaiyan"<<endl;
				cout<<"_______________________________"<<endl;
				break;
				case 4:
				cout<<"The Dish Name is =  Kashmiri Chai"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 5:
				cout<<"The Dish Name is =  Chai"<<endl;
				cout<<"___________________________"<<endl;
				break;
				case 6:
				cout<<"The Dish Name is =  Cofee"<<endl;
				cout<<"______________________________"<<endl;
				break;
				case 7:
				cout<<"The Dish Name is =  Tasty Kulfi"<<endl;
				cout<<"__________________________________"<<endl;
				break;
				case 8:
				cout<<"The Dish Name is =  Gajar ka Halwa"<<endl;
				cout<<"_____________________________________"<<endl;
				break;
				case 9:
				cout<<"The Dish Name is =  Ras Malai"<<endl;
				cout<<"________________________________"<<endl;
				break;
				case 10:
				cout<<"The Dish Name is =  Gulab Jamun"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				default:
				cout<<"Invalid Dish Number "<<endl;
				cout<<"_________________________"<<endl;
			}
		}
	else
	{
		cout<<"Invalid Type"<<endl;
		cout<<"____________________________________________"<<endl;
	}
    }
    }
		void get()
		{
		    do 
            { 
               cout<<"Enter the Dish Code:"<<endl;
               cin>>invoice[i][0];
               cout<<"Enter the Price of Dish:"<<endl;
               cin>>invoice[i][1];   
               cout<<"Enter the Quantity of Dish:"<<endl;
               cin>>invoice[i][2];
               invoice[i][3] = invoice[i][1] * invoice[i][2]; 
               cout<<"Do you have any other Dish to be entered next (y/n) ? ";
               cin>>more;
               i++;
            }
              while(more=='y'); 
                cout<<"\nEnter the Cash Paid by Customer :"<<endl;
				cin>>Received_Amount;
		}
	        void Billing()
	    	{
	    		cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
				cout<<"@@@@@       WELCOME TO USMANIA RESTAURANT!      @@@@@"<<endl;
				cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
				cout<<"\n";
	    		cout<<"*********************************************"<<endl;
				cout<<"Counter Name :";
	        	cin>>s;
	        	if(s==1)
	        	{
	            	cout<<"M.Abdullah"<<endl;
	            }
	            else if(s==2)
	            {
	            	cout<<"M.Ibrahim"<<endl;
				}
				else if(s==3)
				{
					cout<<"Sakandar Aziz"<<endl;
				}
				else
				{
					cout<<"The Bill Is Not Generatable"<<endl;
				}
                cout<<"___________________________________________"<<endl;
                cout<<"Date :   "<<(timePtr->tm_mday)<<"/"<<(timePtr->tm_mon)+1 <<"/"<<(timePtr->tm_year)+1900;
				cout<<"\tTime :   "<<(timePtr->tm_hour)<<":"<<(timePtr->tm_min)<<":"<<(timePtr->tm_sec)<<endl;
				cout<<"\n";
				cout << "D-Code | Price | D-Qty | Amount "<<endl;
				cout<<"___________________________________________"<<endl;
                for(int k=0; k<i; k++)   
	               {
		            for(int l=0; l<4; l++) 
		             {
		                 cout << invoice[k][l]  << "  \t  ";		   
		             }
		             cout << endl;
		             tot = tot + invoice[k][3];
		           }
		        cout<< "------------------------------------------"<<endl;
		        cout<<"Total Bill is :          "<<tot<<endl;
                cout<<"Cash Paid =              "<<Received_Amount<<endl;
				Rem = Received_Amount-tot;
				cout<<"Balance =                "<<Rem<<endl;
			    cout<<"*********************************************"<<endl;
		   }
};
int main()
{
	int c;
	char ch;
	cout<<"LOADING...........";
	Sleep (2000);
	cout<<".............";
	Sleep(2000);
	cout<<".............";
	Sleep(2000);
    system("cls");
	Usmania Items; 
    cout<<"\t\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\t @@@@@              USMANIA RESTAURANT            @@@@@"<<endl;
	cout<<"\t\t\t\t\t\t @@@@@                Ph:051-2986428              @@@@@"<<endl;
	cout<<"\t\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\n";
	xyz:
	cout<<"\t\t\t\t\t\t\t     *****************************"<<endl;
	cout<<"\t\t\t\t\t\t\t     |                           |"<<endl;
	cout<<"\t\t\t\t\t\t\t     |    1:   DISH INFO         |"<<endl;
	cout<<"\t\t\t\t\t\t\t     |    2:   CREATE BILL       |"<<endl;
	cout<<"\t\t\t\t\t\t\t     |                           |"<<endl;
	cout<<"\t\t\t\t\t\t\t     *****************************"<<endl;
	cout<<"Enter Your Choice"<<endl;
	cin>>c;
	if(c==1)
	{
		system("cls");
		cout<<"LOADING.........";
		Sleep(2000);
		cout<<".............";
		Sleep(2000);
		system("cls");
		Items.product_detail();
		Items.get();
		cout<<"Do you want to exit"<<endl;
		cin>>ch;
		if(ch=='y')
		goto pqr;
		else
		goto xyz;
	}
	else if(c==2)
	{
		system("cls");
		cout<<"LOADING.........";
		Sleep(2000);
		cout<<".............";
		Sleep(2000);
    	system("cls");
		Items.Billing();
		cout<<"\n";
		cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
       	cout<<"@@@@@@@@@@@    THANKS FOR VISITING US!   @@@@@@@@@@@"<<endl;
       	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
		cout<<"\n\nDo you want to exit"<<endl;
		cin>>ch;
		if(ch=='y')
		goto pqr;
		else 
		goto xyz;
	}
	else
    {
	    system("cls");
		cout<<"LOADING.........";
		Sleep(2000);
		cout<<".............";
		Sleep(2000);
		system("cls");
		cout<<"Wrong Choice !!!"<<endl;
		goto xyz;
	}
	pqr:
	return 0;
}
