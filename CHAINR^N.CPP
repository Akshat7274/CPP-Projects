#include<fstream.h>
#include<iomanip.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
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
	cout<<"\n\n\t1.Purpose of the game is to plant orbs and blast them to conquer the";
	cout<<"\n\t  opponent's orbs.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t2.Use arrow keys to operate the Blue box to the position where you want";
	cout<<"\n\t  to plant your orb.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t3.Hit Enter to plant the orb at the desired position.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t4.Blast happens on an edge if any block on that edge has more than two";
	cout<<"\n\t  orbs.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t5.Blasts may also happen if more than one orb is planted in any of the";
	cout<<"\n\t  corners.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t6.For all other blocks, blast will happen if more than three orbs are ";
	cout<<"\n\t  planted in it.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t7.If any of the two players wants to quit the game, just press '/'";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t8.The game will not be saved and the other player will automatically";
	cout<<"\n\t  win the game.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t9.No player will be allowed to undo any move, so play carefully!";
	ent=getch();
}
struct piece
{
	int num;
	int col;
};
void board(int turn)
{
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(0,0,DARKGRAY);
	if(turn%2==0)
		setcolor(YELLOW);
	else
		setcolor(RED);
	for(int i=200;i<=440;i+=40)
		line(i,40,i,440);
	for(int j=40;j<=440;j+=40)
		line(200,j,440,j);
}
void one(int x,int y,int color)
{
	setcolor(0);
	circle(220+(x*40),60+(y*40),10);
	setfillstyle(SOLID_FILL,color);
	floodfill(220+(x*40),60+(y*40),0);
}
void two(int x,int y,int color)
{
	setcolor(0);
	circle(225+(x*40),60+(y*40),10);
	arc(220+(x*40),55+(y*40),30,250,10);
	setfillstyle(SOLID_FILL,color);
	floodfill(220+(x*40),60+(y*40),0);
	floodfill(215+(x*40),50+(y*40),0);
}
void three(int x,int y,int color)
{
	setcolor(0);
	circle(225+(x*40),58+(y*40),10);
	arc(220+(x*40),55+(y*40),30,250,10);
	arc(220+(x*40),66+(y*40),140,355,10);
	setfillstyle(SOLID_FILL,color);
	floodfill(220+(x*40),58+(y*40),0);
	floodfill(215+(x*40),50+(y*40),0);
	floodfill(215+(x*40),71+(y*40),0);
}
void display(piece a[6][10])
{
	for(int i=0;i<6;i++)
		for(int j=0;j<10;j++)
		{
			int c=a[i][j].col;
			if(a[i][j].num==1)
				one(i,j,c);
			else if(a[i][j].num==2)
				two(i,j,c);
			else if(a[i][j].num==3)
				three(i,j,c);
		}
}
void reaction(piece a[6][10])
{
	for(int x=0;x<6;x++)
		for(int y=0;y<10;y++)
		{
			if(a[x][y].num>3 && x>=0 && x<6 && y>=0 && y<10)
			{
				a[x+1][y].num++;
				a[x+1][y].col=a[x][y].col;
				a[x][y+1].num++;
				a[x][y+1].col=a[x][y].col;
				a[x][y-1].num++;
				a[x][y-1].col=a[x][y].col;
				a[x-1][y].num++;
				a[x-1][y].col=a[x][y].col;
				a[x][y].num=0;
			}
			else if(a[x][y].num>2 && x==0)
			{
				a[x+1][y].num++;
				a[x+1][y].col=a[x][y].col;
				a[x][y+1].num++;
				a[x][y+1].col=a[x][y].col;
				a[x][y-1].num++;
				a[x][y-1].col=a[x][y].col;
				a[x][y].num=0;
			}
			else if(a[x][y].num>2 && y==0)
			{
				a[x+1][y].num++;
				a[x+1][y].col=a[x][y].col;
				a[x][y+1].num++;
				a[x][y+1].col=a[x][y].col;
				a[x-1][y].num++;
				a[x-1][y].col=a[x][y].col;
				a[x][y].num=0;
			}
			else if(a[x][y].num>2 && x==5)
			{
				a[x-1][y].num++;
				a[x-1][y].col=a[x][y].col;
				a[x][y+1].num++;
				a[x][y+1].col=a[x][y].col;
				a[x][y-1].num++;
				a[x][y-1].col=a[x][y].col;
				a[x][y].num=0;
			}
			else if(a[x][y].num>2 && y==9)
			{
				a[x+1][y].num++;
				a[x+1][y].col=a[x][y].col;
				a[x-1][y].num++;
				a[x-1][y].col=a[x][y].col;
				a[x][y-1].num++;
				a[x][y-1].col=a[x][y].col;
				a[x][y].num=0;
			}
			else if(a[x][y].num>1 && x==0 && y==0)
			{
				a[x+1][y].num++;
				a[x+1][y].col=a[x][y].col;
				a[x][y+1].num++;
				a[x][y+1].col=a[x][y].col;
				a[x][y].num=0;
			}
			else if(a[x][y].num>1 && x==0 && y==9)
			{
				a[x+1][y].num++;
				a[x+1][y].col=a[x][y].col;
				a[x][y-1].num++;
				a[x][y-1].col=a[x][y].col;
				a[x][y].num=0;
			}
			else if(a[x][y].num>1 && x==5 && y==0)
			{
				a[x-1][y].num++;
				a[x-1][y].col=a[x][y].col;
				a[x][y+1].num++;
				a[x][y+1].col=a[x][y].col;
				a[x][y].num=0;
			}
			else if(a[x][y].num>1 && x==5 && y==9)
			{
				a[x-1][y].num++;
				a[x-1][y].col=a[x][y].col;
				a[x][y-1].num++;
				a[x][y-1].col=a[x][y].col;
				a[x][y].num=0;
			}
		}
}
void box(int x,int y,int f,int b)
{
	setcolor(0);
	line(200+(40*x),40+(40*y),240+(40*x),40+(40*y));
	line(240+(40*x),40+(40*y),240+(40*x),80+(40*y));
	line(240+(40*x),80+(40*y),200+(40*x),80+(40*y));
	line(200+(40*x),80+(40*y),200+(40*x),40+(40*y));
	setfillstyle(SOLID_FILL,f);
	floodfill(201+(40*x),41+(40*y),0);
	setcolor(b);
	line(200+(40*x),40+(40*y),240+(40*x),40+(40*y));
	line(240+(40*x),40+(40*y),240+(40*x),80+(40*y));
	line(240+(40*x),80+(40*y),200+(40*x),80+(40*y));
	line(200+(40*x),80+(40*y),200+(40*x),40+(40*y));
}
void main()
{
	cout<<"\n\n\n\n\n\n\t\t\t  Welcome to CHAIN REACTION!!!!!!!";
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
						k.open("ChainReaction.dat",ios::binary);
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
					f.open("ChainReaction.dat",ios::binary|ios::app);
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
						f.open("ChainReaction.dat",ios::binary);
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
					fstream k("ChainReaction.dat",ios::binary|ios::in|ios::out);
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
							while(strcmp(n2,p.rwin())!=0 && strcmp(p.rn1(),p.rwin())!=0 && strcmpi(p.rwin(),"Draw")!=0)
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
					f.open("ChainReaction.dat",ios::binary);
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
						f.open("ChainReaction.dat",ios::binary|ios::in|ios::out);
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
					ifstream k2("ChainReaction.dat",ios::binary);
					while(k2.read((char *)&p,sizeof(p)))
					{
						if(p.rid()!=a)
							k1.write((char *)&p,sizeof(p));
					}
					k1.close();
					k2.close();
					remove("ChainReaction.dat");
					rename("Temp.dat","ChainReaction.dat");
					cout<<"\n\n\nRecord deleted!\nDo you want to continue?[y/n]: ";
					cin>>ch1;
				}while(ch1=='y' || ch1=='Y');
			}
			if(num==5)
			{
				clrscr();
				ifstream k("ChainReaction.dat",ios::binary);
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
				ifstream f("ChainReaction.dat",ios::binary);
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
	ofstream f("ChainReaction.dat",ios::binary|ios::app);
	ifstream k("ChainReaction.dat",ios::binary);
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
	piece values[6][10];
	for(int a=0;a<6;a++)
		for(int b=0;b<10;b++)
		{
			values[a][b].num=0;
			values[a][b].col=0;
		}
	int ycount=0,rcount=0;
	for(int i=0;;i++)
	{
		clear();
		board(i);
		display(values);
		int bcount=0;
		for(int p=0;p<6;p++)
		{
			for(int q=0;q<10;q++)
			{
				if(values[p][q].num>3 && p>0 && p<5 && q>0 && q<9)
					bcount++;
				else if(values[p][q].num>2 && p==0)
					bcount++;
				else if(values[p][q].num>2 && q==0)
					bcount++;
				else if(values[p][q].num>2 && p==5)
					bcount++;
				else if(values[p][q].num>2 && q==9)
					bcount++;
				else if(values[p][q].num>1 && p==0 && q==0)
					bcount++;
				else if(values[p][q].num>1 && p==0 && q==9)
					bcount++;
				else if(values[p][q].num>1 && p==5 && q==0)
					bcount++;
				else if(values[p][q].num>1 && p==5 && q==9)
					bcount++;
			}
		}
		int app=0;
		if(bcount!=0)
		{
			while(app!=1)
			{
				clear();
				board(i);
				reaction(values);
				bcount=0;
				for(int p=0;p<6;p++)
				{
					for(int q=0;q<10;q++)
					{
						if(values[p][q].num>3 && p>0 && p<5 && q>0 && q<9)
							bcount++;
						else if(values[p][q].num>2 && p==0)
							bcount++;
						else if(values[p][q].num>2 && q==0)
							bcount++;
						else if(values[p][q].num>2 && p==5)
							bcount++;
						else if(values[p][q].num>2 && q==9)
							bcount++;
						else if(values[p][q].num>1 && p==0 && q==0)
							bcount++;
						else if(values[p][q].num>1 && p==0 && q==9)
							bcount++;
						else if(values[p][q].num>1 && p==5 && q==0)
							bcount++;
						else if(values[p][q].num>1 && p==5 && q==9)
							bcount++;
					}
				}
				clear();
				board(i);
				display(values);
				ycount=0,rcount=0;
				for(int r=0;r<6;r++)
				{
					for(int s=0;s<10;s++)
					{
						if(getpixel(220+(r*40),60+(s*40))==14)
							ycount++;
						else if(getpixel(220+(r*40),60+(s*40))==4)
							rcount++;
					}
				}
				if(ycount==0 && rcount!=0 && i>1)
				{
					delay(1500);
					break;
				}
				else if(rcount==0 && ycount!=0 && i>1)
				{
					delay(1500);
					break;
				}
				delay(500);
				if(bcount==0)
					app=1;
			}
		}
		display(values);
		ycount=0,rcount=0;
		for(int r=0;r<6;r++)
		{
			for(int s=0;s<10;s++)
			{
				if(getpixel(220+(r*40),60+(s*40))==14)
					ycount++;
				else if(getpixel(220+(r*40),60+(s*40))==4)
					rcount++;
			}
		}
		if(ycount==0 && rcount!=0 && i>1)
		{
			delay(1500);
			break;
		}
		else if(rcount==0 && ycount!=0 && i>1)
		{
			delay(1500);
			break;
		}
		int all=0,x=0,y=0;
		int c;
		while(all!=1)
		{
			if(i%2==0)
				c=14;
			else
				c=4;
			int col=getpixel(220+(x*40),60+(y*40));
			box(x,y,9,1);
			int px=x,py=y;
			move=getch();
			if(move=='/')
				break;
			else if(move=='K' && x>0)
				x--;
			else if(move=='P' && y<9)
				y++;
			else if(move=='H' && y>0)
				y--;
			else if(move=='M' && x<5)
				x++;
			box(px,py,8,c);
			if(move=='\r' && (col==8 || col==c))
				all=1;
		}
		if(move=='/')
			break;
		values[x][y].num++;
		values[x][y].col=c;
		reaction(values);
		box(x,y,8,c);
	}
	clear();
	if(rcount==0 && ycount!=0 || (move=='/' && i%2==1))
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
	f.write((char *)&p,sizeof(p));
	f.close();
	k.close();
	delay(1500);
	clear();
	closegraph();
	}
	if(choice==3)
		exit(0);
	}while(choice!=3);
}