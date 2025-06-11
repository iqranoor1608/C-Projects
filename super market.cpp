#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class supermarket
{
	private:
		char customer_name[30];
		int price;
		int sum;
		int quantity;
		public:
				
					void input()
			{
				cout<<endl;
				cout<<"                   Enter the Customer Name"<<endl;
				                         cin>>customer_name;
				cout<<"________________________________________________________________________________"<<endl;
				cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
				cout<<"________________________________________________________________________________"<<endl;
			    cout<<"                           WELCOME TO THE SUPER MARKET                        "<<endl;
				cout<<"_________________________________________________________________________________"<<endl;
				cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;	
			    cout<<"__________________________________________________________________________"<<endl;
			    cout<<endl;
			    cout<<endl;
				cout<<"_________________________________________________________________________________"<<endl;
				cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
				cout<<"                                  MENU                           "<<endl;
				cout<<"_________________________________________________________________________________"<<endl;
				cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
			}
				
				void menu()
				{
			cout<<" select the item you want"<<endl;
			cout<<endl;
			cout<<"             *************      1) Grocery         **********"<<endl;
			cout<<"             *************      2) Dry Fruits      **********"<<endl;
			cout<<"             *************      3) Stationery      **********"<<endl;
			cout<<"             *************      4) Cosmetics       **********"<<endl;
			cout<<endl;
			int x;
			cout<<"enter your choice:"<<endl;
			cin>>x;
		switch(x)
		{
		case 1:
			{
				cout<<"               !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
				cout<<"                      GROCERY MENU"<<endl;
				cout<<"               !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
				cout<<endl;
				cout<<"        THE  LIST IS      "<<endl;
				cout<<"\n------------------------------------------------------------"<<endl;
				cout<<"                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
				cout<<"                    @              1= Colgate      @" <<endl;
				cout<<"                    @              2=Grains        @"<<endl;
				cout<<"                    @              3=Flour         @"<<endl;
				cout<<"                    @              4=Oil           @"<<endl;
				cout<<"                    @              5=Sugar         @"<<endl;
				cout<<"                    @              6=Tea           @"<<endl;
				cout<<"                    @              7=Rice          @"<<endl;
				cout<<"                    @              8=Max           @"<<endl;
				cout<<"                    @              9=Salt          @"<<endl;
				cout<<"                    @              10=Veniger      @"<<endl;
				cout<<"                    @              11=Jam          @"<<endl;
				cout<<"                    @              12=Eggs         @"<<endl;
				cout<<"                    @              13=Milk         @"<<endl;
				cout<<"                    @              14=Fish         @"<<endl;
				cout<<"                    @              15=Noodles      @"<<endl;
				cout<<"                    @              16=Yogurt       @"<<endl;
				cout<<"                    @              17=Chicken      @"<<endl;
				cout<<"                    @              18=Ketchup      @"<<endl;
				cout<<"                    @              19=Ajwain       @"<<endl;
				cout<<"                    @              20=Honey        @"<<endl;
				cout<<"                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
				cout<<"--------------------------------------------------------------"<<endl;
					int y;
					cout<<" enter your product:"<<endl;
					cin>>y;
					cout<<endl;
					if(y==1)
					{
							cout<<"  Colgate"<<endl;
							cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"\nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
			    cout<<"Total is      "<<sum<<endl;
					cout<<endl;
				}
				else if(y==2)
				{
					cout<<"     Grains"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"\nQuantity"<<endl;
					cin>>quantity;
					sum= price*quantity;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==3)
				{
				     cout<<"         Flour"<<endl;
				    cout<<"Price:"<<endl;
					cin>>price;
					cout<<"   Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==4)
				{
					cout<<"        Oil"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==5)
				{
					cout<<"        Sugar"<<endl;
					cout<<"  \nPrice:"<<endl;
					cin>>price;
					cout<<"  \nQuantity"<<endl;
					cin>>quantity;
					sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==6)
				{
					cout<<"         Tea"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
			        cout<<"Total is      "<<sum<<endl;
				}
				else if(y==7)
				{
					cout<<"           Rice"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					cout<<endl;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==8)
				{
					cout<<"              Soap"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==9)
			{
					cout<<"                Max="<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==10)
				{
					cout<<"                Salt "<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if (y==11)
				{
					cout<<"                  Jam"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"  \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==12)
				{
					cout<<"                   Egg"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==13)
				{
					cout<<"                      Milk"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"    \nQuantity"<<endl;
					cin>>quantity;
					sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==14)
				{
					cout<<"                     fish"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==15)
				{
					cout<<"                     Honey"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"         \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==16)
				{
					cout<<"                       Yougurt"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<" \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==17)
				{
				    cout<<"                          Honey"<<endl;
				    cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"      \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==18)
				{
					cout<<"                       Ketchup"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"          \nQuantity"<<endl;
				cin>>quantity;
					sum = price*quantity;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==19)
				{
					cout<<"                       Chicken"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"      \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
				else if(y==20)
				{
					cout<<"      Honey"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"      \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total of grocery is=    "<<sum<<endl;
				}
				else
				{
					cout<<"                       invalid product"<<endl;
				
				}
					cout<<"___________________________________________"<<endl;
	cout<<endl;
						cout<<"\ndo you need another item press y/n"<<endl;
					char h;
						cout<<"enter the character:"<<endl;
						cin>>h;
						if(h=='y')
						{
							return menu();
						}

break;
			case 2:
			{
					cout<<endl;
				cout<<"   *******************************"<<endl;
				cout<<"        DRY FRUITS"<<endl;
				cout<<"    ******************************"<<endl;
				cout<<endl;
				cout<<"____________________ THE LIST IS HERE_____________________"<<endl;
				cout<<"-------------------------------------------------"<<endl;
				cout<<"               @@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
				cout<<"               @       1=Peanut           @"<<endl;
				cout<<"               @       2=Walnuts          @"<<endl;
				cout<<"               @       3=Almond           @"<<endl;
				cout<<"               @       4= Dried Apricot   @"<<endl;
				cout<<"               @       5= Pistachious     @"<<endl;
				cout<<"               @       6 = Dry dates      @"<<endl;
				cout<<"               @       7= cashew nut      @"<<endl;
				cout<<"               @       8=dry coconut      @"<<endl;
				cout<<"               @       9= Pine nut        @"<<endl;
				cout<<"               @       10=saffron         @"<<endl;
				cout<<"               @@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
				cout<<"---------------------------------------------------"<<endl;
						int z;
						cout<<endl;
				cout<<"enter your product:"<<endl;
				cin>>z;
				if(z==1)
					{
				    cout<<"            1=Peanut"<<endl;
							cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
					
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(z==2)
					{
						cout<<"        2=Walnuts"<<endl;
							cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"\nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(z==3)
					{
					cout<<"     3=Almond"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"    \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
				}
					else if(z==4)
					{
						cout<<"       4=Dried Apricot"<<endl;
							cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"\nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
			       } 		
			    	else if(z==5)
				  {
					cout<<"      5= Pistachious"<<endl;
						cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<" \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
			     }
			      else if(z==6)
			    {
				cout<<"          6=Dry Dates"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"   \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
			     }
		      	else if(z==7)
			{
				cout<<"           7= cashew nut"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"  \nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
			}
			    else if(z==8)
			{
				cout<<"     8=dry coconut"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<< "\nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
			}
		    	else if(z==9)
			{
				cout<<"        9= Pine nut"<<endl;
					cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"\nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
			}
		     	else if(z==10)
			{
					cout<<"       10=saffron"<<endl;
						cout<<"\nPrice:"<<endl;
					cin>>price;
					cout<<"\nQuantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
			}
             	cout<<endl;
						cout<<"do you need another item press y/n"<<endl;
					char g;
						cout<<"enter the character:"<<endl;
						cin>>g;
						if(g=='y')
						{
							return menu();
					}
}
			 break;
			 case 3:
			{
				cout<<"               _____________________________________________"<<endl;
				cout<<"               ,,,,,,,,,,,,,, STATIONERY,,,,,,,,,,,,,"<<endl;
				cout<<"               ______________________________________________"<<endl;
				cout<<endl;
				cout<<    "          --------------- THE LIST IS HERE  ----------------    "<<endl;
				cout<<"\n------------------------------------------"<<endl;
				cout<<"               @@@@@@@@@@@@@@@@@@@@@@"<<endl;
				cout<<"               @  1=rubber stamp    @ "<<endl;
				cout<<"               @  2=eraser          @"<<endl;
				cout<<"               @  3=stapler         @"<<endl;
				cout<<"               @  4=drawing pins    @"<<endl;
				cout<<"               @  5=paper clips     @"<<endl;
				cout<<"               @  6=highlighters    @"<<endl;
				cout<<"               @  7=fountain pen    @"<<endl;
				cout<<"               @  8=pencil          @"<<endl;
				cout<<"               @  9=marker          @"<<endl;
				cout<<"               @  10=ballpoint      @"<<endl;
				cout<<"               @  11=tape dispenser @"<<endl;
				cout<<"               @  12= sharpener     @"<<endl;
				cout<<"               @  13=calculator     @"<<endl;
				cout<<"               @  14=glue stick     @"<<endl;
				cout<<"               @  15=scisors        @"<<endl;
				cout<<"               @@@@@@@@@@@@@@@@@@@@@@"<<endl;
				cout<<"-----------------------------------------------"<<endl;
					int w;
					cout<<endl;
					cout<<"enter your product:"<<endl;
					cin>>w;
					cout<<endl;
					if(w==1)
					{
							cout<<"1=rubber stamp   "<<endl;
								cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;

					}
					else if(w==2)
					{
						cout<<"2=Eraser"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==3)
					{
						cout<<"3 Stapler"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==4)
					{
						cout<<"4=Drawing pins"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==5)
					{
							cout<<"5=paper clips   "<<endl;
								cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==6)
					{
						cout<<"6=highlighters"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==7)
					{
						cout<<"7=fountain pen"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==8)
					{
						cout<<"8=pencil"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==9)
					{
						cout<<"9=markers"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==10)
					{
						cout<<"10=ball point"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==11)
					{
						cout<<"11=tape dispenser"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==12)
					{
						cout<<"12=sharpener"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
	
					}
					else if(w==13)
					{
						cout<<"13=calculator"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==14)
					{
						cout<<"14=glue stick"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(w==15)
					{
						cout<<"15=sciors"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
		        }
				cout<<endl;
					
			cout<<"\ndo you need another item press y/n"<<endl;
			cout<<endl;
					char g;
						cout<<"enter the character:"<<endl;
						cin>>g;
						if(g=='y')
						{
							return menu();
					}
				}
			}
			break;
				case 4:
			{
			    cout<<"                  <<<<<<<<<<<<<<<<<<<<"<<endl;
				cout<<"                          \nCOSMETIC\n"<<endl;
				cout<<"                  <<<<<<<<<<<<<<<<<<<<"<<endl;
				cout<<"                ---------------------  THE LIST IS HERE  --------------------"<<endl;
				cout<<"\n----------------------------------------------"<<endl;
				cout<<"                   @@@@@@@@@@@@@@@@@@@@@@"<<endl;
				cout<<"                   @   1=eye shadow     @"<<endl;
				cout<<"                   @   2=makeup kit     @"<<endl;
				cout<<"                   @   3=brightener     @"<<endl;
				cout<<"                   @   4=toner          @"<<endl;
				cout<<"                   @   5=nail polish    @"<<endl;
				cout<<"                   @   6=lipstick       @"<<endl;
				cout<<"                   @   7=lip gloss      @"<<endl;
				cout<<"                   @   8=lip liner      @"<<endl;
				cout<<"                   @   9=foundation     @"<<endl;
				cout<<"                   @   10=mascara       @"<<endl;
				cout<<"                   @   11=eye liner     @"<<endl;
				cout<<"                   @   12=blush         @"<<endl;
				cout<<"                   @   13=cleanser      @"<<endl;
				cout<<"                   @   14=bronzer       @"<<endl;
				cout<<"                   @   15=lotion        @"<<endl;
				cout<<"                   @@@@@@@@@@@@@@@@@@@@@@"<<endl;
				cout<<"\n-------------------------------------------"<<endl;
					int r;
					cout<<"enter your product:"<<endl;
					cin>>r;
					if(r==1)
					{
						cout<<"   eye shadow"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
				
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==2)
					{
						cout<<"   makeup kit"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==3)
					{
						cout<<" brightener"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==4)
					{
						cout<<"    toner"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==5)
					{
						cout<<"    nail polish"<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;	
					}
					else if(r==6)
					{
							cout<<"   lipstick "<<endl;
								cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==7)
					{
						cout<<"  lip gloss "<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==8)
					{
						cout<<"   8=lip liner "<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==9)
					{
							cout<<"   9=foundation "<<endl;
								cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==10)
					{
						cout<<"  10=mascara "<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==11)
					{
						cout<<"   11=eye liner "<<endl;
							cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==12)
					{
							cout<<"   12=blush "<<endl;
								cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==13)
					{
							cout<<"   13=cleanser "<<endl;
								cout<<"Price:"<<endl;
					cin>>price;
					cout<<"Quantity"<<endl;
					cin>>quantity;
					sum=price*quantity;
					cout<<endl;
			    cout<<"Total is      "<<sum<<endl;
					}
					else if(r==14)
					{
							cout<<"   14=bronzer "<<endl;
								cout<<"Price:"<<endl;
					cout<<"\n quantity"<<endl;
					cin>>quantity;
					sum = price*quantity;
			    cout<<"Total of cosmetic is  ="<<sum<<endl;
					}
				cout<<endl;
			cout<<"\ndo you need another item press y/n"<<endl;
			cout<<endl;
					char g;
						cout<<"enter the character:"<<endl;
						cin>>g;
						if(g=='y')
						{
							return menu();
					}
					
					
			break;
			default:
				cout<<"Invalid Option"<<endl;
	}
}
}
void amount()
{
char product_name[30];
int product_price[4];
int bill=0;
int discount;
cout<<endl;
int a;
cout<<" enter the products  that u will bought"<<endl;
cin>>a;

cout<<endl;
for(int b=1; b<=4; b++)
{

cout<<"enter the name of item:"<<b<<endl;
cin>>product_name;
cout<<"enter the product_price: "<<product_name<<endl;
cin>>product_price[b];
cout<<endl;
bill=bill+product_price[b];
}

cout<<"   :::::::::::::::::::  TOTAL BILL  :::::::::::::::::::::"<<endl;
cout<<customer_name<<"\t\t\tyour total is="<<bill<<endl;
cout<<"discount:"<<endl;
cin>>discount;
bill=bill-(bill*discount/100);
cout<<"\n after discount your total bill is="<<bill<<endl;
cout<<endl;
cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;
cout<<"thank u for shopping here"<<endl;
cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;
}
};
int main()
{
		char c;
	int ch;
	cout<<"LOADING...";
	Sleep (2000);
cout<<"........";
Sleep (3000);
cout<<"......";
Sleep (3000);
system("cls");
getch();
system("cls");
supermarket obj;
xyz:
	cout<<endl;
	cout<<"                 @@@@@@@@@@    MAIN MENU   @@@@@@@@@@"<<endl;
	cout<<"                 |      1.  CUSTOMER NAME           |"<<endl;
	cout<<"                 |      2.  MENU                    |"<<endl;
	cout<<"                 |      3.  CREATE BILL             |"<<endl;
	cout<<"                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"                  \nEnter your choice"<<endl;
	cin>>ch;
	if(ch>=4)
	{
		
system("cls");cout<<"SORRY!!! Wrong choice"<<endl;
		cout<<"...........";
		Sleep (2000);
		cout<<"____________";
		Sleep (3456);
		goto xyz;
		
	}
	if(ch==1)
	{	system("cls");
		cout<<"CUSTOMER NAME:"<<endl;
		obj.input();
		cout<<"DO YOU WANT TO EXIT:"<<endl;
		cin>>c;
		if(c=='n')
			
		goto xyz;
		else 
		goto std;
		
	}
	else if(ch==2)
	{ 	system("cls");
		cout<<"MENU :"<<endl;
		obj.menu();
		cout<<"DO YOU WANT TO EXIT"<<endl;
		cin>>c;
		if(c=='n')
		goto xyz;
		else 
		goto std;
	}
	else if(ch==3)
	{	system("cls");
		cout<<"CREATE BILL :"<<endl;
		obj.amount();
		cout<<"DO YOU WANT TO EXIT"<<endl;
		cin>>c;
		if(c=='n')
		goto xyz;
		else 
		
		cout<<"\n********** THANK YOU FOR SHOPPPING HERE ***************\n"<<endl;
		goto std;
			}
			std:
	getch();
	return 0;
}
