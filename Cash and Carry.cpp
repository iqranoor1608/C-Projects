#include <iostream>       
#include <conio.h>
#include <cmath>
#include <ctime>
#include <stdio.h>
#include <windows.h>
using namespace std;
class PCC
{
	private:
	    time_t t = time(NULL);
        tm* timePtr = localtime(&t);
		int tot,pno,Rem,n,s,i;
		double invoice[100][6];
		char more;
		int Received_Amount;
	public:
			PCC()
			{
				i=0;
				tot=0;
			}
        void product_detail()
        {
        cout<<"\t\t\t\t\t\t\t  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@                                @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  1:   Cosmetics                @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  2:   Electronics & Crockery   @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  3:   Food & Spices            @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  4:   Stationary               @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@  5:   Jewellery                @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@                                @@"<<endl;
        cout<<"\t\t\t\t\t\t\t  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"\n\t\t\t\t\t\t\t         *** Choose One Type ***"<<endl;
        for(n=1;n<=6;n++)
        {
        cout<<"\nEnter the Product Type :: ";
        cin>>n;
        if(n==1)
        {
        cout<<"Cosmetics :-"<<endl;
		cout<<"\nEnter the product number :";
		cin>>pno;
		switch(pno)
	    	{
			    case 1:
				cout<<"The Product Name is = Kajal"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 2:
				cout<<"The Product Name is = Eye Liner"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 3:
				cout<<"The Product Name is = Lip Liner"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 4:
				cout<<"The Product Name is = Eye Shades"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 5:
				cout<<"The Product Name is = Blush On"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 6:
				cout<<"The Product Name is = Mascara"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 7:
				cout<<"The Product Name is = Foundation"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 8:
				cout<<"The Product Name is = Lip Gloss"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 9:
				cout<<"The Product Name is = Concealer"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 10:
				cout<<"The Product Name is = Lipsticks"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				default:
				cout<<"Invalid Product Number "<<endl;
				cout<<"_________________________________"<<endl;
			}
		}
		else if(n==2) 
		{
		cout<<"Electronics and Crockery :-"<<endl;
		cout<<"\nEnter the product no :";
		cin>>pno;
		switch(pno)
	    	{
				case 1:
				cout<<"The Product Name is = Glass"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 2:
				cout<<"The Product Name is = Cup"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 3:
				cout<<"The Product Name is = Spoon"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 4:
				cout<<"The Product Name is = Knife"<<endl;
				cout<<"____________________________"<<endl;
				break;
				case 5:
				cout<<"The Product Name is = Bowl"<<endl;
				cout<<"___________________________"<<endl;
				break;
				case 6:
				cout<<"The Product Name is = Plate"<<endl;
				cout<<"____________________________"<<endl;
				break;
				case 7:
				cout<<"The Product Name is = Dishes"<<endl;
				cout<<"_____________________________"<<endl;
				break;
				case 8:
				cout<<"The Product Name is = Hand Blender and Beater"<<endl;
				cout<<"______________________________________________"<<endl;
				break;
				case 9:
				cout<<"The Product Name is = Panasonic Juicer"<<endl;
				cout<<"_______________________________________"<<endl;
				break;
				case 10:
				cout<<"The Product Name is = Microwave Oven"<<endl;
				cout<<"_____________________________________"<<endl;
				break;
				default:
				cout<<"Invalid Product Number "<<endl;
				cout<<"___________________________"<<endl;
			}
		}
		else if(n==3)
		{
		cout<<"Food and Spices :-"<<endl;
		cout<<"\nEnter the product no :";
		cin>>pno;
		switch(pno)
	    	{
				case 1:
				cout<<"The Product Name is = Apples"<<endl;
				cout<<"_____________________________"<<endl;
				break;
				case 2:
				cout<<"The Product Name is = Oranges"<<endl;
				cout<<"______________________________"<<endl;
				break;
				case 3:
				cout<<"The Product Name is = Coca Cola"<<endl;
				cout<<"________________________________"<<endl;
				break;
				case 4:
				cout<<"The Product Name is = Sprite"<<endl;
				cout<<"_____________________________"<<endl;
				break;
				case 5:
				cout<<"The Product Name is = Black Paper"<<endl;
				cout<<"__________________________________"<<endl;
				break;
				case 6:
				cout<<"The Product Name is = Maranda"<<endl;
				cout<<"______________________________"<<endl;
				break;
				case 7:
				cout<<"The Product Name is = 7 Up"<<endl;
				cout<<"___________________________"<<endl;
				break;
				case 8:
				cout<<"The Product Name is = Pepsi"<<endl;
				cout<<"____________________________"<<endl;
				break;
				case 9:
				cout<<"The Product Name is = Nestle Juice"<<endl;
				cout<<"___________________________________"<<endl;
				break;
				case 10:
				cout<<"The Product Name is = wheat"<<endl;
				cout<<"____________________________"<<endl;
				break;
				default:
				cout<<"Invalid Product Number "<<endl;
				cout<<"________________________"<<endl;
			}
		}
		else if(n==4)
		{
		cout<<"Stationary :-"<<endl;
		cout<<"\nEnter the product no :";
		cin>>pno;
		switch(pno)
	    	{
				case 1:
				cout<<"The Product Name is = Pen"<<endl;
				cout<<"__________________________"<<endl;
				break;
				case 2:
				cout<<"The Product Name is = Highlighter"<<endl;
				cout<<"__________________________________"<<endl;
				break;
				case 3:
				cout<<"The Product Name is = Marker"<<endl;
				cout<<"_____________________________"<<endl;
				break;
				case 4:
				cout<<"The Product Name is = Pencil"<<endl;
				cout<<"_____________________________"<<endl;
				break;
				case 5:
				cout<<"The Product Name is = Eraser"<<endl;
				cout<<"_____________________________"<<endl;
				break;
				case 6:
				cout<<"The Product Name is = Note Book"<<endl;
				cout<<"________________________________"<<endl;
				break;
				case 7:
				cout<<"The Product Name is = Ruler"<<endl;
				cout<<"____________________________"<<endl;
				break;
				case 8:
				cout<<"The Product Name is = Gluestick"<<endl;
				cout<<"________________________________"<<endl;
				break;
				case 9:
				cout<<"The Product Name is = Calculator"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 10:
				cout<<"The Product Name is = Plain Paper"<<endl;
				cout<<"__________________________________"<<endl;
				break;	
				default:
				cout<<"Invalid Product Number "<<endl;
				cout<<"________________________"<<endl;
			}
	}
		else if(n==5)
		{
		cout<<"Jewellery :-"<<endl;
		cout<<"\nEnter the product no :";
		cin>>pno;
		switch(pno)
	    	{
			    case 1:
				cout<<"The Product Name is = Earrings"<<endl;
				cout<<"_______________________________"<<endl;
				break;
				case 2:
				cout<<"The Product Name is = Necklace"<<endl;
				cout<<"_______________________________"<<endl;
				break;
				case 3:
				cout<<"The Product Name is = Bracelet"<<endl;
				cout<<"_______________________________"<<endl;
				break;
				case 4:
				cout<<"The Product Name is = Cuff Links"<<endl;
				cout<<"_________________________________"<<endl;
				break;
				case 5:
				cout<<"The Product Name is = Rings"<<endl;
				cout<<"____________________________"<<endl;
				break;
				case 6:
				cout<<"The Product Name is = Pendants"<<endl;
				cout<<"_______________________________"<<endl;
				break;
				case 7:
				cout<<"The Product Name is = Watch"<<endl;
				cout<<"____________________________"<<endl;
				break;
				case 8:
				cout<<"The Product Name is = Bangles"<<endl;
				cout<<"______________________________"<<endl;
				break;
				case 9:
				cout<<"The Product Name is = Hair Pin"<<endl;
				cout<<"_______________________________"<<endl;
				break;
				case 10:
				cout<<"The Product Name is = Nose Pin"<<endl;
				cout<<"_______________________________"<<endl;
				break;	
				default:
				cout<<"Invalid Product Number "<<endl;
				cout<<"________________________"<<endl;
	    	}
    	}
	else
	{
		cout<<"Invalid Type"<<endl;
	}
    }
    }
		void get()
		{
		    do 
            { 
               cout<<"Enter the Item Code:"<<endl;
               cin>>invoice[i][0];
               cout<<"Enter the Price of Item:"<<endl;
               cin>>invoice[i][1];   
               cout<<"Enter the Quantity of Item:"<<endl;
               cin>>invoice[i][2];
               invoice[i][3] = invoice[i][1] * invoice[i][2]; 
               cout<<"Do you have any other Items to be entered next (y/n) ? ";
               cin>>more;
               i++;
            }
              while(more=='y'); 
                cout<<"\nEnter the Cash Paid by Customer :"<<endl;
				cin>>Received_Amount;
		}
	        void Billing()
	    	{
	    		cout<<"\t\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
				cout<<"\t\t\t\t\t\t @@@@@     WELCOME TO PUNJAB CASH AND CARRY!     @@@@@"<<endl;
				cout<<"\t\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
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
				else if(s==4)
				{
					cout<<"Ejaz Khan"<<endl;
				}
				else if(s==5)
				{
					cout<<"Feroze Shah"<<endl;
				}
				else
				{
					cout<<"The Bill Is Not Generatable"<<endl;
				}
                cout<<"___________________________________________"<<endl;
                cout<<"Date :   "<<(timePtr->tm_mday)<<"/"<<(timePtr->tm_mon)+1 <<"/"<<(timePtr->tm_year)+1900;
				cout<<"\tTime :   "<<(timePtr->tm_hour)<<":"<<(timePtr->tm_min)<<":"<<(timePtr->tm_sec)<<endl;
				cout<<"\n";
				cout << "I_Code | Price | Qty | Amount "<<endl;
				cout<<"___________________________________________"<<endl;
                for(int k=0; k<i; k++)   
	               {
		            for(int l=0; l<4; l++) 
		             {
		                 cout << invoice[k][l]  << " \t ";		   
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
         ~PCC()
         {
         	cout<<"\t\t\t\t\t\t __________ Return & Replace Within 5 Days!__________\n"<<endl;
         	cout<<"\t\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
         	cout<<"\t\t\t\t\t\t @@@@@@@@@@@    THANKS FOR VISITING US!   @@@@@@@@@@@"<<endl;
         	cout<<"\t\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
		 }
};
int main()
{
	int c;
	char ch;
	cout<<"LOADING...........";
	Sleep (3000);
	cout<<".............";
	Sleep(3000);
	cout<<".............";
	Sleep(2000);
    system("cls");
	PCC Items; 
	cout<<"Project Name:     Cash and Carry \nPresented by:       Iqra Noor"<<endl;
	cout<<"______________________________________"<<endl;
    cout<<"\t\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\t\t\t\t\t\t @@@@@     WELCOME TO PUNJAB CASH AND CARRY!     @@@@@"<<endl;
	cout<<"\t\t\t\t\t\t @@@@@           Bhara Kahu Islamabad            @@@@@"<<endl;
	cout<<"\t\t\t\t\t\t @@@@@              Ph: 051-2165111              @@@@@"<<endl;
	cout<<"\t\t\t\t\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"\n";
	xyz:
	cout<<"\t\t\t\t\t\t\t     *****************************"<<endl;
	cout<<"\t\t\t\t\t\t\t     |                           |"<<endl;
	cout<<"\t\t\t\t\t\t\t     |    1:   PRODUCT DETAIL    |"<<endl;
	cout<<"\t\t\t\t\t\t\t     |    2:   CREATE BILL       |"<<endl;
	cout<<"\t\t\t\t\t\t\t     |    3:   Main Menu         |"<<endl;
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
		cout<<"Welcome to Product Detail\n"<<endl;
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
		cout<<"Create Bill:"<<endl;
		Items.Billing();
		cout<<"\nDo you want to exit"<<endl;
		cin>>ch;
		if(ch=='y')
		goto pqr;
		else 
		goto xyz;
	}
	else if(c==3)
   	{
	   	system("cls");
	   	cout<<"LOADING.........";
	   	Sleep(2000);
		cout<<".............";
	   	Sleep(2000);
	   	system("cls");
	   	cout<<"Main Menu"<<endl;
	   	goto xyz;
	   	cout<<"\nDo you want to exit"<<endl;
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
	getch();
	return 0;
}
