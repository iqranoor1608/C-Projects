#include <iostream>
#include <conio.h>
#include <fstream>
#include <Windows.h>
using namespace std;
class ChenOne
{
	int ch,ch1,ch2,ch3,ch4;
	int A1,A2,A3,A4,A5,A6,A7,A8,B1,B2,B3,B4,B5,B6;
	double sum;
	double price = 0;
	int quantity;
	char a;
	int discount, dic,c;
	char name[50], n[50];
	//declare arrays
string itemName[100];
double itemCost[100] = {0.0};
//declare variables
string names;
double total = 0.0;
int numItems = 0;
	public:
		ChenOne() //constructor
		{
			cout<<"\n\n\n\n"<<endl;
	        cout<<"*************************************WELCOME TO THE CHENONE***********************************************************"<<endl;
	    }
			int intro()
		{
			cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=project=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<"\n"<<endl;
			cout<<"submitted to: ~~~~~~~~~ Mam Fareeha Rubab ~~~~~~~~~"<<"\n"<<endl;
		}
		int Menu()
		{
		
			cout<<"|------------------------------------Please Enter The Menu---------------------------------------------------------|"<<"\n"<<endl;
	    	cout<<" 1.       WOMEN"<<endl;
	    	cout<<" 2.       MEN"<<endl;
	    	cout<<" 3.       HOME TEXTILE"<<endl;
	    	cout<<" 4.       FURNITURE"<<endl;
				cin>>ch;
			switch (ch)
			{
			case 1:
				cout<<"WOMEN"<<endl;
				
	        
			
		{
		  cout<<"|---------------------------------------------------Welcome------------------------------------------------------|"<<"\n"<<endl;
		  cout<<"|---------------------------------------Please Enter what you will want------------------------------------------|"<<"\n"<<endl;
		  cout<<" 1.       PAREESA"<<endl;
	      cout<<" 2.       READY TO WEAR"<<endl;
	      cout<<" 3.       ACTIVE WEAR"<<endl;
	      cout<<" 4.       ACCESSORIES"<<endl;	
	     cin>>ch1;
			switch (ch1)
			{
			case 1:
				cout<<"PAREESA"<<endl;
				{
				cout<<"1.      PAREESA WINTER UNSTITCHED"<<"\n"<<endl;
				cout<<"2.      CHENONE PRET COLLECTION"<<"\n"<<endl;
				cout<<"3.      PAREESA PRE WINTER UNSTITCHED"<<"\n"<<endl;
				cout<<"4.      PAREESA PRET WINTER"<<"\n"<<endl;
				cin>>A1;
				 switch (A1)
				{
				case 1:
				cout<<"PAREESA WINTER UNSTITCHED"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
				cout<<"Total is      "<<sum<<endl;
				cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<"CHENONE PRET COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"PAREESA PRE WINTER UNSTITCHED"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"PAREESA PRET WINTER"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				case 2:
				cout<<"READY TO WEAR"<<endl;
				{
				cout<<"1.      TOPS"<<"\n"<<endl;
				cout<<"2.      BOTTOM"<<"\n"<<endl;
				  cin>>A2;
				 switch (A2)
				{
				case 1:
				cout<<"TOPS"<<"\n"<<endl;
				{
				cout<<"1.      Short Sweater"<<"\n"<<endl;
				cout<<"2.      Casual Shirts"<<"\n"<<endl;
				cout<<"3.      Jackets"<<"\n"<<endl;
				cout<<"4.      Casual Sweater"<<"\n"<<endl;
				cin>>A5;
				 switch (A5)
				{
				case 1:
				cout<<"Short Sweater"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')     
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<"Casual Shirts"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"Jackets"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"Casual Sweater"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
     			break;
				case 2:
				cout<<"BOTTOM"<<"\n"<<endl;
				 {
				cout<<"1.      Trouser Pull on LT-A677"<<"\n"<<endl;
				cout<<"2.      Trouser Pull on LT-B6457"<<"\n"<<endl;
				cout<<"3.      Casual Trouser Pull on LT-C6786"<<"\n"<<endl;
				cout<<"4.      Casual Trouser Pull on LT-C3456"<<"\n"<<endl;
				cin>>A6;
				 switch (A6)
				{
				case 1:
				cout<<"Trouser Pull on LT-A677"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<"Trouser Pull on LT-B6457"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"Casual Trouser Pull on LT-C6786"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"Casual Trouser Pull on LT-C3456"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
}
}
				break;
				case 3:
				cout<<"ACTIVE WEAR"<<endl;
				
				{
				cout<<"1.SPORTSWEAR"<<"\n"<<endl;
					cin>>A3;
				 switch (A3)
				{
				case 1:
				cout<<"SPORTSWEAR"<<"\n"<<endl;
			    {
				cout<<"1.      Jogging Suit"<<"\n"<<endl;
				cout<<"2.      Night Suit"<<"\n"<<endl;
				cin>>A7;
				 switch (A7)
				{
				case 1:
				cout<<"jogging Suit"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<"Night Suit"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				case 4:
				cout<<"ACCESSORIES"<<endl;
				{
				cout<<"1.      SCARF"<<"\n"<<endl;
					cin>>A4;
				 switch (A4)
				{
				case 1:
				cout<<"SCRAF"<<"\n"<<endl;
               {
				cout<<"1.      Scarf CN 17"<<"\n"<<endl;
				cout<<"2.      Scarf CN 31-4334"<<"\n"<<endl;
				cout<<"3.      Scarf CN 02-11"<<"\n"<<endl;
				cout<<"4.      Scarf CN 31-1"<<"\n"<<endl;
				cin>>A5;
				 switch (A5)
				{
				case 1:
				cout<<"Scarf CN 17"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<"Scarf CN 31-4334"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"Scarf CN 02-11"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"Scarf CN 31-1"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				default:
					cout<<"Invalid"<<endl;
				}
			}
 }
 
		break;
		    case 2:
				cout<<"MEN"<<endl;
			
		{
		
			  cout<<"|---------------------------------------------------Welcome------------------------------------------------------|"<<"\n"<<endl;
		  cout<<"|------------------------------------Please Enter what you will want---------------------------------------------------------|"<<"\n"<<endl;
		  cout<<" 1.       Pants"<<endl;
	      cout<<" 2.       shirts"<<endl;
	      cout<<" 3.       Shoes"<<endl;
		  cout<<" 4.       kameez Shalwar"<<endl;
		  cout<<" 5.       Waist Coat"<<endl;	
	     cin>>ch2;
			switch (ch2)
			{
			case 1:
				cout<<"Pants"<<endl;
                {
				cout<<"1.       Denim GTS Blue 3705"<<"\n"<<endl;
				cout<<"2.       Denim GTS Black 3342"<<"\n"<<endl;
				cout<<"3.       Denim GTS Grey 5435"<<"\n"<<endl;
				cout<<"4.       Denim GTS D/Gery 4554"<<"\n"<<endl;
				cout<<"5.       Denim GTS D/Nevy 4544"<<"\n"<<endl;
          		cout<<"6.       Denim GTS L/Blue 6446"<<"\n"<<endl;
				cin>>B5;
				 switch (B5)
				{
				case 1:
				cout<<"Denim GTS Blue 3705"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<"Denim GTS Black 3342"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"Denim GTS Grey 5435"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"Denim GTS D/Gery 4554"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 5:
				cout<<"Denim GTS D/Nevy 4544"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 6:
				cout<<"Denim GTS L/Blue 6446"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				case 2:
				cout<<"shirts"<<endl;
                {
				cout<<"1.       Denim Casual Blue 2342"<<"\n"<<endl;
				cout<<"2.       Denim Casual Black 5676"<<"\n"<<endl;
				cout<<"3.       Denim Brown  7753"<<"\n"<<endl;
				cout<<"4.       Denim D/Gery 6755"<<"\n"<<endl;
				cout<<"5.       Denim D/Nevy 45343"<<"\n"<<endl;
          		cout<<"6.       Denim Casual Green 54353"<<"\n"<<endl;
				cin>>B5;
				 switch (B5)
				{
				case 1:
				cout<<"Denim Casual Blue 2342"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<" Denim Casual Black 5676"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"Denim Brown  7753"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"Denim D/Gery 6755"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 5:
				cout<<"Denim D/Nevy 45343"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 6:
				cout<<"Denim Casual Green 54353"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				case 3:
				cout<<"Shoes"<<endl;
			    {
				cout<<"1.       MS-1311-18 Black"<<"\n"<<endl;
				cout<<"2.       MS-1307-18 Brown"<<"\n"<<endl;
				cout<<"3.       MS-1308-18 D/Blue"<<"\n"<<endl;
				cout<<"4.       MS-1310-18 L/Brown"<<"\n"<<endl;
				cout<<"5.       MS-1315-18 D/Brown"<<"\n"<<endl;
          		cout<<"6.       MS-1311-18 D/Nevy"<<"\n"<<endl;
				cin>>B5;
				 switch (B5)
				{
				case 1:
				cout<<"MS-1311-18 Black"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<" MS-1307-18 Brown"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<" MS-1308-18 D/Blue"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"MS-1310-18 L/Brown"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 5:
				cout<<"MS-1315-18 D/Brown"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 6:
				cout<<"MS-1311-18 D/Nevy"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<endl;
				} 
		}
		case 4:
				cout<<"Kameez Shalwar"<<endl;
                {
				cout<<"1.       GTS-3733 D/Brown"<<"\n"<<endl;
				cout<<"2.       GTS 3434 Black "<<"\n"<<endl;
				cout<<"3.       GTS 4342 Grey "<<"\n"<<endl;
				cout<<"4.       GTS 4554 D/Gery"<<"\n"<<endl;
				cout<<"5.       GTS 4544 D/Nevy "<<"\n"<<endl;
          		cout<<"6.       GTS 6446 L/Blue "<<"\n"<<endl;
				cin>>B6;
				 switch (B6)
				{
				case 1:
				cout<<"DGTS-3733 D/Brown"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<"GTS 3434 Black"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"DGTS 4342 Grey"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"GTS 4554 D/Gery"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 5:
				cout<<"GTS 4544 D/Nevy"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 6:
				cout<<"GTS 6446 L/Blue"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
			case 5:
				cout<<"Waist Coat"<<endl;
                {
				cout<<"1.       GTS-3823 Gery"<<"\n"<<endl;
				cout<<"2.       GTS 3434 Mahroon "<<"\n"<<endl;
				cout<<"3.       GTS 4342 Blue "<<"\n"<<endl;
				cout<<"4.       GTS 4554 D/Gery"<<"\n"<<endl;
				cout<<"5.       GTS 4544 D/Nevy "<<"\n"<<endl;
          		cout<<"6.       GTS 6446 Black "<<"\n"<<endl;
				cin>>B6;
				 switch (B6)
				{
				case 1:
				cout<<"DGTS-3823 Grey"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			     break;
				case 2:
				cout<<"GTS 3434 Mahroon"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"DGTS 4342 Blue"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"GTS 4554 D/Gery"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 5:
				cout<<"GTS 4544 D/Nevy"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 6:
				cout<<"GTS 6446 Black"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is       "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				default:
					cout<<"Invalid"<<endl;
				} 
		}
         break;
         case 3:
				cout<<"HOME TEXTILE"<<endl;
		{
			 cout<<"|---------------------------------------------------Welcome------------------------------------------------------|"<<"\n"<<endl;
		  cout<<"|------------------------------------Please Enter what you will want---------------------------------------------------------|"<<"\n"<<endl;
		  cout<<" 1.       BEDDING"<<endl;
	      cout<<" 2.       BATH ACCESSORIES"<<endl;
	      cout<<" 3.       KITCHEN ACCESSORIES"<<endl;
	     cin>>ch3;
			switch (ch3)
			{
			case 1:
				cout<<"BEDDING"<<endl;
				
					{
				cout<<"1.      WINTER COLLECTION"<<"\n"<<endl;
				cout<<"2.      BRIDAL COLLECTION"<<"\n"<<endl;
				cout<<"3.      SUMMER COLLECTION"<<"\n"<<endl;
				cout<<"4.      LUXURY COLLECTION"<<"\n"<<endl;
					cin>>B1;
				 switch (B1)
				{
				case 1:
				cout<<"WINTER COLLECTION "<<"\n"<<endl;
					{
				cout<<"1.      MELLOW WINTER COLLECTION"<<"\n"<<endl;
				cout<<"2.      VITAL WINTER COLLECTION"<<"\n"<<endl;
				cout<<"3.      GOLD CAVE WINTER COLLECTION"<<"\n"<<endl;
				cout<<"4.      INLAND WINTER COLLECTION"<<"\n"<<endl;
					cin>>B1;
				 switch (B1)
				{
				case 1:
				cout<<"MELLOW WINTER COLLECTION "<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"VITAL WINTER COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"GOLD CAVE WINTER COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"INLAND WINTER COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				case 2:
				cout<<"BRIDAL COLLECTION"<<"\n"<<endl;
					{
				cout<<"1.      ORIGIN BRIDAL COLLECTION"<<"\n"<<endl;
				cout<<"2.      VITAL BRIDAL COLLECTION"<<"\n"<<endl;
				cout<<"3.      KILIM-18 BRIDAL COLLECTION"<<"\n"<<endl;
				cout<<"4.      GRANAND BRIDAL COLLECTION"<<"\n"<<endl;
					cin>>B1;
				 switch (B1)
				{
				case 1:
				cout<<"ORIGIN BRIDAL COLLECTION "<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"VITAL BRIDAL COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"KILIM-18 BRIDAL COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"GRANAND BRIDAL COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				case 3:
				cout<<"SUMMER COLLECTION"<<"\n"<<endl;
					{
				cout<<"1.      CROSSLINE SUMMER COLLECTION"<<"\n"<<endl;
				cout<<"2.      PARABOLA SUMMER COLLECTION"<<"\n"<<endl;
				cout<<"3.      OCHRE SUMMER COLLECTION"<<"\n"<<endl;
				cout<<"4.      PROCELINE SUMMER COLLECTION"<<"\n"<<endl;
					cin>>B1;
				 switch (B1)
				{
				case 1:
				cout<<"CROSSLINE SUMMER COLLECTION "<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"PARABOLA SUMMER COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"OCHRE SUMMER COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"PROCELINE SUMMER COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
		break;
				case 4:
				cout<<"LUXURY COLLECTION"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				case 2:
				cout<<"BATH ACCESSORIES"<<endl;
				{
				cout<<"1.      TOWELS"<<"\n"<<endl;
				cin>>B2;
				 switch (B2)
				{
				case 1:
				cout<<"TOWELS"<<"\n"<<endl;
				{
				cout<<"1.      Regualr Towel-700 Crystal"<<"\n"<<endl;
				cout<<"2.      Hand Towel"<<"\n"<<endl;
				cout<<"3.      Reg Towel"<<"\n"<<endl;
				cout<<"4.      Set Reg Towel"<<"\n"<<endl;
					cin>>B1;
				 switch (B1)
				{
				case 1:
				cout<<" Regualr Towel-700 Crystal"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"Hand Towel"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"Reg Towel"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"Set Reg Towel"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
		}
				break;
				case 3:
				cout<<"KITCHEN ACCESSORIES"<<endl;
					{
				cout<<"1.      CROCKERIES"<<"\n"<<endl;
				cin>>B3;
				switch (B3)
				{
				case 1:
				cout<<"CROCKERIES"<<"\n"<<endl;
				{
				cout<<"1.      Fry Pan-0408210"<<"\n"<<endl;
				cout<<"2.      BUD HOLDER-0408244"<<"\n"<<endl;
				cout<<"3.      CAKE STAND-0104263"<<"\n"<<endl;
				cout<<"4.      TRAY-0104255"<<"\n"<<endl;
				cout<<"5.      BASKET-0508353"<<"\n"<<endl;
					cin>>B4;
				 switch (B4)
				{
				case 1:
				cout<<"Fry Pan-0408210"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"BUD HOLDER-0408244"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"CAKE STAND-0104263"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"TRAY-0104255"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			    case 5:
				cout<<"BASKET-0508353"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
				
		}
}
				} 
		}
	}
		        break;
				case 4:
				cout<<"FURNITURE"<<endl;
		{
			 cout<<"|-----------------------------------------------------Welcome ------------------------------------------------------------|"<<"\n"<<endl;
		  cout<<"|------------------------------------Please Enter what you will want---------------------------------------------------------|"<<"\n"<<endl;
		  cout<<" 1.       CHENONE FURNITURE"<<endl;
	      cout<<" 2.       WEDDING PACKAGE"<<endl;	
	     cin>>ch4;
			switch (ch4)
			{
			case 1:
				cout<<"CHENONE FURNITURE"<<endl;
					{
				cout<<"1.      BEDS & DRESING RANGE"<<"\n"<<endl;
					cin>>ch4;
				 switch (ch4)
				{
				case 1:
				cout<<"BEDS & DRESING RANGE"<<"\n"<<endl;
				{
				cout<<"1.      VICTORIA"<<"\n"<<endl;
				cout<<"2.      SUZANNE"<<"\n"<<endl;
				cout<<"3.      STRELING"<<"\n"<<endl;
				cout<<"4.      MIST"<<"\n"<<endl;
				cout<<"5.      GALAXY"<<"\n"<<endl;
					cin>>B4;
				 switch (B4)
				{
				case 1:
				cout<<"VICTORIA"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"SUZANNE"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"STRELING"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"MIST"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			    case 5:
				cout<<"GALAXY"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
				
		}
	}
}
			break;
				case 2:
				cout<<"WEDDING PACKAGE"<<endl;
	              	{
				cout<<"1.      GOLD PACKAGE"<<"\n"<<endl;
				cout<<"2.      DIAMOND PACKAGE"<<endl;	
				cout<<"3.      SILVER PACKAGE"<<endl;
				cout<<"4.      PLATINUM PACKAGE"<<endl;
						
					cin>>ch4;
				 switch (ch4)
				{
				case 1:
				cout<<"GOLD PACKAGE"<<"\n"<<endl;
				{
				cout<<"1.      VINGAGE BED + DRESSING "<<"\n"<<endl;
				cout<<"2.      VEZEL BED + DRESSING "<<"\n"<<endl;
				cout<<"3.      DEVINE BED + DRESSING "<<"\n"<<endl;
					cin>>B4;
				 switch (B4)
				{
				case 1:
				cout<<"VINGAGE BED + DRESSING"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"BVEZEL BED + DRESSING"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"DEVINE BED + DRESSING"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
				
		}
				break;
				case 2:
				cout<<"DIAMOND PACKAGE"<<"\n"<<endl;
					{
				cout<<"1.       D1796 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"2.       D1797 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"3.       D2795 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"4.       D1786 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"5.       D1788 DINNING TABLE + CHAIRS"<<"\n"<<endl;
					cin>>B4;
				 switch (B4)
				{
				case 1:
				cout<<"D1796 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"D1797 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"D1795 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"D1786 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			    case 5:
				cout<<"D1788 DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
				
		}
				break;
				case 3:
				cout<<"SILVER PACKAGE"<<"\n"<<endl;
				{
				cout<<"1.       POWER REC LINER "<<"\n"<<endl;
				cout<<"2.       RECTANGULAR COCKTAIL TABLE"<<"\n"<<endl;
				cout<<"3.       SQUARE COCKTAIL TABLE"<<"\n"<<endl;
				cout<<"4.       DINNING TABLE SEET"<<"\n"<<endl;
				cout<<"5.       DINNING TABLE SET + CHAIRS"<<"\n"<<endl;
					cin>>B4;
				 switch (B4)
				{
				case 1:
				cout<<"POWER REC LINER"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<"RECTANGULAR COCKTAIL TABLE"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum-(sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"SQUARE COCKTAIL TABLE"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"DINNING TABLE SET"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			    case 5:
				cout<<" DINNING TABLE + CHAIRS"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
				
		}
				break;
				case 4:
				cout<<"PLATINUM PACKAGE"<<"\n"<<endl;
                 {
				cout<<"1.        VISTA BED + SIDE TABLE "<<"\n"<<endl;
				cout<<"2.        VICTORIA BED "<<"\n"<<endl;
				cout<<"3.        TULIP BED + DRESSING TABLE"<<"\n"<<endl;
				cout<<"4.        MIST BED + SIDE TABLE"<<"\n"<<endl;
				cout<<"5.        MON DINNING TABLE SET + CHAIRS"<<"\n"<<endl;
					cin>>B4;
				 switch (B4)
				{
				case 1:
				cout<<"VISTA BED + SIDE TABLE"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			     cout<<"Total is       "<<sum<<endl;
			     cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			     cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 2:
				cout<<" VICTORIA BED"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 3:
				cout<<"TULIP BED + DRESSING TABLE"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is        "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				case 4:
				cout<<"MIST BED + SIDE TABLE"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
			    case 5:
				cout<<"  MON DINNING TABLE SET + CHAIRS"<<"\n"<<endl;
				cout<<"Price:"<<endl;
				cin>>price;
				cout<<"Quantity"<<endl;
				cin>>quantity;
				sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
			    cout<<"Enter the discount"<<endl;
				cin>>discount;
		        dic = sum - (sum*discount/100);
				cout<<"After Discount Your Bill is: "<<dic<<endl;
			    cout<<"\n Do You want to order Another Product ? (y/n)"<<endl;
			    cin>>a;
			    {
				if(a=='y')
			    return Menu();
			    else
			    return Bill();
			}
				break;
				
				default:
					cout<<"Invalid"<<"\n"<<endl;
				}
			}
					break;
				default:
					cout<<"Invalid"<<endl;
	 	}
		}
	}
		}
			break;
				default:
					cout<<"Invalid"<<endl;
					}
 }
	int Bill()		
{

//number of items
cout<<"Enter Customer Name:"<<endl;
cin>>name;
cout<<"Enter Emplyee Name:"<<endl;
cin>>n;
cout<<"Enter Counter Number:"<<endl;
cin>>c;
cout << "Enter number of items you will be entering: ";
cin >> numItems;

for (int i = 1; i >= 4; i++)
{
cin >> itemName[i] >> itemCost[i];
}

//item name and price input
for (int sub = 1; sub <= 4; sub += 1)
{
cout << "Enter item " << sub << ":";
cin>>itemName[sub];
cout << "Enter the cost of the " << itemName[sub] << ":";
cin >> itemCost[sub];


}
cout<<"\n\n\n\n";
cout<<"\t\t\t ************************ChenOne******************************* \t\t\t"<<endl;
cout<<"\n\n\n";
cout<<"__________________________________________________"<<endl;
cout<<"Customer Name:"<<name<<"\n\n";
cout<<"*******************************************"<<endl;
cout << "Iteams	"   << "\t\t " <<      "Cost" << endl;

//Display Data
for (int i = 1; i <= 4; ++i)
{
cout<<"*******************************************"<<endl;
cout << itemName[i] <<"\t\t";cout << itemCost[i];

cout << endl;
}// end for
cout<<"______________________________________________________________________________________"<<endl;
for (int i = 1; i <= 4; ++i)
{
total = (total + itemCost[i]);
}
cout<<"\n\n";
cout<<"_______________________________________________________________________________________"<<endl;
cout <<"\t\t"<<"\t\t\t"<<"Your Total Bill is:		" << total << endl;
cout<<"_______________________________________________________________________________________"<<endl;
cout<<"\n\n Thank You For Placing The Order"<<endl;
cout<<"_______________________________________________________________________________________"<<endl;
cout<<"Emplyee Name"<<"\t\t"<<n<<endl;
cout<<"Counter Number"<<"\t\t"<<c<<endl;

ofstream myfile;
myfile.open ("Chenone Bill.txt");
myfile<<"\t\t\t ************************ChenOne******************************* \t\t\t\n\n"<<endl;
myfile<<"__________________________________________________"<<endl;
myfile<<"Customer Name:"<<name<<endl;
myfile<<"*******************************************"<<endl;
myfile<< "Iteams	"   << "\t\t " <<      "Cost" << endl;
for (int i = 1; i <= 4; ++i)
myfile<< itemName[i]    <<"\t\t  " <<       itemCost[i]<<endl;
myfile<<"\n\n";
myfile<<"_______________________________________________________________________________________"<<endl;
myfile <<"\t\t"<<"\t\t\t"<<"Your Total Bill is:		" << total << endl;
myfile<<"_______________________________________________________________________________________"<<endl;
myfile<<"\n\n Thank You For Placing The Order"<<endl;
myfile<<"_______________________________________________________________________________________"<<endl;
myfile<<"Emplyee Name"<<"\t\t"<<n<<endl;
myfile<<"_______________________________________________________________________________________"<<endl;
myfile<<"Counter Number"<<"\t\t"<<c<<endl; 
myfile<<"_______________________________________________________________________________________"<<endl;
myfile.close();
exit(0);
}
};
int main()
{
	struct First{
	string user;
	struct{
		char username[10];
		char password[10];
	}signup;
	struct{
		char username2[10];
		char password2[10];
	}login;
	struct{
		char firstname[50];
		char lastname[50];
	}name;
};
int option=0;
int inlog;
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
	cout << "WELCOME TO ChenOne! PLEASE CHOOSE FROM THE CHOICES BELOW:" << endl;
	cout << "[1] REGISTER" << endl;
	cout << "[2] LOG-IN" << endl;
	cout << "**********************************************" << endl;
	cout << "Enter your choice here: ";
	cin >> option;
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
				cout << "CONGRATULATIONS! YOU ARE NOW LOGGED IN!" << endl;
				cout << "LOADING...";
				Sleep (2000);
				cout << ".....";
				Sleep (2000);
				cout << ".....";
				Sleep (3000);
				cout << ".....";
				system("cls");
				cout << "WELCOME, "<< "YOU'VE OPENED OUR PROGRAM! Good Luck!" <<endl;
				cout<<"\n\n\nHave a Nice Day"<<endl;
			}
		}
	}

	else if (option == 3){
	}
	else{
		cout << "WRONG INPUT!" << endl;
	}

ChenOne obj;
obj.intro();
obj.Menu();
obj.Bill();
}
