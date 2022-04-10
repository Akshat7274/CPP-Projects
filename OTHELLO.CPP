#include<fstream.h>
#include<iomanip.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
void clear()
{
	cleardevice();
	clrscr();
	cleardevice();
}
int length(int val)
{
	int len=0;
	while(val/10>0)
	{
		val/=10;
		len++;
	}
	return len;
}
class player
{
	char name1[20];
	char name2[20];
	char winner[20];
	int pid;
	public:
	void setid(int i)
	{
		pid=i+1;
	}
	void nameinput()
	{
		cout<<"\n\n\n\n\t\t\t\tRecord ID: "<<pid;
		cout<<"\n\t\t\t\tPlayer 1: ";
		gets(name1);
		cout<<"\n\t\t\t\tPlayer 2: ";
		gets(name2);
	}
	void setwin(char win[20])
	{
		if(strcmpi(win,"Player 1")==0)
			strcpy(winner,name1);
		else if(strcmpi(win,"Player 2")==0)
			strcpy(winner,name2);
		else
			strcpy(winner,win);
	}
	void show(int rmax,int p1l,int p2l,int wl)
	{
		int idl=length(pid);
		idl/=2;
		int n1l=strlen(name1)/2;
		int n2l=strlen(name2)/2;
		int winl=strlen(winner)/2;
		cout<<"||"<<setw(rmax+idl+2)<<pid<<setw(rmax-idl+3)<<"||"<<setw(p1l+n1l+1)<<name1<<setw(p1l-n1l+3)<<"||"<<setw(p2l+n2l+1)<<name2<<setw(p2l-n2l+3)<<"||"<<setw(wl+winl+1)<<winner<<setw(wl-winl+3)<<"||";
	}
	void r1()
	{
		cout<<name1;
	}
	void r2()
	{
		cout<<name2;
	}
	void win()
	{
		cout<<winner;
	}
	char * rn1()
	{
		return name1;
	}
	char * rn2()
	{
		return name2;
	}
	char * rwin()
	{
		return winner;
	}
	void modn1(char edit[20])
	{
		strcpy(name1,edit);
	}
	void modn2(char edit[20])
	{
		strcpy(name2,edit);
	}
	void modn3(char edit[20])
	{
		strcpy(winner,edit);
	}
	int rid()
	{
		return pid;
	}
}p;
void start()
{
	int gd=DETECT,gm;
	char ent;
	initgraph(&gd,&gd,"c:\\TURBOC3\\BGI");
	clear();
	cout<<"\n\t\t\tGAME INTRODUCTION!!";
	cout<<"\n\n\t\t\t\t\t\tPress Enter to Continue...";
	line(175,10,360,10);
	line(360,10,360,40);
	line(360,40,175,40);
	line(175,40,175,10);
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t1.Motive of the Game is to place your pieces so as to sandwich your";
	cout<<"\n\t  opponent's pieces between two of your pieces.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t2.The opponent's pieces that get sandwiched will be changed to your";
	cout<<"\n\t  pieces.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t3.Two pieces of each player would already be placed on the board when";
	cout<<"\n\t  the game starts.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t4.Black player gets the first turn.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t5.The selected box will appear in red color.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t6.Use the arrow keys to select a specific box.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t7.To place your piece, press Enter when you reach the desired box.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t8.If any of the two players wants to quit the game, just press '/'";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t9.The game will not be saved and the other player will automatically";
	cout<<"\n\t  win the game.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t10.No player will be allowed to undo any move, so play carefully!";
	ent=getch();
	while(ent!='\r')
		ent=getch();
}
void box(int x,int y,int f,int b)
{
	setcolor(0);
	line(95+(56*x),15+(56*y),151+(56*x),15+(56*y));
	line(151+(56*x),15+(56*y),151+(56*x),71+(56*y));
	line(151+(56*x),71+(56*y),95+(56*x),71+(56*y));
	line(95+(56*x),71+(56*y),95+(56*x),15+(56*y));
	setfillstyle(SOLID_FILL,f);
	floodfill(96+(56*x),16+(56*y),0);
	setcolor(b);
	line(151+(56*x),15+(56*y),151+(56*x),71+(56*y));
	line(151+(56*x),71+(56*y),95+(56*x),71+(56*y));
	line(95+(56*x),71+(56*y),95+(56*x),15+(56*y));
	line(95+(56*x),15+(56*y),151+(56*x),15+(56*y));
}
int check(int x,int y,int turn,int flip=0)
{
	int direc=0,color,opp;
	if(turn%2==0)
	{
		color=8;
		opp=15;
	}
	else
	{
		color=15;
		opp=8;
	}
	if(x>1 && getpixel(123+((x-1)*56),43+(y*56))==opp)
		for(int i=x-2;i>=0;i--)
		{
			if(getpixel(123+(i*56),43+(y*56))==color)
			{
				direc++;
				if(flip==1)
				{
					for(int p=x;p>=i;p--)
					{
						setfillstyle(SOLID_FILL,color);
						floodfill(123+(p*56),43+(y*56),0);
					}
				}
				break;
			}
			if(getpixel(123+(i*56),43+(y*56))==2)
				break;
		}
	if(x<6 && getpixel(123+((x+1)*56),43+(y*56))==opp)
		for(int i=x+2;i<=7;i++)
		{
			if(getpixel(123+(i*56),43+(y*56))==color)
			{
				direc++;
				if(flip==1)
				{
					for(int p=x;p<=i;p++)
					{
						setfillstyle(SOLID_FILL,color);
						floodfill(123+(p*56),43+(y*56),0);
					}
				}
				break;
			}
			if(getpixel(123+(i*56),43+(y*56))==2)
				break;
		}
	if(y>1 && getpixel(123+(x*56),43+((y-1)*56))==opp)
		for(int j=y-2;j>=0;j--)
		{
			if(getpixel(123+(x*56),43+(j*56))==color)
			{
				direc++;
				if(flip==1)
				{
					for(int p=y;p>=j;p--)
					{
						setfillstyle(SOLID_FILL,color);
						floodfill(123+(x*56),43+(p*56),0);
					}
				}
				break;
			}
			if(getpixel(123+(x*56),43+(j*56))==2)
				break;
		}
	if(y<6 && getpixel(123+(x*56),43+((y+1)*56))==opp)
		for(int j=y+2;j<=7;j++)
		{
			if(getpixel(123+(x*56),43+(j*56))==color)
			{
				direc++;
				if(flip==1)
				{
					for(int p=y;p<=j;p++)
					{
						setfillstyle(SOLID_FILL,color);
						floodfill(123+(x*56),43+(p*56),0);
					}
				}
				break;
			}
			if(getpixel(123+(x*56),43+(j*56))==2)
				break;
		}
	if(x>1 && y>1 && getpixel(123+((x-1)*56),43+((y-1)*56))==opp)
		for(int i=x-2,j=y-2;i>=0,j>=0;i--,j--)
		{
			if(i<0 || j<0)
				break;
			if(getpixel(123+(i*56),43+(j*56))==color)
			{
				direc++;
				if(flip==1)
				{
					for(int p=x,q=y;p>=i,q>=j;p--,q--)
					{
						if(p==i || q==j)
							break;
						setfillstyle(SOLID_FILL,color);
						floodfill(123+(p*56),43+(q*56),0);
					}
				}
				break;
			}
			if(getpixel(123+(i*56),43+(j*56))==2)
				break;
		}
	if(x>1 && y<6 && getpixel(123+((x-1)*56),43+((y+1)*56))==opp)
		for(int i=x-2,j=y+2;i>=0,j<=7;i--,j++)
		{
			if(i<0 || j==8)
				break;
			if(getpixel(123+(i*56),43+(j*56))==color)
			{
				direc++;
				if(flip==1)
				{
					for(int p=x,q=y;p>=i,q<=j;p--,q++)
					{
						if(p==i || q==j)
							break;
						setfillstyle(SOLID_FILL,color);
						floodfill(123+(p*56),43+(q*56),0);
					}
				}
				break;
			}
			if(getpixel(123+(i*56),43+(j*56))==2)
				break;
		}
	if(x<6 && y>1 && getpixel(123+((x+1)*56),43+((y-1)*56))==opp)
		for(int i=x+2,j=y-2;i<=7,j>=0;i++,j--)
		{
			if(i==8 || j<0)
				break;
			if(getpixel(123+(i*56),43+(j*56))==color)
			{
				direc++;
				if(flip==1)
				{
					for(int p=x,q=y;p<=i,q>=j;p++,q--)
					{
						if(p==i || q==j)
							break;
						setfillstyle(SOLID_FILL,color);
						floodfill(123+(p*56),43+(q*56),0);
					}
				}
				break;
			}
			if(getpixel(123+(i*56),43+(j*56))==2)
				break;
		}
	if(x<6 && y<6 && getpixel(123+((x+1)*56),43+((y+1)*56))==opp)
		for(int i=x+2,j=y+2;i<=7,j<=7;i++,j++)
		{
			if(i==8 || j==8)
				break;
			if(getpixel(123+(i*56),43+(j*56))==color)
			{
				direc++;
				if(flip==1)
				{
					for(int p=x,q=y;p<=i,q<=j;p++,q++)
					{
						if(p==i || q==j)
							break;
						setfillstyle(SOLID_FILL,color);
						floodfill(123+(p*56),43+(q*56),0);
					}
				}
				break;
			}
			if(getpixel(123+(i*56),43+(j*56))==2)
				break;
		}
	return direc;
}
void board()
{
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(0,50,WHITE);
	for(int i=95,j=15;i<=543,j<=463;i+=56,j+=56)
	{
		line(i,15,i,463);
		line(95,j,543,j);
	}
	for(int k=0;k<8;k++)
	{
		for(int l=0;l<8;l++)
		{
			setfillstyle(SOLID_FILL,GREEN);
			floodfill((123+(k*56)),(43+(l*56)),15);
		}
	}
	setcolor(0);
	for(i=95,j=15;i<=543,j<=463;i+=56,j+=56)
	{
		line(i,15,i,463);
		line(95,j,543,j);
	}
	line(94,14,544,14);
	line(544,14,544,464);
	line(544,464,94,464);
	line(94,464,94,14);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(0,0,0);
}
void main()
{
	cout<<"\n\n\n\n\n\n\t\t\t    Welcome to OTHELLO!!!!!!!";
	cout<<"\n\n\n\n\t\t\t    Computer Science Project \n\t\t\t\t   Class XII-C";
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCreated by: ";
	cout<<"\n\n\t\t\t\t\t\tAkshat Joshi(5)";
	cout<<"\n\t\t\t\t\t\tDiptesh Choudhuri(11)";
	cout<<"\n\t\t\t\t\t\tMayank Rawat(19)";
	cout<<"\n\t\t\t\t\t\tRishabh Tripathi(26)";
	delay(3500);
	clrscr();
	int choice;
	do
	{
	cout<<"\n\n\n\t\tWhat would you like to enter as?";
	cout<<"\n\n1) Administrator";
	cout<<"\n2) Player";
	cout<<"\n3) Exit";
	cout<<"\n\n\nEnter the corresponding number: ";
	cin>>choice;
	if(choice==1)
	{
		clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\tEnter administrator Password: ";
		char pass[30];
		for(int i=0;i<30;i++)
		{
			pass[i]=getch();
			if(pass[i]=='\r')
			{       pass[i]='\0';
				break;
			}
			else if(pass[i]=='\b' && i>0)
			{
				clrscr();
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\tEnter Administrator Password: ";
				for(int j=0;j<i-1;j++)
					cout<<"*";
				i-=2;
			}
			else
				cout<<"*";
		}
		if(strcmp(pass,"Project")==0)
		{
			clrscr();
			int num;
			cout<<"\n\t\t\t\tWhat would you like to do?";
			cout<<"\n\n\t\t1) Add a Record";
			cout<<"\n\t\t2) Modify an Existing Record";
			cout<<"\n\t\t3) Search for a Record";
			cout<<"\n\t\t4) Delete a Record";
			cout<<"\n\t\t5) Display Records";
			cout<<"\n\n\t\tEnter the corresponding number: ";
			cin>>num;
			if(num==1)
			{
				clrscr();
				ofstream f;
				ifstream k;
				char ch='y';
				do
				{
					char winner[20];
					int d,all=0;
					while(all!=1)
					{
						clrscr();
						int c=0;
						cout<<"\nEnter Player ID(0 to exit): ";
						cin>>d;
						if(d==0)
							break;
						k.open("Othello.dat",ios::binary);
						while(k.read((char *)&p,sizeof(p)))
						{
							if(p.rid()==d)
								c=1;
						}
						if(c!=0)
						{
							cout<<"\n\nPlayer ID already exists. Kindly Enter a New ID!";
							delay(1000);
						}
						else if(c==0 && d>=1000)
						{
							cout<<"\n\nPlease Enter an Id till 999!";
							delay(1000);
						}
						else if(c==0 && d<1000)
							all=1;
						k.close();
					}
					if(d==0)
						break;
					f.open("Othello.dat",ios::binary|ios::app);
					clrscr();
					p.setid(d-1);
					cout<<"\n";
					p.nameinput();
					cout<<"\n\t\t\t\tWinner: ";
					gets(winner);
					while(strcmp(winner,p.rn1())!=0 && strcmp(winner,p.rn2())!=0 && strcmpi(winner,"Draw")!=0)
					{
						cout<<"\n\nEnter a valid Winner name: ";
						gets(winner);
					}
					p.setwin(winner);
					f.write((char *)&p,sizeof(p));
					cout<<"\n\nRecord Added!\nDo you want to continue?[y/n]: ";
					cin>>ch;
					f.close();
				}while(ch=='y' || ch=='Y');
			}
			if(num==2)
			{
				clrscr();
				ifstream f;
				char ch1;
				do
				{
					char ch2='n';
					int a;
					do
					{
						clrscr();
						int c=0;
						cout<<"\n\t\t\tEnter Player ID(0 to exit): ";
						cin>>a;
						if(a==0)
							break;
						f.open("Othello.dat",ios::binary);
						while(f.read((char *)&p,sizeof(p)))
						{
							if(p.rid()==a)
							{
								cout<<"\n\n\tPlayer 1: ";
								p.r1();
								cout<<"\n\tPlayer 2: ";
								p.r2();
								cout<<"\n\tWinner: ";
								p.win();
								c=1;
								break;
							}
						}
						if(c==0)
						{
							cout<<"\n\n\tRecord not found, kindly recheck the Player ID!!";
							delay(1000);
						}
						else
						{
							cout<<"\n\n\tIs this the record you want to modify?[y/n]: ";
							cin>>ch2;
						}
						f.close();
					}while(ch2=='n' || ch2=='N');
					if(a==0)
						break;
					fstream k("Othello.dat",ios::binary|ios::in|ios::out);
					while(k.read((char *)&p,sizeof(p)))
					{
						if(p.rid()==a)
							break;
					}
					char ch3;
					do
					{
						int ans;
						k.seekg(k.tellg()-sizeof(p),ios::beg);
						cout<<"\n\n\t1) Player 1";
						cout<<"\n\t2) Player 2";
						cout<<"\n\t3) Winner";
						cout<<"\n\n\tEnter the number corresponding to whatever you want to modify: ";
						cin>>ans;
						if(ans>3)
						{
							while(ans>3)
							{
								cout<<"\n\tPlease enter a valid number: ";
								cin>>ans;
							}
						}
						if(ans==1)
						{
							char n1[20];
							cout<<"\n\tEnter new Player Name: ";
							gets(n1);
							if(strcmp(n1,p.rwin())!=0 && strcmp(p.rn2(),p.rwin())!=0 && strcmpi(p.rwin(),"Draw")!=0)
								p.modn3(n1);
							p.modn1(n1);
							k.write((char *)&p,sizeof(p));
						}
						else if(ans==2)
						{
							char n2[20];
							cout<<"\n\tEnter new Player Name: ";
							gets(n2);
							if(strcmp(n2,p.rwin())!=0 && strcmp(p.rn1(),p.rwin())!=0 && strcmpi(p.rwin(),"Draw")!=0)
								p.modn3(n2);
							p.modn2(n2);
							k.write((char *)&p,sizeof(p));
						}
						else if(ans==3)
						{
							char n3[20];
							cout<<"\n\tEnter new Winner: ";
							gets(n3);
							while(strcmp(n3,p.rn1())!=0 && strcmp(n3,p.rn2())!=0 && strcmpi(n3,"Draw")!=0)
							{
								cout<<"\n\nEnter a valid Winner name: ";
								gets(n3);
							}
							p.modn3(n3);
							k.write((char *)&p,sizeof(p));
						}
						cout<<"\n\tDo you want to Modify any thing else in this record?[y/n]: ";
						cin>>ch3;
					}while(ch3=='y' || ch3=='Y');
					cout<<"\n\n\nRecord updated!\nDo you want to continue?[y/n]: ";
					cin>>ch1;
					k.close();
				}while(ch1=='y' || ch1=='Y');
			}
			if(num==3)
			{
				clrscr();
				ifstream f;
				int a;
				char ch='y';
				do
				{
					clrscr();
					int c=0;
					cout<<"\n\t\t\tEnter Player ID(0 to exit): ";
					cin>>a;
					if(a==0)
						break;
					f.open("Othello.dat",ios::binary);
					while(f.read((char *)&p,sizeof(p)))
					{
						if(p.rid()==a)
						{
							cout<<"\n\n\tPlayer 1: ";
							p.r1();
							cout<<"\n\tPlayer 2: ";
							p.r2();
							cout<<"\n\tWinner: ";
							p.win();
							c=1;
						}
					}
					if(c==0)
					{
						cout<<"\n\n\tRecord not found, kindly recheck the Player ID!!";
						delay(750);
					}
					else
					{
						cout<<"\n\n\tDo you want to continue?[y/n]: ";
						cin>>ch;
					}
					f.close();
				}while(ch=='y' || ch=='Y');
			}
			if(num==4)
			{
				clrscr();
				fstream f;
				char ch1;
				do
				{
					char ch2='n';
					int a;
					do
					{
						clrscr();
						int c=0;
						cout<<"\n\t\t\tEnter Player ID(0 to exit): ";
						cin>>a;
						if(a==0)
							break;
						f.open("Othello.dat",ios::binary|ios::in|ios::out);
						while(f.read((char *)&p,sizeof(p)))
						{
							if(p.rid()==a)
							{
								cout<<"\n\n\tPlayer 1: ";
								p.r1();
								cout<<"\n\tPlayer 2: ";
								p.r2();
								cout<<"\n\tWinner: ";
								p.win();
								c=1;
							}
						}
						if(c==0)
						{
							cout<<"\n\n\tRecord not found, kindly recheck the Player ID!!";
							delay(750);
						}
						else
						{
							cout<<"\n\n\tIs this the record you want to modify?[y/n]: ";
							cin>>ch2;
						}
						f.close();
					}while(ch2=='n' || ch2=='N');
					if(a==0)
						break;
					ofstream k1("Temp.dat",ios::binary);
					ifstream k2("Othello.dat",ios::binary);
					while(k2.read((char *)&p,sizeof(p)))
					{
						if(p.rid()!=a)
							k1.write((char *)&p,sizeof(p));
					}
					k1.close();
					k2.close();
					remove("Othello.dat");
					rename("Temp.dat","Othello.dat");
					cout<<"\n\n\nRecord deleted!\nDo you want to continue?[y/n]: ";
					cin>>ch1;
				}while(ch1=='y' || ch1=='Y');
			}
			if(num==5)
			{
				clrscr();
				ifstream k("Othello.dat",ios::binary);
				int rmax=2,p1l=8,p2l=8,wl=6;
				while(k.read((char *)&p,sizeof(p)))
				{
					int rcount=length(p.rid());
					if(rcount>rmax)
						rmax=rcount;
					if(strlen(p.rn1())>p1l)
						p1l=strlen(p.rn1());
					if(strlen(p.rn2())>p2l)
						p2l=strlen(p.rn2());
					if(strlen(p.rwin())>wl)
						wl=strlen(p.rwin());
				}
				k.close();
				rmax=rmax/2;
				p1l=p1l/2;
				p2l=p2l/2;
				wl=wl/2;
				int w=2*(rmax+p1l+p2l+wl)+19;
				cout<<"\n\n";
				for(int o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n||"<<setw(rmax+2)<<"ID"<<setw(rmax+3)<<"||"<<setw(p1l+5)<<"Player 1"<<setw(p1l-1)<<"||"<<setw(p2l+5)<<"Player 2"<<setw(p2l-1)<<"||"<<setw(wl+4)<<"Winner"<<setw(wl)<<"||";
				cout<<"\n";
				for(o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n";
				for(o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n";
				ifstream f("Othello.dat",ios::binary);
				while(f.read((char *)&p,sizeof(p)))
				{
					p.show(rmax,p1l,p2l,wl);
					cout<<"\n";
					for(int o=1;o<=w;o++)
						cout<<"-";
					cout<<"\n";
				}
				f.close();
				getch();
			}
		}
		else
		{
			cout<<"\n\n\t\t\tWrong Password";
			delay(500);
		}
		clrscr();
	}
	if(choice==2)
	{
	start();
	char move;
	ofstream f("Othello.dat",ios::binary|ios::app);
	ifstream k("Othello.dat",ios::binary);
	int per=0,d;
	while(per!=1)
	{
		srand(time(NULL));
		d=(rand()%1000)+1;
		int c=0;
		while(k.read((char *)&p,sizeof(p)))
		{
			if(p.rid()==d)
				c=1;
		}
		if(c==0)
			per=1;
	}
	clear();
	p.setid(d);
	p.nameinput();
	clear();
	printf(" White:%d",2);
	printf("\t\t\t\t\t\t\t\t\b\bBlack:%d ",2);
	rectangle(3,0,75,20);
	rectangle(555,0,630,20);
	board();
	setcolor(0);
	circle(347,211,20);
	circle(291,267,20);
	circle(347,267,20);
	circle(291,211,20);
	setfillstyle(SOLID_FILL,8);
	floodfill(347,211,0);
	floodfill(291,267,0);
	setfillstyle(SOLID_FILL,15);
	floodfill(291,211,0);
	floodfill(347,267,0);
	int x=0,y=0;
	move=' ';
	int bcount,wcount;
	for(int i=0;;i++)
	{
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		move=' ';
		int place=0;
		bcount=0,wcount=0;
		for(int r=0;r<8;r++)
		{
			for(int c=0;c<8;c++)
			{
				if(getpixel(123+(r*56),43+(c*56))==15)
					wcount++;
				else if(getpixel(123+(r*56),43+(c*56))==8)
					bcount++;
				if(getpixel(123+(r*56),43+(c*56))==2)
					place+=check(r,c,i);
			}
		}
		printf(" White:%d",wcount);
		printf("\t\t\t\t\t\t\t\t\b\bBlack:%d ",bcount);
		setcolor(15);
		rectangle(3,0,75,20);
		rectangle(555,0,630,20);
		line(94,14,544,14);
		line(544,14,544,464);
		line(544,464,94,464);
		line(94,464,94,14);
		setfillstyle(SOLID_FILL,LIGHTGRAY);
		floodfill(0,50,WHITE);
		floodfill(80,0,WHITE);
		floodfill(0,0,WHITE);
		setcolor(0);
		line(94,14,544,14);
		line(544,14,544,464);
		line(544,464,94,464);
		line(94,464,94,14);
		if(wcount==0 || bcount==0 || wcount+bcount==64)
		{
			delay(1000);
			break;
		}
		int all=0;
		if(place==0 && i%2==0)
		{
			outtextxy(230,4,"Black has no move. White's Turn");
			i--;
		}
		else if(place==0 && i%2==1)
		{
			outtextxy(230,4,"White has no move. Black's Turn");
			i--;
		}
		while(all!=1)
		{
			int color=getpixel(123+(x*56),43+(y*56));
			box(x,y,12,4);
			move=getch();
			int px=x,py=y;
			if(move=='/')
				break;
			else if(move=='K' && x>0)
				x--;
			else if(move=='P' && y<7)
				y++;
			else if(move=='H' && y>0)
				y--;
			else if(move=='M' && x<7)
				x++;
			box(px,py,2,0);
			int num=check(x,y,i);
			if(move=='\r' && color==2 && num!=0)
				all=1;
		}
		box(x,y,2,0);
		setcolor(0);
		circle((123+(x*56)),(43+(y*56)),20);
		if(i%2==1)
			setfillstyle(SOLID_FILL,15);
		else
			setfillstyle(SOLID_FILL,8);
		floodfill((123+(x*56)),(43+(y*56)),0);
		check(x,y,i,1);
		for(int m=0;m<8;m++)
			for(int n=0;n<8;n++)
				box(m,n,2,0);
		if(move=='/')
			break;
	}
	delay(1000);
	clear();
	if(move=='/' && i%2==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
		p.r2();
		cout<<" on Winning!!";
		p.setwin("Player 2");
	}
	else if(move=='/' && i%2==1)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
		p.r1();
		cout<<" on Winning!!";
		p.setwin("Player 1");
	}
	else if(wcount==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
		p.r1();
		cout<<" on Winning!!";
		p.setwin("Player 1");
	}
	else if(bcount==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
		p.r2();
		cout<<" on Winning!!";
		p.setwin("Player 2");
	}
	else if(bcount>wcount)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
		p.r1();
		cout<<" on Winning!!";
		p.setwin("Player 1");
	}
	else if(wcount>bcount)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
		p.r2();
		cout<<" on Winning!!";
		p.setwin("Player 2");
	}
	else if(wcount==bcount)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to both Players..."<<"\n\t\t\t\t\tThe Match is a draw!!!!";
		p.setwin("Draw");
	}
	f.write((char *)&p,sizeof(p));
	f.close();
	k.close();
	delay(1000);
	closegraph();
	}
	if(choice==3)
		exit(0);
	}while(choice!=3);
}