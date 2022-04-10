#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<graphics.h>
#include<dos.h>
void clear()
{
	cleardevice();
	clrscr();
	cleardevice();
}
int length(int val)
{
	int len=1;
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
	int pid,rownum,columnum;
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
		cout<<"\n\n\n\n\t\t\t\tNo. of Rows(MAX. 20): ";
		cin>>rownum;
		if(rownum>20)
			rownum=20;
		else if(rownum<1)
			rownum=1;
		cout<<"\n\n\t\t\t\tNo. of Columns(MAX. 30): ";
		cin>>columnum;
		if(columnum>30)
			columnum=30;
		else if(columnum<1)
			columnum=1;
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
		int rl=length(rownum)/2;
		int cl=length(columnum)/2;
		idl--;
		idl/=2;
		int n1l=strlen(name1)/2;
		int n2l=strlen(name2)/2;
		int winl=strlen(winner)/2;
		cout<<"||"<<setw(rmax+idl+2)<<pid<<setw(rmax-idl+3)<<"||"<<setw(p1l+n1l+1)<<name1<<setw(p1l-n1l+3)<<"||"<<setw(p2l+n2l+1)<<name2<<setw(p2l-n2l+3)<<"||"<<setw(rl+3)<<rownum<<setw(5-rl)<<"||"<<setw(5+cl)<<columnum<<setw(6-cl)<<"||"<<setw(wl+winl+1)<<winner<<setw(wl-winl+3)<<"||";
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
	void row()
	{
		cout<<rownum;
	}
	void column()
	{
		cout<<columnum;
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
	void modr(int r)
	{
		rownum=r;
	}
	void modc(int c)
	{
		columnum=c;
	}
	int rid()
	{
		return pid;
	}
	int rr()
	{
		return rownum;
	}
	int rc()
	{
		return columnum;
	}
}p;
void start()
{

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	char ent;
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
	cout<<"\n\n\t1.Two dots will be joined to make a line.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t2.When four such lines enclose a box, 1 point is added to the credit of";
	cout<<"\n\t  the player who made the last line.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t3.When all boxes are made, the player with more boxes and points to his";
	cout<<"\n\t  credit, wins.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t4.To make a line, first bring the colored cross to a point, using ";
	cout<<"\n\t  arrow keys.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t5.Then select that point by pressing Spacebar.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	cout<<"\n\n\t6.After selecting this point, press the arrow key corresponding to the";
	cout<<"\n\t  direction in which you want the line to be made.";
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
						k.open("DotToDot.dat",ios::binary);
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
					f.open("DotToDot.dat",ios::binary|ios::app);
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
						f.open("DotToDot.dat",ios::binary);
						while(f.read((char *)&p,sizeof(p)))
						{
							if(p.rid()==a)
							{
								cout<<"\n\n\tPlayer 1: ";
								p.r1();
								cout<<"\n\tPlayer 2: ";
								p.r2();
								cout<<"\n\tRows: ";
								p.row();
								cout<<"\n\tColumns: ";
								p.column();
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
					fstream k("DotToDot.dat",ios::binary|ios::in|ios::out);
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
						cout<<"\n\t4) Rows";
						cout<<"\n\t5) Columns";
						cout<<"\n\n\tEnter the number corresponding to whatever you want to modify: ";
						cin>>ans;
						if(ans>5)
						{
							while(ans>5)
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
							while(strcmp(n1,p.rwin())!=0 && strcmp(p.rn2(),p.rwin())!=0 && strcmpi(p.rwin(),"Draw")!=0)
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
						else if(ans==4)
						{
							int row;
							cout<<"\n\tEnter new number of Rows: ";
							cin>>row;
							while(row>20 || row<1)
							{
								cout<<"\n\nPlease enter a number between 1 and 20: ";
								cin>>row;
							}
							p.modr(row);
							k.write((char *)&p,sizeof(p));
						}
						else if(ans==5)
						{
							int column;
							cout<<"\n\tEnter new number of Columns: ";
							cin>>column;
							while(column>30 || column<1)
							{
								cout<<"\n\nPlease enter a number between 1 and 30: ";
								cin>>column;
							}
							p.modc(column);
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
					f.open("DotToDot.dat",ios::binary);
					while(f.read((char *)&p,sizeof(p)))
					{
						if(p.rid()==a)
						{
							cout<<"\n\n\tPlayer 1: ";
							p.r1();
							cout<<"\n\tPlayer 2: ";
							p.r2();
							cout<<"\n\tRows: ";
							p.row();
							cout<<"\n\tColumns: ";
							p.column();
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
						f.open("DotToDot.dat",ios::binary|ios::in|ios::out);
						while(f.read((char *)&p,sizeof(p)))
						{
							if(p.rid()==a)
							{
								cout<<"\n\n\tPlayer 1: ";
								p.r1();
								cout<<"\n\tPlayer 2: ";
								p.r2();
								cout<<"\n\tRows: ";
								p.row();
								cout<<"\n\tColumns: ";
								p.column();
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
					ifstream k2("DotToDot.dat",ios::binary);
					while(k2.read((char *)&p,sizeof(p)))
					{
						if(p.rid()!=a)
							k1.write((char *)&p,sizeof(p));
					}
					k1.close();
					k2.close();
					remove("DotToDot.dat");
					rename("Temp.dat","DotToDot.dat");
					cout<<"\n\n\nRecord deleted!\nDo you want to continue?[y/n]: ";
					cin>>ch1;
				}while(ch1=='y' || ch1=='Y');
			}
			if(num==5)
			{
				clrscr();
				ifstream k("DotToDot.dat",ios::binary);
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
				int w=2*(rmax+p1l+p2l+wl)+38;
				cout<<"\n\n";
				for(int o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n||"<<setw(rmax+2)<<"ID"<<setw(rmax+3)<<"||"<<setw(p1l+5)<<"Player 1"<<setw(p1l-1)<<"||"<<setw(p2l+5)<<"Player 2"<<setw(p2l-1)<<"||"<<setw(5)<<"Rows"<<setw(3)<<"||"<<setw(8)<<"Columns"<<setw(3)<<"||"<<setw(wl+4)<<"Winner"<<setw(wl)<<"||";
				cout<<"\n";
				for(o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n";
				for(o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n";
				ifstream f("DotToDot.dat",ios::binary);
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
	clrscr();
	start();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	ofstream f("DotToDot.dat",ios::binary|ios::app);
	ifstream k("DotToDot.dat",ios::binary);
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
	int upper,s,c,p1score=0,p2score=0;
	if(p.rr()>p.rc())
	{
		upper=p.rr();
		s=420/p.rr();
		c=(630-(s*p.rc()))/2;
	}
	else if(p.rr()==p.rc())
	{
		s=420/p.rr();
		c=105;
	}
	else
	{
		upper=p.rc();
		s=630/p.rc();
		c=(420-(s*p.rr()))/2;

	}
	clear();
	if(upper==p.rr())
	{
		for(int j=(4+c);j<=(634-c);j+=s)
		{
			for(int i=54;i<=474;i+=s)
			{
				putpixel(j,i,WHITE);
			}
		}
		setcolor(RED);
		line(c,50,8+c,58);
		line(8+c,50,c,58);
		setcolor(YELLOW);
		line(c,50,8+c,58);
		line(8+c,50,c,58);
		char move,linedir;
		int bx=0,by=0,rx=0,ry=0,al=0,per=0,chance=0;
		int d=s/2,cd=0,cu=0,cl=0,cr=0;
		for(int t=0;;t++)
		{
			cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			p.r1();
			cout<<": "<<p1score;
			if(t%2==0)
			{
				cout<<"\t\t\t";
				p.r1();
				cout<<"'s turn";
			}
			else
			{
				cout<<"\t\t\t";
				p.r2();
				cout<<"'s turn";
			}
			cout<<"\t\t\t";
			p.r2();
			cout<<": "<<p2score;
			move=getch();
			if(move=='/')
				break;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			while(move!=' ')
			{
				if(al==0)
				{
					setcolor(0);
					line(c+rx,58+ry,8+c+rx,50+ry);
					line(8+c+rx,58+ry,c+rx,50+ry);
					setcolor(0);
					line(c+bx,58+by,8+c+bx,50+by);
					line(8+c+bx,58+by,c+bx,50+by);
					if(move=='K' && t%2==0 && bx>=s)
						bx-=s;
					else if(move=='P' && t%2==0 && by<=(420-s))
						by+=s;
					else if(move=='H' && t%2==0 && by>=s)
						by-=s;
					else if(move=='M' && t%2==0 && bx<=(s*(p.rc()-1)))
						bx+=s;
					else if(move=='K' && t%2==1 && rx>=s)
						rx-=s;
					else if(move=='P' && t%2==1 && ry<=(420-s))
						ry+=s;
					else if(move=='H' && t%2==1 && ry>=s)
						ry-=s;
					else if(move=='M' && t%2==1 && rx<=(s*(p.rc()-1)))
						rx+=s;
					for(int j=(4+c);j<=(634-c);j+=s)
					{
					for(int i=54;i<=474;i+=s)
						{
							putpixel(j,i,WHITE);
						}
					}
					if(t%2==0)
					{
						setcolor(RED);
						line(c+rx,58+ry,8+c+rx,50+ry);
						line(8+c+rx,58+ry,c+rx,50+ry);
						setcolor(YELLOW);
						line(c+bx,58+by,8+c+bx,50+by);
						line(8+c+bx,58+by,c+bx,50+by);
					}
					else if(t%2==1)
					{
						setcolor(YELLOW);
						line(c+bx,58+by,8+c+bx,50+by);
						line(8+c+bx,58+by,c+bx,50+by);
						setcolor(RED);
						line(c+rx,58+ry,8+c+rx,50+ry);
						line(8+c+rx,58+ry,c+rx,50+ry);
					}
					if(t%2==0)
					{
						cd=getpixel(4+c+bx,54+by+d);
						cu=getpixel(4+c+bx,54+by-d);
						cr=getpixel(4+c+bx+d,54+by);
						cl=getpixel(4+c+bx-d,54+by);
					}
					if(t%2==1)
					{
						cd=getpixel(4+c+rx,54+ry+d);
						cu=getpixel(4+c+rx,54+ry-d);
						cr=getpixel(4+c+rx+d,54+ry);
						cl=getpixel(4+c+rx-d,54+ry);
					}
						move=getch();
					if(move=='/')
						break;
				}
				else
					move=' ';
			}
			if(move=='/')
				break;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			linedir=getch();
			int dir=linedir;
			if(t%2==0)
			{
				cd=getpixel(4+c+bx,54+by+d);
				cu=getpixel(4+c+bx,54+by-d);
				cr=getpixel(4+c+bx+d,54+by);
				cl=getpixel(4+c+bx-d,54+by);
			}
			if(t%2==1)
			{
				cd=getpixel(4+c+rx,54+ry+d);
				cu=getpixel(4+c+rx,54+ry-d);
				cr=getpixel(4+c+rx+d,54+ry);
				cl=getpixel(4+c+rx-d,54+ry);
			}
			if(t%2==0 && bx<s && by<s)
			{
				while(dir!=77 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx<s && by>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)) && by>(s*(p.rr()-1)))
			{
				while(dir!=75 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)) && by<s)
			{
				while(dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx<s)
			{
				while(dir!=77 && dir!=72 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)))
			{
				while(dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && by<s)
			{
				while(dir!=77 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && by>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72 && dir!=75)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else
			{
				while(dir!=77 && dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			if(t%2==1 && rx<s && ry<s)
			{
				while(dir!=77 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx<s && ry>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)) && ry>(s*(p.rr()-1)))
			{
				while(dir!=75 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)) && ry<s)
			{
				while(dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx<s)
			{
				while(dir!=77 && dir!=72 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)))
			{
				while(dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && ry<s)
			{
				while(dir!=77 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && ry>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72 && dir!=75)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else
			{
				while(dir!=77 && dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			al=0,per=0,chance=0;
			if(dir==77 && cr==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(4+c+bx,54+by-d)!=0 && getpixel(4+c+bx+s,54+by-d)!=0 && getpixel(4+c+bx+d,54+by-s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+c+bx+d,54+by-d,"1");
					}
					if(getpixel(4+c+bx,54+by+d)!=0 && getpixel(4+c+bx+s,54+by+d)!=0 && getpixel(4+c+bx+d,54+by+s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+c+bx+d,54+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(4+c+rx,54+ry-d)!=0 && getpixel(4+c+rx+s,54+ry-d)!=0 && getpixel(4+c+rx+d,54+ry-s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+c+rx+d,54+ry-d,"2");
					}
					if(getpixel(4+c+rx,54+ry+d)!=0 && getpixel(4+c+rx+s,54+ry+d)!=0 && getpixel(4+c+rx+d,54+ry+s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+c+rx+d,54+ry+d,"2");
					}
				}
			}
			else if(dir==75 && cl==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(4+c+bx,54+by-d)!=0 && getpixel(4+c+bx-s,54+by-d)!=0 && getpixel(4+c+bx-d,54+by-s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+c+bx-d,54+by-d,"1");
					}
					if(getpixel(4+c+bx,54+by+d)!=0 && getpixel(4+c+bx-s,54+by+d)!=0 && getpixel(4+c+bx-d,54+by+s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+c+bx-d,54+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(4+c+rx,54+ry-d)!=0 && getpixel(4+c+rx-s,54+ry-d)!=0 && getpixel(4+c+rx-d,54+ry-s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+c+rx-d,54+ry-d,"2");
					}
					if(getpixel(4+c+rx,54+ry+d)!=0 && getpixel(4+c+rx-s,54+ry+d)!=0 && getpixel(4+c+rx-d,54+ry+s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+c+rx-d,54+ry+d,"2");
					}
				}
			}
			else if(dir==72 && cu==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(4+c+bx-d,54+by)!=0 && getpixel(4+c+bx-d,54+by-s)!=0 && getpixel(4+c+bx-s,54+by-d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+c+bx-d,54+by-d,"1");
					}
					if(getpixel(4+c+bx+d,54+by)!=0 && getpixel(4+c+bx+d,54+by-s)!=0 && getpixel(4+c+bx+s,54+by-d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+c+bx+d,54+by-d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(4+c+rx-d,54+ry)!=0 && getpixel(4+c+rx-d,54+ry-s)!=0 && getpixel(4+c+rx-s,54+ry-d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+c+rx-d,54+ry-d,"2");
					}
					if(getpixel(4+c+rx+d,54+ry)!=0 && getpixel(4+c+rx+d,54+ry-s)!=0 && getpixel(4+c+rx+s,54+ry-d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+c+rx+d,54+ry-d,"2");
					}
				}
			}
			else if(dir==80 && cd==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(4+c+bx-d,54+by)!=0 && getpixel(4+c+bx-d,54+by+s)!=0 && getpixel(4+c+bx-s,54+by+d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+c+bx-d,54+by+d,"1");
					}
					if(getpixel(4+c+bx+d,54+by)!=0 && getpixel(4+c+bx+d,54+by+s)!=0 && getpixel(4+c+bx+s,54+by+d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+c+bx+d,54+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(4+c+rx-d,54+ry)!=0 && getpixel(4+c+rx-d,54+ry+s)!=0 && getpixel(4+c+rx-s,54+ry+d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+c+rx-d,54+ry+d,"2");
					}
					if(getpixel(4+c+rx+d,54+ry)!=0 && getpixel(4+c+rx+d,54+ry+s)!=0 && getpixel(4+c+rx+s,54+ry+d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+c+rx+d,54+ry+d,"2");
					}
				}
			}
			else
			{
				if(dir==77)
					setcolor(cr);
				else if(dir==75)
					setcolor(cl);
				else if(dir==72)
					setcolor(cu);
				else if(dir==80)
					setcolor(cd);
				if(t%2==0 && bx>=s && bx<=(s*(p.rc()-1)) && by>=s && by<=(s*(p.rr()-1)))
				{
					if(cu==0 || cd==0 || cl==0 || cr==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s && by<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s && by>(s*(p.rr()-1)))
				{
					if(cr==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)) && by>(s*(p.rr()-1)))
				{
					if(cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)) && by<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s)
				{
					if(cr==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)))
				{
					if(cl==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && by<s)
				{
					if(cr==0 || cd==0 || cl==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && by>(s*(p.rr()-1)))
				{
					if(cr==0 || cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				if(t%2==1 && rx>=s && rx<=(s*(p.rc()-1)) && ry>=s && ry<=(s*(p.rr()-1)))
				{
					if(cu==0 || cd==0 || cl==0 || cr==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s && ry<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s && ry>(s*(p.rr()-1)))
				{
					if(cr==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)) && ry>(s*(p.rr()-1)))
				{
					if(cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)) && ry<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s)
				{
					if(cr==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)))
				{
					if(cl==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && ry<s)
				{
					if(cr==0 || cd==0 || cl==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && ry>(s*(p.rr()-1)))
				{
					if(cr==0 || cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
			}
			if(dir==77 && t%2==0)
			{
				line(4+c+bx,54+by,4+c+bx+s,54+by);
				putpixel(4+c+bx+s,54+by,WHITE);
			}
			else if(dir==72 && t%2==0)
			{
				line(4+c+bx,54+by,4+c+bx,54+by-s);
				putpixel(4+c+bx,54+by-s,WHITE);
			}
			else if(dir==75 && t%2==0)
			{
				line(4+c+bx,54+by,4+c+bx-s,54+by);
				putpixel(4+c+bx-s,54+by,WHITE);
			}
			else if(dir==80 && t%2==0)
			{
				line(4+c+bx,54+by,4+c+bx,54+by+s);
				putpixel(4+c+bx,54+by+s,WHITE);
			}
			else if(dir==77 && t%2==1)
			{
				line(4+c+rx,54+ry,4+c+rx+s,54+ry);
				putpixel(4+c+rx+s,54+ry,WHITE);
			}
			else if(dir==72 && t%2==1)
			{
				line(4+c+rx,54+ry,4+c+rx,54+ry-s);
				putpixel(4+c+rx,54+ry-s,WHITE);
			}
			else if(dir==75 && t%2==1)
			{
				line(4+c+rx,54+ry,4+c+rx-s,54+ry);
				putpixel(4+c+rx-s,54+ry,WHITE);
			}
			else if(dir==80 && t%2==1)
			{
				line(4+c+rx,54+ry,4+c+rx,54+ry+s);
				putpixel(4+c+rx,54+ry+s,WHITE);
			}
			if(al==1 || per==1 || chance==1)
				t--;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
		}
		delay(1000);
		clear();
		if(p1score+p2score==(p.rr()*p.rc()))
		{
			if(p1score>p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r1();
				cout<<" on Winning!!";
				p.setwin("Player 1");
			}
			else if(p1score<p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r2();
				cout<<" on Winning!!";
				p.setwin("Player 2");
			}
			else if(p1score==p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to both Players..."<<"\n\t\t\t\t\tThe Match is a draw!!!!";
				p.setwin("Draw");
			}
		}
		else
		{
			if(t%2==1)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r1();
				cout<<" on Winning!!";
				p.setwin("Player 1");
			}
			else if(t%2==0)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r2();
				cout<<" on Winning!!";
				p.setwin("Player 2");
			}
		}
		delay(1000);
	}
	else if(p.rr()==p.rc())
	{
		for(int i=105;i<=525;i+=s)
		{
			for(int j=54;j<=474;j+=s)
			{
				putpixel(i,j,WHITE);
			}
		}
		setcolor(RED);
		line(101,50,109,58);
		line(109,50,101,58);
		setcolor(YELLOW);
		line(101,50,109,58);
		line(109,50,101,58);
		char move,linedir;
		int bx=0,by=0,rx=0,ry=0,al=0,per=0,chance=0;
		int d=s/2,cd=0,cu=0,cl=0,cr=0;
		for(int t=0;;t++)
		{
			cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			p.r1();
			cout<<": "<<p1score;
			if(t%2==0)
			{
				cout<<"\t\t\t";
				p.r1();
				cout<<"'s turn";
			}
			else
			{
				cout<<"\t\t\t";
				p.r2();
				cout<<"'s turn";
			}
			cout<<"\t\t\t";
			p.r2();
			cout<<": "<<p2score;
			move=getch();
			if(move=='/')
				break;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			while(move!=' ')
			{
				if(al==0)
				{
					setcolor(0);
					line(101+rx,58+ry,109+rx,50+ry);
					line(109+rx,58+ry,101+rx,50+ry);
					setcolor(0);
					line(101+bx,58+by,109+bx,50+by);
					line(109+bx,58+by,101+bx,50+by);
					if(move=='K' && t%2==0 && bx>=s)
						bx-=s;
					else if(move=='P' && t%2==0 && by<=(420-s))
						by+=s;
					else if(move=='H' && t%2==0 && by>=s)
						by-=s;
					else if(move=='M' && t%2==0 && bx<=(s*(p.rc()-1)))
						bx+=s;
					else if(move=='K' && t%2==1 && rx>=s)
						rx-=s;
					else if(move=='P' && t%2==1 && ry<=(420-s))
						ry+=s;
					else if(move=='H' && t%2==1 && ry>=s)
						ry-=s;
					else if(move=='M' && t%2==1 && rx<=(s*(p.rc()-1)))
						rx+=s;
					for(int j=105;j<=525;j+=s)
					{
					for(int i=54;i<=474;i+=s)
						{
						putpixel(j,i,WHITE);
						}
					}
					if(t%2==0)
					{
						setcolor(RED);
						line(101+rx,58+ry,109+rx,50+ry);
						line(109+rx,58+ry,101+rx,50+ry);
						setcolor(YELLOW);
						line(101+bx,58+by,109+bx,50+by);
						line(109+bx,58+by,101+bx,50+by);
					}
					else if(t%2==1)
					{
						setcolor(YELLOW);
						line(101+bx,58+by,109+bx,50+by);
						line(109+bx,58+by,101+bx,50+by);
						setcolor(RED);
						line(101+rx,58+ry,109+rx,50+ry);
						line(109+rx,58+ry,101+rx,50+ry);
					}
					if(t%2==0)
					{
						cd=getpixel(105+bx,54+by+d);
						cu=getpixel(105+bx,54+by-d);
						cr=getpixel(105+bx+d,54+by);
						cl=getpixel(105+bx-d,54+by);
					}
					if(t%2==1)
					{
						cd=getpixel(105+rx,54+ry+d);
						cu=getpixel(105+rx,54+ry-d);
						cr=getpixel(105+rx+d,54+ry);
						cl=getpixel(105+rx-d,54+ry);
					}
						move=getch();
					if(move=='/')
						break;
				}
				else
					move=' ';
			}
			if(move=='/')
				break;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			linedir=getch();
			int dir=linedir;
			if(t%2==0)
			{
				cd=getpixel(105+bx,54+by+d);
				cu=getpixel(105+bx,54+by-d);
				cr=getpixel(105+bx+d,54+by);
				cl=getpixel(105+bx-d,54+by);
			}
			if(t%2==1)
			{
				cd=getpixel(105+rx,54+ry+d);
				cu=getpixel(105+rx,54+ry-d);
				cr=getpixel(105+rx+d,54+ry);
				cl=getpixel(105+rx-d,54+ry);
			}
			if(t%2==0 && bx<s && by<s)
			{
				while(dir!=77 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx<s && by>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)) && by>(s*(p.rr()-1)))
			{
				while(dir!=75 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)) && by<s)
			{
				while(dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx<s)
			{
				while(dir!=77 && dir!=72 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)))
			{
				while(dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && by<s)
			{
				while(dir!=77 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && by>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72 && dir!=75)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else
			{
				while(dir!=77 && dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			if(t%2==1 && rx<s && ry<s)
			{
				while(dir!=77 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx<s && ry>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)) && ry>(s*(p.rr()-1)))
			{
				while(dir!=75 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)) && ry<s)
			{
				while(dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx<s)
			{
				while(dir!=77 && dir!=72 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)))
			{
				while(dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && ry<s)
			{
				while(dir!=77 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && ry>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72 && dir!=75)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else
			{
				while(dir!=77 && dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			al=0,per=0,chance=0;
			if(dir==77 && cr==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(105+bx,54+by-d)!=0 && getpixel(105+bx+s,54+by-d)!=0 && getpixel(105+bx+d,54+by-s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(105+bx+d,54+by-d,"1");
					}
					if(getpixel(105+bx,54+by+d)!=0 && getpixel(105+bx+s,54+by+d)!=0 && getpixel(105+bx+d,54+by+s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(105+bx+d,54+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(105+rx,54+ry-d)!=0 && getpixel(105+rx+s,54+ry-d)!=0 && getpixel(105+rx+d,54+ry-s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(105+rx+d,54+ry-d,"2");
					}
					if(getpixel(105+rx,54+ry+d)!=0 && getpixel(105+rx+s,54+ry+d)!=0 && getpixel(105+rx+d,54+ry+s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(105+rx+d,54+ry+d,"2");
					}
				}
			}
			else if(dir==75 && cl==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(105+bx,54+by-d)!=0 && getpixel(105+bx-s,54+by-d)!=0 && getpixel(105+bx-d,54+by-s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(105+bx-d,54+by-d,"1");
					}
					if(getpixel(105+bx,54+by+d)!=0 && getpixel(105+bx-s,54+by+d)!=0 && getpixel(105+bx-d,54+by+s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(105+bx-d,54+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(105+rx,54+ry-d)!=0 && getpixel(105+rx-s,54+ry-d)!=0 && getpixel(105+rx-d,54+ry-s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(105+rx-d,54+ry-d,"2");
					}
					if(getpixel(105+rx,54+ry+d)!=0 && getpixel(105+rx-s,54+ry+d)!=0 && getpixel(105+rx-d,54+ry+s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(105+rx-d,54+ry+d,"2");
					}
				}
			}
			else if(dir==72 && cu==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(105+bx-d,54+by)!=0 && getpixel(105+bx-d,54+by-s)!=0 && getpixel(105+bx-s,54+by-d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(105+bx-d,54+by-d,"1");
					}
					if(getpixel(105+bx+d,54+by)!=0 && getpixel(105+bx+d,54+by-s)!=0 && getpixel(105+bx+s,54+by-d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(105+bx+d,54+by-d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(105+rx-d,54+ry)!=0 && getpixel(105+rx-d,54+ry-s)!=0 && getpixel(105+rx-s,54+ry-d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(105+rx-d,54+ry-d,"2");
					}
					if(getpixel(105+rx+d,54+ry)!=0 && getpixel(105+rx+d,54+ry-s)!=0 && getpixel(105+rx+s,54+ry-d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(105+rx+d,54+ry-d,"2");
					}
				}
			}
			else if(dir==80 && cd==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(105+bx-d,54+by)!=0 && getpixel(105+bx-d,54+by+s)!=0 && getpixel(105+bx-s,54+by+d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(105+bx-d,54+by+d,"1");
					}
					if(getpixel(105+bx+d,54+by)!=0 && getpixel(105+bx+d,54+by+s)!=0 && getpixel(105+bx+s,54+by+d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(105+bx+d,54+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(105+rx-d,54+ry)!=0 && getpixel(105+rx-d,54+ry+s)!=0 && getpixel(105+rx-s,54+ry+d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(105+rx-d,54+ry+d,"2");
					}
					if(getpixel(105+rx+d,54+ry)!=0 && getpixel(105+rx+d,54+ry+s)!=0 && getpixel(105+rx+s,54+ry+d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(105+rx+d,54+ry+d,"2");
					}
				}
			}
			else
			{
				if(dir==77)
					setcolor(cr);
				else if(dir==75)
					setcolor(cl);
				else if(dir==72)
					setcolor(cu);
				else if(dir==80)
					setcolor(cd);
				if(t%2==0 && bx>=s && bx<=(s*(p.rc()-1)) && by>=s && by<=(s*(p.rr()-1)))
				{
					if(cu==0 || cd==0 || cl==0 || cr==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s && by<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s && by>(s*(p.rr()-1)))
				{
					if(cr==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)) && by>(s*(p.rr()-1)))
				{
					if(cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)) && by<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s)
				{
					if(cr==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)))
				{
					if(cl==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && by<s)
				{
					if(cr==0 || cd==0 || cl==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && by>(s*(p.rr()-1)))
				{
					if(cr==0 || cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				if(t%2==1 && rx>=s && rx<=(s*(p.rc()-1)) && ry>=s && ry<=(s*(p.rr()-1)))
				{
					if(cu==0 || cd==0 || cl==0 || cr==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s && ry<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s && ry>(s*(p.rr()-1)))
				{
					if(cr==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)) && ry>(s*(p.rr()-1)))
				{
					if(cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)) && ry<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s)
				{
					if(cr==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)))
				{
					if(cl==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && ry<s)
				{
					if(cr==0 || cd==0 || cl==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && ry>(s*(p.rr()-1)))
				{
					if(cr==0 || cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
			}
			if(dir==77 && t%2==0)
			{
				line(105+bx,54+by,105+bx+s,54+by);
				putpixel(105+bx+s,54+by,WHITE);
			}
			else if(dir==72 && t%2==0)
			{
				line(105+bx,54+by,105+bx,54+by-s);
				putpixel(105+bx,54+by-s,WHITE);
			}
			else if(dir==75 && t%2==0)
			{
				line(105+bx,54+by,105+bx-s,54+by);
				putpixel(105+bx-s,54+by,WHITE);
			}
			else if(dir==80 && t%2==0)
			{
				line(105+bx,54+by,105+bx,54+by+s);
				putpixel(105+bx,54+by+s,WHITE);
			}
			else if(dir==77 && t%2==1)
			{
				line(105+rx,54+ry,105+rx+s,54+ry);
				putpixel(105+rx+s,54+ry,WHITE);
			}
			else if(dir==72 && t%2==1)
			{
				line(105+rx,54+ry,105+rx,54+ry-s);
				putpixel(105+rx,54+ry-s,WHITE);
			}
			else if(dir==75 && t%2==1)
			{
				line(105+rx,54+ry,105+rx-s,54+ry);
				putpixel(105+rx-s,54+ry,WHITE);
			}
			else if(dir==80 && t%2==1)
			{
				line(105+rx,54+ry,105+rx,54+ry+s);
				putpixel(105+rx,54+ry+s,WHITE);
			}
			if(al==1 || per==1 || chance==1)
				t--;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
		}
		delay(1000);
		clear();
		if(p1score+p2score==(p.rr()*p.rc()))
		{
			if(p1score>p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r1();
				cout<<" on Winning!!";
				p.setwin("Player 1");
			}
			else if(p1score<p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r2();
				cout<<" on Winning!!";
				p.setwin("Player 2");
			}
			else if(p1score==p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to both Players..."<<"\n\t\t\t\t\tThe Match is a draw!!!!";
				p.setwin("Draw");
			}
		}
		else
		{
			if(t%2==1)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r1();
				cout<<" on Winning!!";
				p.setwin("Player 1");
			}
			else if(t%2==0)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r2();
				cout<<" on Winning!!";
				p.setwin("Player 2");
			}
		}
		delay(1000);
	}
	if(upper==p.rc())
	{
		for(int i=4;i<=634;i+=s)
		{
			for(int j=(54+c);j<=(474-c);j+=s)
			{
				putpixel(i,j,WHITE);
			}
		}
		setcolor(RED);
		line(0,50+c,8,58+c);
		line(8,50+c,0,58+c);
		setcolor(YELLOW);
		line(0,50+c,8,58+c);
		line(8,50+c,0,58+c);
		char move,linedir;
		int bx=0,by=0,rx=0,ry=0,al=0,per=0,chance=0;
		int d=s/2,cd=0,cu=0,cl=0,cr=0;
		for(int t=0;;t++)
		{
			cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			p.r1();
			cout<<": "<<p1score;
			if(t%2==0)
			{
				cout<<"\t\t\t";
				p.r1();
				cout<<"'s turn";
			}
			else
			{
				cout<<"\t\t\t";
				p.r2();
				cout<<"'s turn";
			}
			cout<<"\t\t\t";
			p.r2();
			cout<<": "<<p2score;
			move=getch();
			if(move=='/')
				break;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			while(move!=' ')
			{
				if(al==0)
				{
					setcolor(0);
					line(rx,58+c+ry,8+rx,50+c+ry);
					line(8+rx,58+c+ry,rx,50+c+ry);
					setcolor(0);
					line(bx,58+c+by,8+bx,50+c+by);
					line(8+bx,58+c+by,bx,50+c+by);
					if(move=='K' && t%2==0 && bx>=s)
						bx-=s;
					else if(move=='P' && t%2==0 && by<=(420-s))
						by+=s;
					else if(move=='H' && t%2==0 && by>=s)
						by-=s;
					else if(move=='M' && t%2==0 && bx<=(s*(p.rc()-1)))
						bx+=s;
					else if(move=='K' && t%2==1 && rx>=s)
						rx-=s;
					else if(move=='P' && t%2==1 && ry<=(420-s))
						ry+=s;
					else if(move=='H' && t%2==1 && ry>=s)
						ry-=s;
					else if(move=='M' && t%2==1 && rx<=(s*(p.rc()-1)))
						rx+=s;
					for(int j=4;j<=634;j+=s)
					{
					for(int i=54+c;i<=474-c;i+=s)
						{
						putpixel(j,i,WHITE);
						}
					}
					if(t%2==0)
					{
						setcolor(RED);
						line(rx,58+c+ry,8+rx,50+c+ry);
						line(8+rx,58+c+ry,rx,50+c+ry);
						setcolor(YELLOW);
						line(bx,58+c+by,8+bx,50+c+by);
						line(8+bx,58+c+by,bx,50+c+by);
					}
					else if(t%2==1)
					{
						setcolor(YELLOW);
						line(bx,58+c+by,8+bx,50+c+by);
						line(8+bx,58+c+by,bx,50+c+by);
						setcolor(RED);
						line(rx,58+c+ry,8+rx,50+c+ry);
						line(8+rx,58+c+ry,rx,50+c+ry);
					}
					if(t%2==0)
					{
						cd=getpixel(4+bx,54+c+by+d);
						cu=getpixel(4+bx,54+c+by-d);
						cr=getpixel(4+bx+d,54+c+by);
						cl=getpixel(4+bx-d,54+c+by);
					}
					if(t%2==1)
					{
						cd=getpixel(4+rx,54+c+ry+d);
						cu=getpixel(4+rx,54+c+ry-d);
						cr=getpixel(4+rx+d,54+c+ry);
						cl=getpixel(4+rx-d,54+c+ry);
					}
						move=getch();
					if(move=='/')
						break;
				}
				else
					move=' ';
			}
			if(move=='/')
				break;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			linedir=getch();
			int dir=linedir;
			if(t%2==0)
			{
				cd=getpixel(4+bx,54+c+by+d);
				cu=getpixel(4+bx,54+c+by-d);
				cr=getpixel(4+bx+d,54+c+by);
				cl=getpixel(4+bx-d,54+c+by);
			}
			if(t%2==1)
			{
				cd=getpixel(4+rx,54+c+ry+d);
				cu=getpixel(4+rx,54+c+ry-d);
				cr=getpixel(4+rx+d,54+c+ry);
				cl=getpixel(4+rx-d,54+c+ry);
			}
			if(t%2==0 && bx<s && by<s)
			{
				while(dir!=77 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx<s && by>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)) && by>(s*(p.rr()-1)))
			{
				while(dir!=75 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)) && by<s)
			{
				while(dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx<s)
			{
				while(dir!=77 && dir!=72 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && bx>(s*(p.rc()-1)))
			{
				while(dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && by<s)
			{
				while(dir!=77 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==0 && by>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72 && dir!=75)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else
			{
				while(dir!=77 && dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			if(t%2==1 && rx<s && ry<s)
			{
				while(dir!=77 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx<s && ry>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)) && ry>(s*(p.rr()-1)))
			{
				while(dir!=75 && dir!=72)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)) && ry<s)
			{
				while(dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx<s)
			{
				while(dir!=77 && dir!=72 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && rx>(s*(p.rc()-1)))
			{
				while(dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && ry<s)
			{
				while(dir!=77 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else if(t%2==1 && ry>(s*(p.rr()-1)))
			{
				while(dir!=77 && dir!=72 && dir!=75)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			else
			{
				while(dir!=77 && dir!=72 && dir!=75 && dir!=80)
				{
					linedir=getch();
					dir=linedir;
				}
			}
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
			al=0,per=0,chance=0;
			if(dir==77 && cr==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(4+bx,54+c+by-d)!=0 && getpixel(4+bx+s,54+c+by-d)!=0 && getpixel(4+bx+d,54+c+by-s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+bx+d,54+c+by-d,"1");
					}
					if(getpixel(4+bx,54+c+by+d)!=0 && getpixel(4+bx+s,54+c+by+d)!=0 && getpixel(4+bx+d,54+c+by+s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+bx+d,54+c+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(4+rx,54+c+ry-d)!=0 && getpixel(4+rx+s,54+c+ry-d)!=0 && getpixel(4+rx+d,54+c+ry-s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+rx+d,54+c+ry-d,"2");
					}
					if(getpixel(4+rx,54+c+ry+d)!=0 && getpixel(4+rx+s,54+c+ry+d)!=0 && getpixel(4+rx+d,54+c+ry+s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+rx+d,54+c+ry+d,"2");
					}
				}
			}
			else if(dir==75 && cl==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(4+bx,54+c+by-d)!=0 && getpixel(4+bx-s,54+c+by-d)!=0 && getpixel(4+bx-d,54+c+by-s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+bx-d,54+c+by-d,"1");
					}
					if(getpixel(4+bx,54+c+by+d)!=0 && getpixel(4+bx-s,54+c+by+d)!=0 && getpixel(4+bx-d,54+c+by+s)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+bx-d,54+c+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(4+rx,54+c+ry-d)!=0 && getpixel(4+rx-s,54+c+ry-d)!=0 && getpixel(4+rx-d,54+c+ry-s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+rx-d,54+c+ry-d,"2");
					}
					if(getpixel(4+rx,54+c+ry+d)!=0 && getpixel(4+rx-s,54+c+ry+d)!=0 && getpixel(4+rx-d,54+c+ry+s)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+rx-d,54+c+ry+d,"2");
					}
				}
			}
			else if(dir==72 && cu==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(4+bx-d,54+c+by)!=0 && getpixel(4+bx-d,54+c+by-s)!=0 && getpixel(4+bx-s,54+c+by-d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+bx-d,54+c+by-d,"1");
					}
					if(getpixel(4+bx+d,54+c+by)!=0 && getpixel(4+bx+d,54+c+by-s)!=0 && getpixel(4+bx+s,54+c+by-d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+bx+d,54+c+by-d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(4+rx-d,54+c+ry)!=0 && getpixel(4+rx-d,54+c+ry-s)!=0 && getpixel(4+rx-s,54+c+ry-d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+rx-d,54+c+ry-d,"2");
					}
					if(getpixel(4+rx+d,54+c+ry)!=0 && getpixel(4+rx+d,54+c+ry-s)!=0 && getpixel(4+rx+s,54+c+ry-d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+rx+d,54+c+ry-d,"2");
					}
				}
			}
			else if(dir==80 && cd==0)
			{
				if(t%2==0)
				{
					setcolor(YELLOW);
					if(getpixel(4+bx-d,54+c+by)!=0 && getpixel(4+bx-d,54+c+by+s)!=0 && getpixel(4+bx-s,54+c+by+d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+bx-d,54+c+by+d,"1");
					}
					if(getpixel(4+bx+d,54+c+by)!=0 && getpixel(4+bx+d,54+c+by+s)!=0 && getpixel(4+bx+s,54+c+by+d)!=0)
					{
						p1score++;
						chance=1;
						outtextxy(4+bx+d,54+c+by+d,"1");
					}
				}
				else
				{
					setcolor(RED);
					if(getpixel(4+rx-d,54+c+ry)!=0 && getpixel(4+rx-d,54+c+ry+s)!=0 && getpixel(4+rx-s,54+c+ry+d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+rx-d,54+c+ry+d,"2");
					}
					if(getpixel(4+rx+d,54+c+ry)!=0 && getpixel(4+rx+d,54+c+ry+s)!=0 && getpixel(4+rx+s,54+c+ry+d)!=0)
					{
						p2score++;
						chance=1;
						outtextxy(4+rx+d,54+c+ry+d,"2");
					}
				}
			}
			else
			{
				if(dir==77)
					setcolor(cr);
				else if(dir==75)
					setcolor(cl);
				else if(dir==72)
					setcolor(cu);
				else if(dir==80)
					setcolor(cd);
				if(t%2==0 && bx>=s && bx<=(s*(p.rc()-1)) && by>=s && by<=(s*(p.rr()-1)))
				{
					if(cu==0 || cd==0 || cl==0 || cr==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s && by<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s && by>(s*(p.rr()-1)))
				{
					if(cr==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)) && by>(s*(p.rr()-1)))
				{
					if(cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)) && by<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx<s)
				{
					if(cr==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && bx>(s*(p.rc()-1)))
				{
					if(cl==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && by<s)
				{
					if(cr==0 || cd==0 || cl==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==0 && by>(s*(p.rr()-1)))
				{
					if(cr==0 || cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				if(t%2==1 && rx>=s && rx<=(s*(p.rc()-1)) && ry>=s && ry<=(s*(p.rr()-1)))
				{
					if(cu==0 || cd==0 || cl==0 || cr==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s && ry<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s && ry>(s*(p.rr()-1)))
				{
					if(cr==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)) && ry>(s*(p.rr()-1)))
				{
					if(cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)) && ry<s)
				{
					if(cr==0 || cd==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx<s)
				{
					if(cr==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && rx>(s*(p.rc()-1)))
				{
					if(cl==0 || cd==0 || cu==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && ry<s)
				{
					if(cr==0 || cd==0 || cl==0)
						al=1;
					else
						per=1;
				}
				else if(t%2==1 && ry>(s*(p.rr()-1)))
				{
					if(cr==0 || cl==0 || cu==0)
						al=1;
					else
						per=1;
				}
			}
			if(dir==77 && t%2==0)
			{
				line(4+bx,54+c+by,4+bx+s,54+c+by);
				putpixel(4+bx+s,54+c+by,WHITE);
			}
			else if(dir==72 && t%2==0)
			{
				line(4+bx,54+c+by,4+bx,54+c+by-s);
				putpixel(4+bx,54+c+by-s,WHITE);
			}
			else if(dir==75 && t%2==0)
			{
				line(4+bx,54+c+by,4+bx-s,54+c+by);
				putpixel(4+bx-s,54+c+by,WHITE);
			}
			else if(dir==80 && t%2==0)
			{
				line(4+bx,54+c+by,4+bx,54+c+by+s);
				putpixel(4+bx,54+c+by+s,WHITE);
			}
			else if(dir==77 && t%2==1)
			{
				line(4+rx,54+c+ry,4+rx+s,54+c+ry);
				putpixel(4+rx+s,54+c+ry,WHITE);
			}
			else if(dir==72 && t%2==1)
			{
				line(4+rx,54+c+ry,4+rx,54+c+ry-s);
				putpixel(4+rx,54+c+ry-s,WHITE);
			}
			else if(dir==75 && t%2==1)
			{
				line(4+rx,54+c+ry,4+rx-s,54+c+ry);
				putpixel(4+rx-s,54+c+ry,WHITE);
			}
			else if(dir==80 && t%2==1)
			{
				line(4+rx,54+c+ry,4+rx,54+c+ry+s);
				putpixel(4+rx,54+c+ry+s,WHITE);
			}
			if(al==1 || per==1 || chance==1)
				t--;
			if(p1score+p2score==(p.rr()*p.rc()))
				break;
		}
		delay(1000);
		clear();
		if(p1score+p2score==(p.rr()*p.rc()))
		{
			if(p1score>p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r1();
				cout<<" on Winning!!";
				p.setwin("Player 1");
			}
			else if(p1score<p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r2();
				cout<<" on Winning!!";
				p.setwin("Player 2");
			}
			else if(p1score==p2score)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to both Players..."<<"\n\t\t\t\t\tThe Match is a draw!!!!";
				p.setwin("Draw");
			}
		}
		else
		{
			if(t%2==1)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r1();
				cout<<" on Winning!!";
				p.setwin("Player 1");
			}
			else if(t%2==0)
			{
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATUATIONS to ";
				p.r2();
				cout<<" on Winning!!";
				p.setwin("Player 2");
			}
		}
		delay(1000);
	}
	f.write((char *)&p,sizeof(p));
	f.close();
	k.close();
	clear();
	closegraph();
	}
	if(choice==3)
		exit(0);
	}while(choice!=3);
}