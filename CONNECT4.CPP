#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>
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
	int status;
	void setid(int i)
	{
		pid=i+1;
	}
	void nameinput()
	{
		cout<<"\n\n\n\n\t\t\t\tPlayer ID: "<<pid;
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
	cout<<"\n\n\t1.A coin will be dropped in a column by each player,one at a time.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t2.When a player is able to place for coins of his color consecutively";
	cout<<"\n\t  in a row, a column or a diagonal, then that player wins the game.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t3.Using the left and right arrow keys, change the column in which you";
	cout<<"\n\t  want to drop the coin.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t4.Then press Spacebar to drop the coin in the column.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t5.If any of the two players wants to quit the game, just press '/'";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t6.Data of the game will not be saved and the other player will automatically";
	cout<<"\n\t  win the game.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t7.No player will be allowed to undo any move, so play carefully!";
	ent=getch();
}
void board()
{
	line(119,438,519,438);
	line(519,438,519,88);
	line(519,88,119,88);
	line(119,88,119,438);
	line(139,418,499,418);
	line(499,418,499,108);
	line(499,108,139,108);
	line(139,108,139,418);
	for(int i=169;i<=469;i+=50)
	{
		for(int j=138;j<=388;j+=50)
		{
			setcolor(BLUE);
			circle(i,j,20);
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			floodfill(i,j,BLUE);
		}
	}
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(129,98,WHITE);
	floodfill(144,113,BLUE);
	setbkcolor(LIGHTBLUE);
	setcolor(BLACK);
	line(119,438,519,438);
	line(519,438,519,88);
	line(519,88,119,88);
	line(119,88,119,438);
	line(139,418,499,418);
	line(499,418,499,108);
	line(499,108,139,108);
	line(139,108,139,418);
}
void drop(int colnum,int rownum,int turn)
{
	int q=(rownum-1)*50;
	int color;
	if(turn%2==0)
		color=14;
	else
		color=4;
	for(int i=138;i<=(388-q);i+=50)
	{
		if(i<(388-q))
		{
			setfillstyle(SOLID_FILL,color);
			floodfill(colnum,i,BLUE);
			delay(125);
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			floodfill(colnum,i,BLUE);
		}
		else if(i>=(388-q))
		{
			setfillstyle(SOLID_FILL,color);
			floodfill(colnum,i,BLUE);
		}
	}
}
void check(int column,int row,int &c,int &r,int &d1,int &d2)
{
	int x=column,win=0;
	int y=388-((row-1)*50);
	int color=getpixel(x,y);
	for(int i=1;i<5;i++)
	{
		if(i==1)
		{
			for(int j=x;j>=(x-150);j-=50)
			{
				win=0;
				for(int k=j;k<=(j+150);k+=50)
				{
					if(getpixel(k,y)==color)
					{
						win++;
					}
				}
				if(win==4)
				{
					c=1;
					for(int p=j;p<=(j+150);p+=50)
					{
						setfillstyle(SOLID_FILL,GREEN);
						floodfill(p,y,BLUE);
					}
					break;
				}
			}
		}
		else if(i==2)
		{
			for(int j=y;j>=(y-150);j-=50)
			{
				win=0;
				for(int k=j;k<=(j+150);k+=50)
				{
					if(getpixel(x,k)==color)
					{
						win++;
					}
				}
				if(win==4)
				{
					r=1;
					for(int p=j;p<=(j+150);p+=50)
					{
						setfillstyle(SOLID_FILL,GREEN);
						floodfill(x,p,BLUE);
					}
					break;
				}
			}
		}
		if(i==3)
		{
			for(int j=x,l=y;j>=(x-150),l<=(y+150);j-=50,l+=50)
			{
				win=0;
				for(int k=j,m=l;k<=(j+150),m>=(l-150);k+=50,m-=50)
				{
					if(getpixel(k,m)==color)
					{
						win++;
					}
				}
				if(win==4)
				{
					d1=1;
					for(int p=j,q=l;p<=(j+150),q>=(l-150);p+=50,q-=50)
					{
						setfillstyle(SOLID_FILL,GREEN);
						floodfill(p,q,BLUE);
					}
					break;
				}
			}
		}
		if(i==4)
		{
			for(int j=x,l=y;j>=(x-150),l>=(y-150);j-=50,l-=50)
			{
				win=0;
				for(int k=j,m=l;k<=(j+150),m<=(l+150);k+=50,m+=50)
				{
					if(getpixel(k,m)==color)
					{
						win++;
					}
				}
				if(win==4)
				{
					d2=1;
					for(int p=j,q=l;p<=(j+150),q<=(l+150);p+=50,q+=50)
					{
						setfillstyle(SOLID_FILL,GREEN);
						floodfill(p,q,BLUE);
					}
					break;
				}
			}
		}
	}
}
void main()
{
	clrscr();
	cout<<"\n\n\n\n\n\n\t\t\t  Welcome to CONNECT 4!!!!!!!";
	cout<<"\n\n\n\n\t\t\t    Computer Science Project \n\t\t\t\t   Class XII-C";
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCreated by: ";
	cout<<"\n\t\t\t\t\t\tAkshat Joshi(5)";
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
						k.open("Connect4.dat",ios::binary);
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
					f.open("Connect4.dat",ios::binary|ios::app);
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
						f.open("Connect4.dat",ios::binary);
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
					fstream k("Connect4.dat",ios::binary|ios::in|ios::out);
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
					f.open("Connect4.dat",ios::binary);
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
						f.open("Connect4.dat",ios::binary|ios::in|ios::out);
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
					ifstream k2("Connect4.dat",ios::binary);
					while(k2.read((char *)&p,sizeof(p)))
					{
						if(p.rid()!=a)
							k1.write((char *)&p,sizeof(p));
					}
					k1.close();
					k2.close();
					remove("Connect4.dat");
					rename("Temp.dat","Connect4.dat");
					cout<<"\n\n\nRecord deleted!\nDo you want to continue?[y/n]: ";
					cin>>ch1;
				}while(ch1=='y' || ch1=='Y');
			}
			if(num==5)
			{
				clrscr();
				ifstream k("Connect4.dat",ios::binary);
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
				ifstream f("Connect4.dat",ios::binary);
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
	ofstream f("Connect4.dat",ios::binary|ios::app);
	ifstream k("Connect4.dat",ios::binary);
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
	board();
	int row=0,column=0,diagonal1=0,diagonal2=0;
	int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0;
	cout<<"\n";
	for(int t=0;;t++)
	{
		int color;
		row=0,column=0,diagonal1=0,diagonal2=0;
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		if(t%2==0)
		{
			cout<<"\t\t\t\t    ";
			p.r1();
			cout<<"'s Turn\t\t";
			color=14;
		}
		else
		{
			cout<<"\t\t\t\t    ";
			p.r2();
			cout<<"'s Turn\t\t";
			color=4;
		}
		setcolor(color);
		circle(169,64,20);
		setfillstyle(SOLID_FILL,color);
		floodfill(169,64,color);
		if((r1+r2+r3+r4+r5+r6+r7)==42)
			break;
		move=getch();
		int columnum,increase=0;
		columnum=move;
		if(move=='/')
			break;
		while(move!=' ')
			{
			if(increase<=250 && columnum==77)
			increase+=50;
			else if(increase>=50 && columnum==75)
			increase-=50;
			setcolor(color);
			circle(169+increase,64,20);
			setfillstyle(SOLID_FILL,color);
			floodfill(169+increase,64,color);
			move=getch();
			columnum=move;
			setcolor(LIGHTBLUE);
			circle(169+increase,64,20);
			setfillstyle(SOLID_FILL,LIGHTBLUE);
			floodfill(169+increase,64,LIGHTBLUE);
		}
		if((increase/50)==0 && r1<6)
		{
			r1++;
			drop((169+increase),r1,t);
			check((169+increase),r1,column,row,diagonal1,diagonal2);
		}
		else if((increase/50)==1 && r2<6)
		{
			r2++;
			drop((169+increase),r2,t);
			check((169+increase),r2,column,row,diagonal1,diagonal2);
		}
		else if((increase/50)==2 && r3<6)
		{
			r3++;
			drop((169+increase),r3,t);
			check((169+increase),r3,column,row,diagonal1,diagonal2);
		}
		else if((increase/50)==3 && r4<6)
		{
			r4++;
			drop((169+increase),r4,t);
			check((169+increase),r4,column,row,diagonal1,diagonal2);
		}
		else if((increase/50)==4 && r5<6)
		{
			r5++;
			drop((169+increase),r5,t);
			check((169+increase),r5,column,row,diagonal1,diagonal2);
		}
		else if((increase/50)==5 && r6<6)
		{
			r6++;
			drop((169+increase),r6,t);
			check((169+increase),r6,column,row,diagonal1,diagonal2);
		}
		else if((increase/50)==6 && r7<6)
		{
			r7++;
			drop((169+increase),r7,t);
			check((169+increase),r7,column,row,diagonal1,diagonal2);
		}
		else
			t--;
		if(column==1 || row==1 || diagonal1==1 || diagonal2==1)
			break;
	}
	delay(3000);
	clear();
	setbkcolor(BLACK);
	if(move=='/')
	{
		if(t%2==0)
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
			p.r2();
			cout<<" on Winning!!";
			p.setwin("Player 2");
		}
		else
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
			p.r1();
			cout<<" on Winning!!";
			p.setwin("Player 1");
		}
	}
	else if(column==1 || row==1 || diagonal1==1 || diagonal2==1)
	{
		if(t%2==0)
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
			p.r1();
			cout<<" on Winning!!";
			p.setwin("Player 1");
		}
		else
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
			p.r2();
			cout<<" on Winning!!";
			p.setwin("Player 2");
		}
	}
	else if((r1+r2+r3+r4+r5+r6+r7)==42)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to both Players..."<<"\n\t\t\t\t\tThe Match is a draw!!!!";
		p.setwin("Draw");
	}
	f.write((char *)&p,sizeof(p));
	f.close();
	k.close();
	delay(2000);
	clear();
	closegraph();
	}
	if(choice==3)
		exit(0);
	}while(choice!=3);
}