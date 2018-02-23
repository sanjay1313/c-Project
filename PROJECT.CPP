#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<fstream.h>
#include<iomanip.h>
#include<graphics.h>
#include<dos.h>
int c=0;
class cust
{
char name[30];
char id[50];
char gender[10];
char country[20];
int age;
public:
char contact[15];
long int code;
void customerd()
{
cout<<"\n\t\t@@@@@@@@@ ENTER YOUR DETAILS: @@@@@@@@@@"<<endl;
cout<<"\n NAME           : ";
gets(name);
cout<<"\n AGE            : ";
cin>>age;
cout<<"\n GENDER         : ";
gets(gender);
cout<<"\n CONTACT NO     : ";
cin>>contact;
cout<<"\n COUNTRY        : ";
gets(country);
cout<<"\n CUSTOMER CODE  : ";
cin>>code;
}



void customersh()
{

//clrscr();
cout<<"\n"<<setw(10)<<name<<setw(10)<<age<<setw(10)<<gender<<setw(15)<<contact<<setw(10)<<country<<setw(10)<<code<<endl;
}

void data()
{
cout<<"\n\t\t ########## MENU ########## "<<endl;
cout<<" 1. Buffalo wings      $6.95   \n"
    <<" 2. Super Burgur       $5.75   \n"
    <<" 3. Indian sandwich   $7.25   \n"
    <<" 4. shrimp nuggets     $8.95   \n"
    <<" 5. Veggie supreme     $4.95   \n"
    <<" 6. PIZZA              RS 49.2  \n"
    <<" 7. DOKHLA             RS 99.8  \n"
    <<" 8. NUDDELS            RS 99.6  \n"
    <<" 9. IDALI              RS 67.5  \n"
   <<" 10. PAOBAJHI           RS 150.7 \n"
   <<" 11. HKKA NUDDELS       RS 130.9 \n"
   <<" 12. GRILLED SANWICH    RS 52.8  \n"
   <<" 13. BULLETS            RS 39.3  \n"
   <<" 14. CHAAMP             RS 170.4 \n"
   <<" 15. ICECREAM           RS 50.7  \n"
   <<" 16. PUNJABI LASSI      RS 70.9  \n"
   <<" 17. CHOCLATE SHAKE     RS 70.2  \n"
   <<" 18. STRAWBERRY SHAKE   RS 80.1  \n"
   <<" 19. COOL DRINK         RS 40.2  \n"
   <<" 20. SOFT DRINK         RS 20.3  \n";
}
};

void main()
{
clrscr();

top1:
char password[15]="yahoo";
char pass[15],uname[15];
char ch;
int i=0;
clrscr();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
cout<<"\t\t Please type valid user password "<<endl;
cout<<"\n\n\n\n\n\n\n\n\t\t\t USER NAME : ";
rectangle(350,143,480,160);
gotoxy(50,10);
cin>>uname;
cout<<"\n\t\t\t PASSWORD  : ";
rectangle(350,175,480,192);
gotoxy(50,12);
while((ch=getch())!='\r')
{
cout<<"*";
pass[i]=ch;
i++;
}
pass[i]='\0';
if(strcmp(pass,password)==0)
{
cout<<"\n\n\t\t Valid user"<<"\n\t\t\t Your password is correct"<<endl;
getch();
//goto down;
}
else
{
cout<<"\n\n\n\n\n\n\t\t\t Your password is incorrect"<<endl;
getch();
c++;
if(c==3)
{
cout<<endl<<"\t\tMaximum attempt for invalid access reached";
getch();
exit(0);
}
goto top1;
}


   //Welcome Screen!
     clrscr();
     int w,v,y,gd=DETECT,gm,color,angle=0;
     initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
     struct arccoordstype a,b;
     settextstyle(4,0,5);
     setcolor(10);
     outtextxy(40,40, " Restaurant Billing System");
     outtextxy(50,60,"===================");
     settextstyle(1,0,1);
     setcolor(19);
     outtextxy(220,280,"Loading,Please Wait...");
     settextstyle(DEFAULT_FONT,0,1);
     outtextxy(190,380,"Copyrights 2015 | All Rights Reserved");
     outtextxy(220,400,"     Group Project ");
     while(!kbhit())
     {  //Loading Circle.
	setcolor(BLACK);
	arc(getmaxx()/2,getmaxy()/2,angle,angle+2,25);
	setcolor(8);
	getarccoords(&a);
	setfillstyle(SOLID_FILL,8);
	circle(a.xstart,a.ystart,5);
	floodfill(a.xstart,a.ystart,8);

	setcolor(BLACK);
	arc(getmaxx()/2,getmaxy()/2,(angle+30)%360,(angle+30)%360+2,25);
	setcolor(8);
	getarccoords(&a);
	setfillstyle(SOLID_FILL,7);
	circle(a.xstart,a.ystart,5);
	floodfill(a.xstart,a.ystart,8);

	setcolor(BLACK);
	arc(getmaxx()/2,getmaxy()/2,(angle+60)%360,(angle+60)%360+2,25);
	setcolor(7);
	getarccoords(&a);
	setfillstyle(SOLID_FILL,7);
	circle(a.xstart,a.ystart,5);
	floodfill(a.xstart,a.ystart,7);

	setcolor(BLACK);
	arc(getmaxx()/2,getmaxy()/2,(angle+90)%360,(angle+90)%360+2,25);
	setcolor(15);
	getarccoords(&a);
	setfillstyle(SOLID_FILL,15);
	circle(a.xstart,a.ystart,5);
	floodfill(a.xstart,a.ystart,15);
	angle = angle+30;
	delay(100);
	if(angle==720)
	{
	   break;
	}
     }
     getch();
     closegraph();

clrscr();
cust t;
fstream f1;
f1.open("god1.dat",ios::out|ios::in|ios::app|ios::binary);
int x;
up:
clrscr();
cout<<"\t\t################ AMRITSAR COLLEGE OF ENGINEERING AND TECHNOLOGY###################"<<endl;
cout<<"\n\n\n\n\n\n\t\t   #########################################"<<endl;
cout<<"\t\t   ***$*** WELCOME TO OUR FOOD COURT ***$***"<<endl;
cout<<"\t\t   #########################################"<<endl;
int z;
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t press 1: for RESTAURANT INFORMATION"<<endl;
cout<<"\t\t\t press 2: for RESTAURANT LOCATION"<<endl;
cout<<"\t\t\t press 3: for RESTAURANT OWNER"<<endl;
cout<<"\t\t\t press 4: for RESTAURANT TIMINGS"<<endl;
cout<<"\t\t\t press 5: for MOVE FORWORD"<<endl;
cin>>z;
switch(z)
{
case 1:
clrscr();
cout<<"\n\n\n\n\n\t\t\t****$**** HISTORY ****$**** "<<endl;
cout<<"\n\n\n This restaurant was estblished in 2005 with the partnershhip of 4 friends."<<endl<<"Its first name was FOOD PLAZA than it was changing to FOOD COURT"<<endl;
getch();
goto up;
break;
case 2:
clrscr();
cout<<"\n\n\n\n\n\t\t\t****$**** LOCATION ****$**** "<<endl;
cout<<"\n\n\n Food court near bus stand, opposite DAV college, Batala road, Amritsar"<<endl;
getch();
goto up;
break;
case 3:
clrscr();
cout<<"\n\n\n\n\n\t\t\t****$**** OWNERS ****$**** "<<endl;
cout<<"\n\n\n Owner of this restaurant are.."<<endl<<"\n Mr.Sanjay"<<endl<<"\n Mr.Satinder"<<endl<<"\n Miss Savleen"<<endl<<"\n Miss Sejal"<<endl;
getch();
goto up;
break;
case 4:
clrscr();
cout<<"\n\n\n\n\n\t\t\t****$**** TIMINGS ****$**** "<<endl;
cout<<"\n\n\n For Breakfast  9:00am - 11:00am"<<endl<<"\n For Launch    12:00am - 4:00pm"<<endl<<"\n For Dinner    7:00pm - 11:00pm"<<endl;
getch();
goto up;
break;
}

int zx=DETECT,zy,p;
initgraph(&zx,&zy,"C:\\Turboc3\\BGI");
for(p=0;p<=360;++p)
{
circle(300,200,80);
pieslice(300,200,0,p,80);
outtextxy(200,320,"Loading.Please Wait!");
delay(7);
}
closegraph();



top:
clrscr();
cout<<"\n\n\n\n\n\t\t\t****$**** DETAILS OF CUSTOMER ****$**** "<<endl;
cout<<"\n\n\n Press 1: for enter details of customer"<<endl;
cout<<"\n press 2: for display  details of customer"<<endl;
cout<<"\n press 3: for search details of customer"<<endl;
cout<<"\n press 4: for delete details of customer"<<endl;
cout<<"\n press 5: for update details of customer"<<endl;
cout<<"\n press 6: to move FORWORD "<<endl;
cin>>x;
switch(x)
{
case 1:
clrscr();
char ch='y';
while(ch=='y')
{
t.customerd();
f1.write((char*)&t,sizeof(t));
cout<<"\n DO YOU WANT TO INPUT MORE:";
cin>>ch;
}
clrscr();
cout<<"\n =============================================================="<<endl;
cout<<setw(10)<<"NAME"<<setw(10)<<"AGE"<<setw(10)<<"GENDER"<<setw(15)<<"CONTACT NO"<<setw(10)<<"COUNTERY"<<setw(10)<<"CUST CODE"<<endl;
cout<<"\n =============================================================="<<endl;

f1.seekg(0,ios::beg);
f1.read((char*)&t,sizeof(t));
while(f1.eof()==0)
{
t.customersh();
f1.read((char*)&t,sizeof(t));
}
f1.close();
getch();
goto top;
break;

case 2:
fstream f2;
f2.open("god1.dat",ios::out|ios::in|ios::binary);
clrscr();
cout<<"\n =============================================================="<<endl;
cout<<setw(10)<<"NAME"<<setw(10)<<"AGE"<<setw(10)<<"GENDER"<<setw(15)<<"CONTACT NO"<<setw(10)<<"COUNTERY"<<setw(10)<<"CUST CODE"<<endl;
cout<<" =============================================================="<<endl;
f2.seekg(0,ios::beg);
f2.read((char*)&t,sizeof(t));
while(f2.eof()==0)
{
t.customersh();
f2.read((char*)&t,sizeof(t));
}
f2.close();
getch();
goto top;
break;

case 3:
int q;
clrscr();
cout<<"\n\t\t@@@@@@@@@@@ SEARCH @@@@@@@@@@ "<<endl;
cout<<"\n\n  by CODE        : press 1"<<endl;
cout<<"\n  by PHONE NUMBER:  press 2"<<endl;
cin>>q;
switch(q)
{
case 1:
fstream f3;
f3.open("god1.dat",ios::in|ios::out|ios::binary);
clrscr();
int ccode;
int flag=0;
cout<<"\n Enter CUSTOMER CODE : ";
cin>>ccode;
f3.seekg(0,ios::beg);
f3.read((char*)&t,sizeof(t));
while(f3.eof()==0)
{
if(ccode==t.code)
{
t.customersh();
flag=1;
}
f3.read((char*)&t,sizeof(t));
}
f3.close();
getch();
goto top;
break;

case 2:
fstream f4;
f4.open("god1.dat",ios::in|ios::out|ios::binary);
clrscr();
char ph[15];
int flag1=0;
cout<<"\n Enter CUSTOMER PHONE NUMBER : ";
cin>>ph;
f4.seekg(0,ios::beg);
f4.read((char*)&t,sizeof(t));
while(f4.eof()==0)
{
if(strcmp(ph,t.contact)==0)
{
t.customersh();
flag1=1;
}
f4.read((char*)&t,sizeof(t));
}
f4.close();
getch();
goto top;
break;
}


case 4:
fstream f5,f6;
f5.open("god1.dat",ios::in|ios::out|ios::app|ios::binary);
f6.open("godt.dat",ios::in|ios::out|ios::app|ios::binary);
clrscr();
char dl[15];
cout<<"\n\t\t@@@@@@@@@@ DELATE DETAILS @@@@@@@@@@"<<endl;
cout<<"\n Enter PHONE NUMBER for delete customer detail :";
gets(dl);
f5.seekg(0,ios::beg);
f5.read((char*)&t,sizeof(t));
while(f5.eof()==0)
{
if(strcmp(dl,t.contact)!=0)
{
f6.write((char*)&t,sizeof(t));
f5.read((char*)&t,sizeof(t));
}
f5.read((char*)&t,sizeof(t));
}
f5.close();
f6.close();
remove("god1.dat");
rename("godt.dat","god1.dat");
f6.open("god1.dat",ios::out|ios::in|ios::app|ios::binary);
clrscr();
cout<<"\n"<<setw(10)<<"NAME"<<setw(10)<<"AGE"<<setw(10)<<"GENDER"<<setw(15)<<"CONTACT NO"<<setw(10)<<"COUNTERY"<<setw(10)<<"CUST CODE"<<endl;

f6.seekg(0,ios::beg);
f6.read((char*)&t,sizeof(t));
while(f6.eof()==0)
{
t.customersh();
f6.read((char*)&t,sizeof(t));
}
f6.close();
getch();
goto top;
break;

case 5:
clrscr();
fstream f7;
f7.open("god1.dat",ios::in|ios::out|ios::binary);
int n,pos;
cout<<"\n\t\t ########## UPDATE DETAILS ##########"<<endl;
cout<<"\n\n\n Enter the record you want to update :";
cin>>n;
pos=(n-1)*sizeof(t);
f7.seekp(pos,ios::beg);
t.customerd();
f7.write((char*)&t,sizeof(t));
cout<<"\n\n\t\t Your record is upated"<<endl;
f7.close();
getch();
goto top;
break;
}

 {
int x=180,i,gdriver=DETECT,c,gmode,LOADING,PLEASE;
initgraph(&gdriver,&gmode,"c:\\Turboc3\\BGI");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(170,180,"LOADING...PLEASE WAIT");

for(i=0;i<300;++i)
{
delay(30);
line(x,200,x,220);
x++;
}
getch();
closegraph();
}


top2:
clrscr();
cout<<"\n\t\t ***$*** RESTAURANT MENU ***$*** "<<endl;
int r;
cout<<"\n press 1: for see menu "<<endl;
cout<<"\n press 2: for Exit the screen..."<<endl;
cin>>r;
switch(r)
{
case 1:
clrscr();
float total;
char choice='y';
int order=1;
int setline1=0;
int num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,num9=0,num10=0,num11=0,num12=0,num13=0,num14=0,num15=0,num16=0,num17=0,num18=0,num19=0,num20=0;
int num_customers;
const double unitprice1= 6.95, unitprice2= 5.75,unitprice3= 7.25, unitprice4= 8.95, unitprice5= 4.95,unitprice6= 49.2,unitprice7= 99.8,unitprice8= 99.6,unitprice9= 67.7,unitprice10= 150.7,unitprice11= 130.9,unitprice12= 52.8,unitprice13= 39.3,unitprice14= 170.9,unitprice15= 50.7,unitprice16= 70.9,unitprice17= 70.2,unitprice18= 80.1,unitprice19= 40.2,unitprice20= 20.3;
double amountofsale1=0, amountofsale2=0, amountofsale3=0, amountofsale4=0, amountofsale5=0,amountofsale6=0,amountofsale7=0,amountofsale8=0,amountofsale9=0,amountofsale10=0,amountofsale11=0,amountofsale12=0,amountofsale13=0,amountofsale14=0,amountofsale15=0,amountofsale16=0,amountofsale17=0,amountofsale18=0,amountofsale19=0,amountofsale20=0;
char ch='y';
while(ch=='y')
{
clrscr();
t.data();


    {

    cout<<"\n From the list of food what would you like: \n";
    cin>>order;

    switch(order)
    {
    case 1:
    cout<<"\n How many buffalo wings would you like to order: ";
    cin>>num1;
    amountofsale1=unitprice1*num1;
    break;
    case 2:
    cout<<"\n  How many super burgers would you like to order: ";
    cin>>num2;
    amountofsale2=unitprice2*num2;
    break;
    case 3:
    cout<<"\n How many indian sandwiches would you like to order: ";
    cin>>num3;
    amountofsale3=unitprice3*num3;
    break;
    case 4:
    cout<<"\n  How many shrimp nuggets would you like to order: ";
    cin>>num4;
    amountofsale4=unitprice4*num4;
    break;
    case 5:
    cout<<"\n  How many veggie supreme would you like to order: ";
    cin>>num5;
    amountofsale5=unitprice5*num5;
    break;
    case 6:
    cout<<"\n How many PIZZA would you like to order: ";
    cin>>num6;
    amountofsale6=unitprice6*num6;
    break;
    case 7:
    cout<<"\n How many DOKHLA would you like to order: ";
    cin>>num7;
    amountofsale7=unitprice7*num7;
    break;
    case 8:
    cout<<"\n How many NUDDELS would you like to order: ";
    cin>>num8;
    amountofsale8=unitprice8*num8;
    break;
    case 9:
    cout<<"\n How many IDALI would you like to order: ";
    cin>>num9;
    amountofsale9=unitprice9*num9;
    break;
    case 10:
    cout<<"\n How many PAOBAJHI would you like to order: ";
    cin>>num10;
    amountofsale10=unitprice10*num10;
    break;
    case 11:
    cout<<"\n How many HKKA NUDDELS would you like to order: ";
    cin>>num11;
    amountofsale11=unitprice11*num11;
    break;
    case 12:
    cout<<"\n How many GRILLED SANDWICH would you like to order: ";
    cin>>num12;
    amountofsale12=unitprice12*num12;
    break;
    case 13:
    cout<<"\n How many BULLETS would you like to order: ";
    cin>>num13;
    amountofsale13=unitprice13*num13;
    break;
    case 14:
    cout<<"\n How many CHAAMP would you like to order: ";
    cin>>num14;
    amountofsale14=unitprice14*num14;
    break;
    case 15:
    cout<<"\n How many ICECREAM would you like to order: ";
    cin>>num15;
    amountofsale15=unitprice15*num15;
    break;
    case 16:
    cout<<"\n How many PUNJABI LASSI would you like to order: ";
    cin>>num16;
    amountofsale16=unitprice16*num16;
    break;
    case 17:
    cout<<"\n How many STRAWBERRY SHAKE would you like to order: ";
    cin>>num17;
    amountofsale17=unitprice17*num17;
    break;
    case 18:
    cout<<"\n How many CHOCLATE SHAKE would you like to order: ";
    cin>>num18;
    amountofsale18=unitprice18*num18;
    break;
    case 19:
    cout<<"\n How many COOL DRINK would you like to order: ";
    cin>>num19;
    amountofsale19=unitprice19*num19;
    break;
    case 20:
    cout<<"\n How many SOFT WATER would you like to order: ";
    cin>>num20;
    amountofsale20=unitprice20*num20;
    break;

    default:
    cout<<"\n you are pressing an invalid key "<<endl;
    }
    }
    cout<<"\n Thank you.... sir \n"<<"\n would you like to order more"<<endl;
    cin>>ch;
    }
    {
    clrscr();
    cout<<"\n You have ordered:\n\n";
    cout<<"==================================================================="<<endl;
    cout<<setw(15)<<"ITEM"<<setw(10)<<"QUANTITY"<<setw(16)<<"UNIT PRICE"<<setw(20)<<"AMOUNT"<<endl;
    cout<<"==================================================================="<<endl;
    cout<<"\n"<<setw(15)<<"Buffelo wings"<<setw(10)<<num1<<setw(16)<<unitprice1<<setw(20)<<amountofsale1<<endl;
     cout<<setw(15)<<"SUPER BURGER"<<setw(10)<<num2<<setw(16)<<unitprice2<<setw(20)<<amountofsale2<<endl;
    cout<<setw(15)<<"INDIAN SANDWICH"<<setw(10)<<num3<<setw(16)<<unitprice3<<setw(20)<<amountofsale3<<endl;
    cout<<setw(15)<<"VEGGIE SUPREME"<<setw(10)<<num4<<setw(16)<<unitprice4<<setw(20)<<amountofsale4<<endl;
    cout<<setw(15)<<"VEGGIE SUPREME"<<setw(10)<<num5<<setw(16)<<unitprice5<<setw(20)<<amountofsale5<<endl;
    cout<<setw(15)<<"PIZZA"<<setw(10)<<num6<<setw(16)<<unitprice6<<setw(20)<<amountofsale6<<endl;
    cout<<setw(15)<<"DOKHLA"<<setw(10)<<num7<<setw(16)<<unitprice7<<setw(20)<<amountofsale7<<endl;
    cout<<setw(15)<<"NUDDELS"<<setw(10)<<num8<<setw(16)<<unitprice8<<setw(20)<<amountofsale8<<endl;
    cout<<setw(15)<<"IDALI"<<setw(10)<<num9<<setw(16)<<unitprice9<<setw(20)<<amountofsale9<<endl;
    cout<<setw(15)<<"PAOBAJHI"<<setw(10)<<num10<<setw(16)<<unitprice10<<setw(20)<<amountofsale10<<endl;
    cout<<setw(15)<<"HKKA NUDDELS"<<setw(10)<<num11<<setw(16)<<unitprice11<<setw(20)<<amountofsale11<<endl;
    cout<<setw(15)<<"GRILED SANDWICH"<<setw(10)<<num12<<setw(16)<<unitprice12<<setw(20)<<amountofsale12<<endl;
    cout<<setw(15)<<"BULLETS"<<setw(10)<<num13<<setw(16)<<unitprice13<<setw(20)<<amountofsale13<<endl;
    cout<<setw(15)<<"CHAAMP"<<setw(10)<<num14<<setw(16)<<unitprice14<<setw(20)<<amountofsale14<<endl;
    cout<<setw(15)<<"ICECREAM"<<setw(10)<<num15<<setw(16)<<unitprice15<<setw(20)<<amountofsale15<<endl;
    cout<<setw(15)<<"PUNJABI LASSI"<<setw(10)<<num16<<setw(16)<<unitprice16<<setw(20)<<amountofsale16<<endl;
    cout<<setw(15)<<"STRAWBERY SHAKE"<<setw(10)<<num17<<setw(16)<<unitprice17<<setw(20)<<amountofsale17<<endl;
    cout<<setw(15)<<"CHOCLATE SHAKE"<<setw(10)<<num18<<setw(16)<<unitprice18<<setw(20)<<amountofsale18<<endl;
    cout<<setw(15)<<"COOL DRINK"<<setw(10)<<num19<<setw(16)<<unitprice19<<setw(20)<<amountofsale19<<endl;
    cout<<setw(15)<<"SOFT WATER"<<setw(10)<<num20<<setw(16)<<unitprice20<<setw(20)<<amountofsale20<<endl;

    total=amountofsale1+amountofsale2+amountofsale3+amountofsale4+amountofsale5+amountofsale6+amountofsale7+amountofsale8+amountofsale9+amountofsale10+amountofsale11+amountofsale12+amountofsale13+amountofsale14+amountofsale15+amountofsale16+amountofsale17+amountofsale18+amountofsale19+amountofsale20;
      cout<<"\n\n\t\t\t\t\t\t Total ="<<total;
    getch();
    goto top2;
    break;
    }
      }
      system("PAUSE");

getch();
}



