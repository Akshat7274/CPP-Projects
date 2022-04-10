#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
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
int region()
{
	cout<<"\n\n\n\n\n\n\n\n\nAre you ready to Play the Game?";
	cout<<"\n\nType 'Yes' to Start the Game.";
	cout<<"\nType 'No' to read Game Introduction again.";
	cout<<"\nType 'Back' to read the previous(Scoring System) screen again.";
	cout<<"\n\n\n";
	char Response[5];
	gets(Response);
	int gennum;
	if(strcmpi(Response,"YES")==0)
	{
		clear();
		cout<<"\n\n\t\tPlease select the theme you would like to play:- ";
		cout<<"\n\n\n\n1. Kanto(GEN 1)";
		cout<<"\n2. Johto(GEN 2)";
		cout<<"\n3. Hoenn(GEN 3)";
		cout<<"\n4. Sinnoh(GEN 4)";
		cout<<"\n5. Unova(GEN 5)";
		cout<<"\n6. Kalos(GEN 6)";
		cout<<"\n7. Alola(GEN 7)";
		cout<<"\n8. All Regions(GEN 1-7)";
		cout<<"\n\n\n\nEnter the Number corresponding to the Region you would like to play: ";
		cin>>gennum;
		while(gennum!=1 && gennum!=2 && gennum!=3 && gennum!=4 && gennum!=5 && gennum!=6 && gennum!=7 && gennum!=8)
		{
			cout<<"\n\nPlease Enter a valid number: ";
			cin>>gennum;
		}
	}
	else if(strcmpi(Response,"No")==0)
	{
		clear();
		cout<<"\n\n\t1. To guess the name of the Pokemon, you will enter an alphabet-";
		cout<<"\n\t\t-> If the alphabet is correct, it will be placed in the ";
		cout<<"\n\t\t   position(s) at which it appears.";
		cout<<"\n\t\t-> If the alphabet is incorrect, i.e., it doesn't appear ";
		cout<<"\n\t\t   anywhere in the name, then you lose a life.";
		cout<<"\n\n\t2. A total of 10 lives will be given in the game-";
		cout<<"\n\t\t-> For each lost life, a new line will appear on the screen.";
		cout<<"\n\t\t-> These lines will form a man being hanged.";
		cout<<"\n\t\t-> The game is considered over if the complete image of the man";
		cout<<"\n\t\t   is formed.";
		cout<<"\n\n\t3. The game is divided on the basis of regions-";
		cout<<"\n\t\t-> Hence, there are 7 themes of the game: Kanto, Johto, Hoenn, ";
		cout<<"\n\t\t   Sinnoh, Unova, Kalos, Alola.";
		cout<<"\n\n\t4. You can ask for hints if you feel stuck in the game-";
		cout<<"\n\t\t-> There are two hints for each Pokemon: Type & Stage No.";
		cout<<"\n\t\t-> Even for Pokemon which do not evolve, the Stage No. will be ";
		cout<<"\n\t\t   shown as '1'.";
		cout<<"\n\n\t5. You can Quit the game at any point you want-";
		cout<<"\n\t\t-> Just press '/' to Quit and Exit the game.";
		cout<<"\n\t\t-> The game will not be saved if you Quit the Game.";
		cout<<"\n\nType 'Yes' to Start the Game.";
		cout<<"\nType 'Next' to Read the Scoring System.";
		cout<<"\n\n";
		char response[5];
		gets(response);
		if(strcmpi(response,"Next")==0)
		{
			clear();
			cout<<"\n\n\t\t\tScoring System!!";
			line(175,30,325,30);
			line(325,30,325,50);
			line(325,50,175,50);
			line(175,50,175,30);
			cout<<"\n\n\t1. For each Pokemon correctly guessed, 10 points will be added to your";
			cout<<"\n\t   score";
			cout<<"\n\t2. For each Hint taken, 5 points will be deducted from your score";
			cout<<"\n\t3. For each incorrect alphabet, 1 point will be deducted from your score";
			cout<<"\n\n\n\nType 'Yes' to Start the Game.";
			cout<<"\n\n";
			char answer[4];
			gets(answer);
			if(strcmpi(answer,"Yes")==0)
			{
				clear();
				cout<<"\n\n\t\tPlease select the theme you would like to play:- ";
				cout<<"\n\n\n\n1. Kanto(GEN 1)";
				cout<<"\n2. Johto(GEN 2)";
				cout<<"\n3. Hoenn(GEN 3)";
				cout<<"\n4. Sinnoh(GEN 4)";
				cout<<"\n5. Unova(GEN 5)";
				cout<<"\n6. Kalos(GEN 6)";
				cout<<"\n7. Alola(GEN 7)";
				cout<<"\n8. All Regions(GEN 1-7)";
				cout<<"\n\n\n\nEnter the Number corresponding to the Region you would like to play: ";
				cin>>gennum;
				while(gennum!=1 && gennum!=2 && gennum!=3 && gennum!=4 && gennum!=5 && gennum!=6 && gennum!=7 && gennum!=8)
				{
					cout<<"\n\nPlease Enter a valid number: ";
					cin>>gennum;
				}
			}
		}
		else if(strcmpi(response,"Yes")==0)
		{
			clear();
			cout<<"\n\n\t\tPlease select the theme you would like to play:- ";
			cout<<"\n\n\n\n1. Kanto(GEN 1)";
			cout<<"\n2. Johto(GEN 2)";
			cout<<"\n3. Hoenn(GEN 3)";
			cout<<"\n4. Sinnoh(GEN 4)";
			cout<<"\n5. Unova(GEN 5)";
			cout<<"\n6. Kalos(GEN 6)";
			cout<<"\n7. Alola(GEN 7)";
			cout<<"\n8. All Regions(GEN 1-7)";
			cout<<"\n\n\n\nEnter the Number corresponding to the Region you would like to play: ";
			cin>>gennum;
			while(gennum!=1 && gennum!=2 && gennum!=3 && gennum!=4 && gennum!=5 && gennum!=6 && gennum!=7 && gennum!=8)
			{
				cout<<"\n\nPlease Enter a valid number: ";
				cin>>gennum;
			}
		}
	}
	else if(strcmpi(Response,"Back")==0)
	{
		clear();
		cout<<"\n\n\t\t\tScoring System!!";
		line(175,30,325,30);
		line(325,30,325,50);
		line(325,50,175,50);
		line(175,50,175,30);
		cout<<"\n\n\t1. For each Pokemon correctly guessed, 10 points will be added to your";
		cout<<"\n\t   score";
		cout<<"\n\t2. For each Hint taken, 5 points will be deducted from your score";
		cout<<"\n\t3. For each incorrect alphabet, 1 point will be deducted from your score";
		cout<<"\n\nType 'Yes' to Start the Game.";
		cout<<"\nType 'Back' to Read the Scoring System.";
		cout<<"\n\n";
		char response[5];
		gets(response);
		if(strcmpi(response,"Back")==0)
		{
			clear();
			cout<<"\n\n\t1. To guess the name of the Pokemon, you will enter an alphabet-";
			cout<<"\n\t\t-> If the alphabet is correct, it will be placed in the ";
			cout<<"\n\t\t   position(s) at which it appears.";
			cout<<"\n\t\t-> If the alphabet is incorrect, i.e., it doesn't appear ";
			cout<<"\n\t\t   anywhere in the name, then you lose a life.";
			cout<<"\n\n\t2. A total of 10 lives will be given in the game-";
			cout<<"\n\t\t-> For each lost life, a new line will appear on the screen.";
			cout<<"\n\t\t-> These lines will form a man being hanged.";
			cout<<"\n\t\t-> The game is considered over if the complete image of the man";
			cout<<"\n\t\t   is formed.";
			cout<<"\n\n\t3. The game is divided on the basis of regions-";
			cout<<"\n\t\t-> Hence, there are 7 themes of the game: Kanto, Johto, Hoenn, ";
			cout<<"\n\t\t   Sinnoh, Unova, Kalos, Alola.";
			cout<<"\n\n\t4. You can ask for hints if you feel stuck in the game-";
			cout<<"\n\t\t-> There are two hints for each Pokemon: Type & Stage No.";
			cout<<"\n\t\t-> Even for Pokemon which do not evolve, the Stage No. will be ";
			cout<<"\n\t\t   shown as '1'.";
			cout<<"\n\n\t5. You can Quit the game at any point you want-";
			cout<<"\n\t\t-> Just press '/' to Quit and Exit the game.";
			cout<<"\n\t\t-> The game will not be saved if you Quit the Game.";
			cout<<"\n\n\n\nType 'Yes' to Start the Game.";
			cout<<"\n\n";
			char answer[4];
			gets(answer);
			if(strcmpi(answer,"Yes")==0)
			{
				clear();
				cout<<"\n\n\t\tPlease select the theme you would like to play:- ";
				cout<<"\n\n\n\n1. Kanto(GEN 1)";
				cout<<"\n2. Johto(GEN 2)";
				cout<<"\n3. Hoenn(GEN 3)";
				cout<<"\n4. Sinnoh(GEN 4)";
				cout<<"\n5. Unova(GEN 5)";
				cout<<"\n6. Kalos(GEN 6)";
				cout<<"\n7. Alola(GEN 7)";
				cout<<"\n8. All Regions(GEN 1-7)";
				cout<<"\n\n\n\nEnter the Number corresponding to the Region you would like to play: ";
				cin>>gennum;
				while(gennum!=1 && gennum!=2 && gennum!=3 && gennum!=4 && gennum!=5 && gennum!=6 && gennum!=7 && gennum!=8)
				{
					cout<<"\n\nPlease Enter a valid number: ";
					cin>>gennum;
				}
			}
		}
		else if(strcmpi(response,"Yes")==0)
		{
			clear();
			cout<<"\n\n\t\tPlease select the theme you would like to play:- ";
			cout<<"\n\n\n\n1. Kanto(GEN 1)";
			cout<<"\n2. Johto(GEN 2)";
			cout<<"\n3. Hoenn(GEN 3)";
			cout<<"\n4. Sinnoh(GEN 4)";
			cout<<"\n5. Unova(GEN 5)";
			cout<<"\n6. Kalos(GEN 6)";
			cout<<"\n7. Alola(GEN 7)";
			cout<<"\n8. All Regions(GEN 1-7)";
			cout<<"\n\n\n\nEnter the Number corresponding to the Region you would like to play: ";
			cin>>gennum;
			while(gennum!=1 && gennum!=2 && gennum!=3 && gennum!=4 && gennum!=5 && gennum!=6 && gennum!=7 && gennum!=8)
			{
				cout<<"\n\nPlease Enter a valid number: ";
				cin>>gennum;
			}
		}
	}
	return gennum;
}
class player
{
	char name[20];
	int pid,hint,mistake,pokemon,score,gen;
	public:
	void setid(int i)
	{
		pid=i+1;
	}
	void nameinput()
	{
		cout<<"\n\n\n\n\t\t\t\tPlayer ID: "<<pid;
		cout<<"\n\t\t\t\tEnter Player Name: ";
		gets(name);
	}
	void setgen(int g)
	{
		gen=g;
	}
	void show(int rmax,int pname,int g,int p,int m,int h,int s)
	{
		int idl=length(pid)/2;
		int pnl=strlen(name)/2;
		int gl=length(gen)/2;
		int pl=length(pokemon)/2;
		int ml=length(mistake)/2;
		int hl=length(hint)/2;
		int sl=length(score)/2;
		cout<<"||"<<setw(rmax+idl+2)<<pid<<setw(rmax-idl+3)<<"||"<<setw(pname+pnl+1)<<name<<setw(pname-pnl+3)<<"||"<<setw(g+gl+2)<<gen<<setw(g-gl+3)<<"||"<<setw(p+pl+2)<<pokemon<<setw(p-pl+3)<<"||"<<setw(m+ml+2)<<mistake<<setw(m-ml+2)<<"||"<<setw(h+hl+2)<<hint<<setw(h-hl+3)<<"||"<<setw(s+sl+2)<<score<<setw(s-sl+3)<<"||";
	}
	char * rn()
	{
		return name;
	}
	int rid()
	{
		return pid;
	}
	int rp()
	{
		return pokemon;
	}
	int rh()
	{
		return hint;
	}
	int rm()
	{
		return mistake;
	}
	int rs()
	{
		return score;
	}
	int rg()
	{
		return gen;
	}
	void modn(char n[20])
	{
		strcpy(name,n);
	}
	void modp(int p)
	{
		pokemon=p;
		score=(pokemon*10)-(hint*5)-mistake;
	}
	void modm(int m)
	{
		mistake=m;
		score=(pokemon*10)-(hint*5)-mistake;
	}
	void modh(int h)
	{
		hint=h;
		score=(pokemon*10)-(hint*5)-mistake;
	}
}p;
void man(int error)
{
	if(error==1)
	{
		line(150,460,250,460);
	}
	else if(error==2)
	{
		line(150,460,250,460);
		line(200,460,200,225);
	}
	else if(error==3)
	{
		line(150,460,250,460);
		line(200,460,200,225);
		line(200,225,350,225);
	}
	else if(error==4)
	{
		line(150,460,250,460);
		line(200,460,200,225);
		line(200,225,350,225);
		line(350,225,350,250);
	}
	else if(error==5)
	{
		line(150,460,250,460);
		line(200,460,200,225);
		line(200,225,350,225);
		line(350,225,350,250);
		circle(350,270,20);
	}
	else if(error==6)
	{
		line(150,460,250,460);
		line(200,460,200,225);
		line(200,225,350,225);
		line(350,225,350,250);
		circle(350,270,20);
		line(350,290,350,340);
	}
	else if(error==7)
	{
		line(150,460,250,460);
		line(200,460,200,225);
		line(200,225,350,225);
		line(350,225,350,250);
		circle(350,270,20);
		line(350,290,350,340);
		line(350,340,330,370);
	}
	else if(error==8)
	{
		line(150,460,250,460);
		line(200,460,200,225);
		line(200,225,350,225);
		line(350,225,350,250);
		circle(350,270,20);
		line(350,290,350,340);
		line(350,340,330,370);
		line(350,340,370,370);
	}
	else if(error==9)
	{
		line(150,460,250,460);
		line(200,460,200,225);
		line(200,225,350,225);
		line(350,225,350,250);
		circle(350,270,20);
		line(350,290,350,340);
		line(350,340,330,370);
		line(350,340,370,370);
		line(350,300,330,330);
	}
	else if(error==10)
	{
		line(150,460,250,460);
		line(200,460,200,225);
		line(200,225,350,225);
		line(350,225,350,250);
		circle(350,270,20);
		line(350,290,350,340);
		line(350,340,330,370);
		line(350,340,370,370);
		line(350,300,330,330);
		line(350,300,370,330);
		delay(1500);
	}
}
void display(char name[],char poke[],char type[],char stage[],int &result,int &pcount,int &hcount,int &mcount)
{
	clear();
	char alist[27],b='A';
	for(int i=0;i<26;i++)
	{
		alist[i]=b;
		b++;
	}
	alist[26]='\0';
	int life=0,ecount=0,lleft=10;
	int p=strlen(name);
	char a;
	char clist[14]= {'1','2','3','4','5','6','7','8','9','0','-',':'};
	int q=39;
	char r=q;
	clist[12]=r;
	clist[13]='\0';
	man(life);
	for(int j=0;j<26;j++)
	cout<<alist[j]<<" ";
	for(int k=0;k<13;k++)
	cout<<clist[k]<<" ";
	cout<<"\n\nEnter '?' if you want a hint";
	cout<<"\t\tEnter '~' to input special characters";
	cout<<"\nTotal lives left= "<<lleft;
	cout<<"\t\t\tScore= "<<(pcount*10)-(hcount*5)-mcount;
	cout<<"\n\n"<<poke;
	cout<<"\n\nEnter the alphabet: ";
	while(life<=10)
	{
		cin>>a;
		char x[6];
		if(a=='?')
		{
			cout<<"Enter the name of the hint(TYPE or STAGE) you want to know: ";
			gets(x);
			while(strcmpi("TYPE",x)!=0 && strcmpi("STAGE",x)!=0)
			{
				clear();
				man(life);
				for(int j=0;j<26;j++)
				cout<<alist[j]<<" ";
				for(int k=0;k<13;k++)
				cout<<clist[k]<<" ";
				cout<<"\n\nEnter '?' if you want a hint";
				cout<<"\t\tEnter '~' to input special characters";
				cout<<"\nTotal lives left= "<<lleft;
				cout<<"\t\t\tScore= "<<(pcount*10)-(hcount*5)-mcount;
				cout<<"\n\n"<<poke;
				cout<<"\n\nEnter the alphabet: ";
				cout<<"\nPlease enter a valid hint name.";
				cout<<"\nEnter the name of the hint(TYPE or STAGE) you want to know: ";
				gets(x);
			}
			if(strcmpi("TYPE",x)==0)
			{
				clear();
				man(life);
				for(int j=0;j<26;j++)
				cout<<alist[j]<<" ";
				for(int k=0;k<13;k++)
				cout<<clist[k]<<" ";
				cout<<"\n\nEnter '?' if you want a hint";
				cout<<"\t\tEnter '~' to input special characters";
				cout<<"\nTotal lives left= "<<lleft;
				cout<<"\t\t\tScore= "<<(pcount*10)-(hcount*5)-mcount;
				cout<<"\n\n"<<poke;
				cout<<"\n\nEnter the alphabet: ";
				cout<<"\n\n"<<type<<"\n\n";
				hcount=hcount+1;
			}
			if(strcmpi("STAGE",x)==0)
			{
				clear();
				man(life);
				for(int j=0;j<26;j++)
				cout<<alist[j]<<" ";
				for(int k=0;k<13;k++)
				cout<<clist[k]<<" ";
				cout<<"\n\nEnter '?' if you want a hint";
				cout<<"\t\tEnter '~' to input special characters";
				cout<<"\nTotal lives left= "<<lleft;
				cout<<"\t\t\tScore= "<<(pcount*10)-(hcount*5)-mcount;
				cout<<"\n\n"<<poke;
				cout<<"\n\nEnter the alphabet: ";
				cout<<"\n\n"<<stage<<"\n\n";
				hcount=hcount+1;
			}
		}
		if(a=='/')
		{
			result=1;
			break;
		}
		if(a=='~')
		{
			int p=11,q=12,r;
			char x=p,y=q;
			cout<<"\n11-"<<x<<"\t\t12-"<<y;
			cout<<"\nEnter the ASCII code of the character you want: ";
			cin>>r;
			while(r!=p && r!=q)
			{
				clear();
				man(life);
				for(int j=0;j<26;j++)
				cout<<alist[j]<<" ";
				for(int k=0;k<13;k++)
				cout<<clist[k]<<" ";
				cout<<"\n\nEnter '?' if you want a hint";
				cout<<"\t\tEnter '~' to input special characters";
				cout<<"\nTotal lives left= "<<lleft;
				cout<<"\t\t\tScore= "<<(pcount*10)-(hcount*5)-mcount;
				cout<<"\n\n"<<poke;
				cout<<"\n\nEnter the alphabet: ";
				cout<<"\n11-"<<x<<"\t\t12-"<<y;
				cout<<"\nPlease enter one of the given values: ";
				cin>>r;
			}
			if(r==p)
			a=x;
			else if(r==q)
			a=y;
		}
		if(islower(a))
		a=toupper(a);
		for(int l=0;l<26;l++)
		{
			if(a!='?' && alist[l]==a)
			alist[l]='#';
		}
		for(int m=0;m<13;m++)
		{
			if(a!='?' && clist[m]==a)
			clist[m]='#';
		}
		ecount=0;
		for(int i=0;name[i]!='\0';i++)
		{
			if(name[i]==a)
			{
				poke[2*i]=a;
				clear();
				man(life);
				for(int m=0;m<26;m++)
				cout<<alist[m]<<" ";
				for(int h=0;h<13;h++)
				cout<<clist[h]<<" ";
				cout<<"\n\nEnter '?' if you want a hint";
				cout<<"\t\tEnter '~' to input special characters";
				cout<<"\nTotal lives left= "<<lleft;
				cout<<"\t\t\tScore= "<<(pcount*10)-(hcount*5)-mcount;
				cout<<"\n\n"<<poke;
				cout<<"\n\nEnter the alphabet: ";
			}
			else if(name[i]!=a && a!='?')
			ecount++;
		}
		if(ecount==p)
		{
			lleft--;
			mcount=mcount+1;
			clear();
			man(life);
			for(int m=0;m<26;m++)
			cout<<alist[m]<<" ";
			for(int h=0;h<13;h++)
			cout<<clist[h]<<" ";
			cout<<"\n\nEnter '?' if you want a hint";
			cout<<"\t\tEnter '~' to input special characters";
			cout<<"\nTotal lives left= "<<lleft;
			cout<<"\t\t\tScore= "<<(pcount*10)-(hcount*5)-mcount;
			cout<<"\n\n"<<poke;
			cout<<"\n\nEnter the alphabet: ";
			life++;
			man(life);
		}
		if(life==10)
		{
			clear();
			cout<<"\n\n\n\n\n\t\t\t\tThe Pokemon was: "<<name;
			delay(2000);
			result=1;
			break;
		}
		char y[12];
		for(int j=0;j<(2*p)-1;j+=2)
		y[j/2]=poke[j];
		y[p]='\0';
		if(strcmpi(y,name)==0)
		{
			pcount=pcount+1;
			clear();
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tYou guessed the name right. It was "<<y<<"!!!!!";
			delay(1500);
			clear();
			result=0;
			break;
		}
	}
}

void kanto(int num,char name[],char poke[],char type[],char stage[],int &res,int &pokecount,int &hint,int &mistake,int go=0)
{
	if(num==1)
	{
		name="BULBASAUR";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/POISON";
		stage="1st Stage";
	}
	else if(num==2)
	{
		name="IVYSAUR";
		poke="_ _ _ _ _ _ _";
		type="GRASS/POISON";
		stage="2nd Stage";
	}
	else if(num==3)
	{
		name="VENUSAUR";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/POISON";
		stage="3rd Stage";
	}
	else if(num==4)
	{
		name="CHARMANDER";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==5)
	{
		name="CHARMALEON";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==6)
	{
		name="CHARIZARD";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIRE/FLYING";
		stage="3rd Stage";
	}
	else if(num==7)
	{
		name="SQUIRTLE";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==8)
	{
		name="WARTORTLE";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==9)
	{
		name="BLASTOISE";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="3rd Stage";
	}
	else if(num==10)
	{
		name="CATERPIE";
		poke="_ _ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==11)
	{
		name="METAPOD";
		poke="_ _ _ _ _ _ _";
		type="BUG";
		stage="2nd Stage";
	}
	else if(num==12)
	{
		name="BUTTERFREE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="3rd Stage";
	}
	else if(num==13)
	{
		name="WEEDLE";
		poke="_ _ _ _ _ _";
		type="BUG/POISON";
		stage="1st Stage";
	}
	else if(num==14)
	{
		name="KAKUNA";
		poke="_ _ _ _ _ _";
		type="BUG/POSION";
		stage="2nd Stage";
	}
	else if(num==15)
	{
		name="BEEDRILL";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/POISON";
		stage="3rd Stage";
	}
	else if(num==16)
	{
		name="PIDGEY";
		poke="_ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==17)
	{
		name="PIDGEOTTO";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==18)
	{
		name="PIDGEOT";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="3rd Stage";
	}
	else if(num==19)
	{
		name="RATTATA";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==20)
	{
		name="RATICATE";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==21)
	{
		name="SPEAROW";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==22)
	{
		name="FEAROW";
		poke="_ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==23)
	{
		name="EKANS";
		poke="_ _ _ _ _";
		type="POISON";
		stage="1st Stage";
	}
	else if(num==24)
	{
		name="ARBOK";
		poke="_ _ _ _ _";
		type="POISON";
		stage="2nd Stage";
	}
	else if(num==25)
	{
		name="PIKACHU";
		poke="_ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==26)
	{
		name="RAICHU";
		poke="_ _ _ _ _ _";
		type="ELECTRIC";
		stage="3rd Stage";
	}
	else if(num==27)
	{
		name="SANDSHREW";
		poke="_ _ _ _ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==28)
	{
		name="SANDSLASH";
		poke="_ _ _ _ _ _ _ _ _";
		type="GROUND";
		stage="2nd Stage";
	}
	else if(num==29)
	{
		int r=12;
		char c=r;
		char temp[12]="NIDORAN";
		temp[7]=c;
		temp[8]='\0';
		name=temp;
		poke="_ _ _ _ _ _ _ _";
		type="POISON";
		stage="1st Stage";
	}
	else if(num==30)
	{
		name="NIDORINA";
		poke="_ _ _ _ _ _ _ _";
		type="POISON";
		stage="2nd Stage";
	}
	else if(num==31)
	{
		name="NIDOQUEEN";
		poke="_ _ _ _ _ _ _ _ _";
		type="POISON/GROUND";
		stage="3rd Stage";
	}
	else if(num==32)
	{
		int r=11;
		char c=r;
		char temp[12]="NIDORAN";
		temp[7]=c;
		temp[8]='\0';
		name=temp;
		poke="_ _ _ _ _ _ _ _";
		type="POISON";
		stage="1st Stage";
	}
	else if(num==33)
	{
		name="NIDORINO";
		poke="_ _ _ _ _ _ _ _";
		type="POSION";
		stage="2nd Stage";
	}
	else if(num==34)
	{
		name="NIDOKING";
		poke="_ _ _ _ _ _ _ _";
		type="POISON/GROUND";
		stage="3rd Stage";
	}
	else if(num==35)
	{
		name="CLEFAIRY";
		poke="_ _ _ _ _ _ _ _";
		type="FAIRY";
		stage="2nd Stage";
	}
	else if(num==36)
	{
		name="CLEFABLE";
		poke="_ _ _ _ _ _ _ _";
		type="FAIRY";
		stage="3rd Stage";
	}
	else if(num==37)
	{
		name="VULPIX";
		poke="_ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==38)
	{
		name="NINETAILS";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==39)
	{
		name="JIGGLYPUFF";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="NORMAL/FAIRY";
		stage="2nd Stage";
	}
	else if(num==40)
	{
		name="WIGGLYTUFF";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="NORMAL/FAIRY";
		stage="3rd Stage";
	}
	else if(num==41)
	{
		name="ZUBAT";
		poke="_ _ _ _ _";
		type="POISON/FLYING";
		stage="1st Stage";
	}
	else if(num==42)
	{
		name="GOLBAT";
		poke="_ _ _ _ _ _";
		type="POISON/FLYING";
		stage="2nd Stage";
	}
	else if(num==43)
	{
		name="ODDISH";
		poke="_ _ _ _ _ _";
		type="GRASS/POISON";
		stage="1st Stage";
	}
	else if(num==44)
	{
		name="GLOOM";
		poke="_ _ _ _ _";
		type="GRASS/POISON";
		stage="2nd Stage";
	}
	else if(num==45)
	{
		name="VILEPLUME";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/POISON";
		stage="3rd Stage";
	}
	else if(num==46)
	{
		name="PARAS";
		poke="_ _ _ _ _";
		type="BUG/GRASS";
		stage="1st Stage";
	}
	else if(num==47)
	{
		name="PARASECT";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/GRASS";
		stage="2nd Stage";
	}
	else if(num==48)
	{
		name="VENONAT";
		poke="_ _ _ _ _ _ _";
		type="BUG/POISON";
		stage="1st Stage";
	}
	else if(num==49)
	{
		name="VENOMOTH";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/POISON";
		stage="2nd Stage";
	}
	else if(num==50)
	{
		name="DIGLETT";
		poke="_ _ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==51)
	{
		name="DUGTRIO";
		poke="_ _ _ _ _ _ _";
		type="GROUND";
		stage="2nd Stage";
	}
	else if(num==52)
	{
		name="MEOWTH";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==53)
	{
		name="PERSIAN";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==54)
	{
		name="PSYDUCK";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==55)
	{
		name="GOLDUCK";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==56)
	{
		name="MANKEY";
		poke="_ _ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==57)
	{
		name="PRIMEAPE";
		poke="_ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==58)
	{
		name="GROWLITHE";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==59)
	{
		name="ARCANINE";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==60)
	{
		name="POLIWAG";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==61)
	{
		name="POLIWHIRL";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==62)
	{
		name="POLIWRATH";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/FIGHTING";
		stage="3rd Stage";
	}
	if(num==63)
	{
		name="ABRA";
		poke="_ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==64)
	{
		name="KADABRA";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==65)
	{
		name="ALAKAZAM";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="3rd Stage";
	}
	else if(num==66)
	{
		name="MACHOP";
		poke="_ _ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==67)
	{
		name="MACHOKE";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==68)
	{
		name="MACHAMP";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING";
		stage="3rd Stage";
	}
	else if(num==69)
	{
		name="BELLSPROUT";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GRASS/POSION";
		stage="1st Stage";
	}
	else if(num==70)
	{
		name="WEEPINBELL";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GRASS/POISON";
		stage="2nd Stage";
	}
	else if(num==71)
	{
		name="VICTREEBEL";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GRASS/POSION";
		stage="3rd Stage";
	}
	else if(num==72)
	{
		name="TENTACOOL";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/POISON";
		stage="1st Stage";
	}
	else if(num==73)
	{
		name="TENTACRUEL";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="WATER/POISON";
		stage="2nd Stage";
	}
	else if(num==74)
	{
		name="GEODUDE";
		poke="_ _ _ _ _ _ _";
		type="ROCK/GROUND";
		stage="1st Stage";
	}
	else if(num==75)
	{
		name="GRAVELER";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK/GROUND";
		stage="2nd Stage";
	}
	else if(num==76)
	{
		name="GOLEM";
		poke="_ _ _ _ _";
		type="ROCK/GROUND";
		stage="3rd Stage";
	}
	else if(num==77)
	{
		name="PONYTA";
		poke="_ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==78)
	{
		name="RAPIDASH";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==79)
	{
		name="SLOWPOKE";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==80)
	{
		name="SLOWBRO";
		poke="_ _ _ _ _ _ _";
		type="WATER/PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==81)
	{
		name="MAGNEMITE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC/STEEL";
		stage="1st Stage";
	}
	else if(num==82)
	{
		name="MAGNETON";
		poke="_ _ _ _ _ _ _ _";
		type="ELECTRIC/STEEL";
		stage="2nd Stage";
	}
	else if(num==83)
	{
		name="FARFETCH'D";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==84)
	{
		name="DODUO";
		poke="_ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==85)
	{
		name="DODRIO";
		poke="_ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==86)
	{
		name="SEEL";
		poke="_ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==87)
	{
		name="DEWGONG";
		poke="_ _ _ _ _ _ _";
		type="WATER/ICE";
		stage="2nd Stage";
	}
	else if(num==88)
	{
		name="GRIMER";
		poke="_ _ _ _ _ _";
		type="POISON";
		stage="1st Stage";
	}
	else if(num==89)
	{
		name="MUK";
		poke="_ _ _";
		type="POISON";
		stage="2nd Stage";
	}
	else if(num==90)
	{
		name="CLOYSTER";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==91)
	{
		name="SHELLDER";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/ICE";
		stage="2nd Stage";
	}
	else if(num==92)
	{
		name="GASTLY";
		poke="_ _ _ _ _ _";
		type="GHOST/POISON";
		stage="1st Stage";
	}
	else if(num==93)
	{
		name="HAUNTER";
		poke="_ _ _ _ _ _ _";
		type="GHOST/POISON";
		stage="2nd Stage";
	}
	else if(num==94)
	{
		name="GENGAR";
		poke="_ _ _ _ _ _";
		type="GHOST/POISON";
		stage="3rd Stage";
	}
	else if(num==95)
	{
		name="ONIX";
		poke="_ _ _ _";
		type="ROCK/GROUND";
		stage="1st Stage";
	}
	else if(num==96)
	{
		name="DROWZEE";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==97)
	{
		name="HYPNO";
		poke="_ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==98)
	{
		name="KRABBY";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==99)
	{
		name="KINGLER";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==100)
	{
		name="VOLTORB";
		poke="_ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==101)
	{
		name="ELECTRODE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==102)
	{
		name="EXEGGCUTE";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==103)
	{
		name="EXEGGUTOR";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==104)
	{
		name="CUBONE";
		poke="_ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==105)
	{
		name="MAROWAK";
		poke="_ _ _ _ _ _ _";
		type="GROUND";
		stage="2nd Stage";
	}
	else if(num==106)
	{
		name="HITMONLEE";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==107)
	{
		name="HITMONCHAN";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==108)
	{
		name="LICKITUNG";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==109)
	{
		name="KOFFING";
		poke="_ _ _ _ _ _ _";
		type="POISON";
		stage="1st Stage";
	}
	else if(num==110)
	{
		name="WEEZING";
		poke="_ _ _ _ _ _ _";
		type="POISON";
		stage="2nd Stage";
	}
	else if(num==111)
	{
		name="RHYHORN";
		poke="_ _ _ _ _ _ _";
		type="GROUND/ROCK";
		stage="1st Stage";
	}
	else if(num==112)
	{
		name="RHYDON";
		poke="_ _ _ _ _ _";
		type="GROUND/ROCK";
		stage="2nd Stage";
	}
	else if(num==113)
	{
		name="CHANSEY";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==114)
	{
		name="TANGELA";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==115)
	{
		name="KANGASKHAN";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==116)
	{
		name="HORSEA";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==117)
	{
		name="SEADRA";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==118)
	{
		name="GOLDEEN";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==119)
	{
		name="SEAKING";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==120)
	{
		name="STARYU";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==121)
	{
		name="STARMIE";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==122)
	{
		name="MR.MIME";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC/FAIRY";
		stage="2nd Stage";
	}
	else if(num==123)
	{
		name="SCYTHER";
		poke="_ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="1st Stage";
	}
	else if(num==124)
	{
		name="JYNX";
		poke="_ _ _ _";
		type="ICE/PSYCHIC";
		stage="2nd Stage";
	}
	if(num==125)
	{
		name="ELECTABUZZ";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==126)
	{
		name="MAGMAR";
		poke="_ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==127)
	{
		name="PINSIR";
		poke="_ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==128)
	{
		name="TAUROS";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==129)
	{
		name="MAGIKARP";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==130)
	{
		name="GYARADOS";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/FLYING";
		stage="2nd Stage";
	}
	else if(num==131)
	{
		name="LAPRAS";
		poke="_ _ _ _ _ _";
		type="WATER/ICE";
		stage="1st Stage";
	}
	else if(num==132)
	{
		name="DITTO";
		poke="_ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==133)
	{
		name="EEVEE";
		poke="_ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==134)
	{
		name="VAPOREON";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==135)
	{
		name="JOLTEON";
		poke="_ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==136)
	{
		name="FLAREON";
		poke="_ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==137)
	{
		name="PORYGON";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==138)
	{
		name="OMANYTE";
		poke="_ _ _ _ _ _ _";
		type="ROCK/WATER";
		stage="1st Stage";
	}
	else if(num==139)
	{
		name="OMASTAR";
		poke="_ _ _ _ _ _ _";
		type="ROCK/WATER";
		stage="2nd Stage";
	}
	else if(num==140)
	{
		name="KABUTO";
		poke="_ _ _ _ _ _";
		type="ROCK/WATER";
		stage="1st Stage";
	}
	else if(num==141)
	{
		name="KABUTOPS";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK/WATER";
		stage="2nd Stage";
	}
	else if(num==142)
	{
		name="AERODACTYL";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="ROCK/FLYING";
		stage="1st Stage";
	}
	else if(num==143)
	{
		name="SNORLAX";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==144)
	{
		name="ARTICUNO";
		poke="_ _ _ _ _ _ _ _";
		type="ICE/FLYING";
		stage="1st Stage";
	}
	else if(num==145)
	{
		name="ZAPDOS";
		poke="_ _ _ _ _ _";
		type="ELECTRIC/FLYING";
		stage="1st Stage";
	}
	else if(num==146)
	{
		name="MOLTRES";
		poke="_ _ _ _ _ _ _";
		type="FIRE/FLYING";
		stage="1st Stage";
	}
	else if(num==147)
	{
		name="DRATINI";
		poke="_ _ _ _ _ _ _";
		type="DRAGON";
		stage="1st Stage";
	}
	else if(num==148)
	{
		name="DRAGONAIR";
		poke="_ _ _ _ _ _ _ _ _";
		type="DRAGON";
		stage="2nd Stage";
	}
	else if(num==149)
	{
		name="DRAGONITE";
		poke="_ _ _ _ _ _ _ _ _";
		type="DRAGON/FLYING";
		stage="3rd Stage";
	}
	else if(num==150)
	{
		name="MEWTWO";
		poke="_ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==151)
	{
		name="MEW";
		poke="_ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	display(name,poke,type,stage,res,pokecount,hint,mistake);
	clear();
	if(go==0)
	{
		if(pokecount<151)
		{
			cout<<"\n\n\t\t\t\t\tGAME OVER!";
			cout<<"\n\t\t\t\tBetter Luck Next Time!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
		else if(pokecount==151)
		{
			cout<<"\n\n\t\t\t\t\tCONGRATULATIONS!!";
			cout<<"\n\t\t\t\tYou have successfully completed the theme by guessing all "<<pokecount<<" Pokemon!!!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
	}
}
void johto(int num,char name[],char poke[],char type[],char stage[],int &res,int &pokecount,int &hint,int &mistake,int go=0)
{
	if(num==1)
	{
		name="CHIKORITA";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==2)
	{
		name="BAYLEEF";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==3)
	{
		name="MEGANIUM";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="3rd Stage";
	}
	else if(num==4)
	{
		name="CYNDAQUIL";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==5)
	{
		name="QUILAVA";
		poke="_ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==6)
	{
		name="TYPHLOSION";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIRE";
		stage="3rd Stage";
	}
	else if(num==7)
	{
		name="TOTODILE";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==8)
	{
		name="CROCONAW";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==9)
	{
		name="FERALIGATR";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="3rd Stage";
	}
	else if(num==10)
	{
		name="SENTRET";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==11)
	{
		name="FURRET";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==12)
	{
		name="HOOTHOOT";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==13)
	{
		name="NOCTOWL";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==14)
	{
		name="LEDYBA";
		poke="_ _ _ _ _ _";
		type="BUG/FLYING";
		stage="1st Stage";
	}
	else if(num==15)
	{
		name="LEDIAN";
		poke="_ _ _ _ _ _";
		type="BUG/FLYING";
		stage="2nd Stage";
	}
	else if(num==16)
	{
		name="SPINARAK";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/POISON";
		stage="1st Stage";
	}
	else if(num==17)
	{
		name="ARIADOS";
		poke="_ _ _ _ _ _ _";
		type="BUG/POISON";
		stage="2nd Stage";
	}
	else if(num==18)
	{
		name="CROBAT";
		poke="_ _ _ _ _ _";
		type="POISON/FLYING";
		stage="3rd Stage";
	}
	else if(num==19)
	{
		name="CHINCHOU";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/ELECTRIC";
		stage="1st Stage";
	}
	else if(num==20)
	{
		name="LANTURN";
		poke="_ _ _ _ _ _ _";
		type="WATER/ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==21)
	{
		name="PICHU";
		poke="_ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==22)
	{
		name="CLEFFA";
		poke="_ _ _ _ _ _";
		type="FAIRY";
		stage="1st Stage";
	}
	else if(num==23)
	{
		name="IGGLYBUFF";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL/FAIRY";
		stage="1st Stage";
	}
	else if(num==24)
	{
		name="TOGEPI";
		poke="_ _ _ _ _ _";
		type="FAIRY";
		stage="1st Stage";
	}
	else if(num==25)
	{
		name="TOGETIC";
		poke="_ _ _ _ _ _ _";
		type="FAIRY/FLYING";
		stage="2nd Stage";
	}
	else if(num==26)
	{
		name="NATU";
		poke="_ _ _ _";
		type="PSYCHIC/FLYING";
		stage="1st Stage";
	}
	else if(num==27)
	{
		name="XATU";
		poke="_ _ _ _";
		type="PSYCHIC/FLYING";
		stage="2nd Stage";
	}
	else if(num==28)
	{
		name="MAREEP";
		poke="_ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==29)
	{
		name="FLAAFFY";
		poke="_ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==30)
	{
		name="AMPHAROS";
		poke="_ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="3rd Stage";
	}
	else if(num==31)
	{
		name="BELLOSSOM";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="3rd Stage";
	}
	else if(num==32)
	{
		name="MARILL";
		poke="_ _ _ _ _ _";
		type="WATER/FAIRY";
		stage="2nd Stage";
	}
	else if(num==33)
	{
		name="AZUMARILL";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/FAIRY";
		stage="3rd Stage";
	}
	else if(num==34)
	{
		name="SUDOWOODO";
		poke="_ _ _ _ _ _ _ _ _";
		type="ROCK";
		stage="2nd Stage";
	}
	else if(num==35)
	{
		name="POLITOED";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="3rd Stage";
	}
	else if(num==36)
	{
		name="HOPPIP";
		poke="_ _ _ _ _ _";
		type="GRASS/FLYING";
		stage="1st Stage";
	}
	else if(num==37)
	{
		name="SKIPLOOM";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/FLYING";
		stage="2nd Stage";
	}
	else if(num==38)
	{
		name="JUMPLUFF";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/FLYING";
		stage="3rd Stage";
	}
	else if(num==39)
	{
		name="AIPOM";
		poke="_ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==40)
	{
		name="SUNKERN";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==41)
	{
		name="SUNFLORA";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==42)
	{
		name="YANMA";
		poke="_ _ _ _ _";
		type="BUG/FLYING";
		stage="1st Stage";
	}
	else if(num==43)
	{
		name="WOOPER";
		poke="_ _ _ _ _ _";
		type="WATER/GROUND";
		stage="1st Stage";
	}
	else if(num==44)
	{
		name="QUAGSIRE";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/GROUND";
		stage="2nd Stage";
	}
	else if(num==45)
	{
		name="ESPEON";
		poke="_ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==46)
	{
		name="UMBREON";
		poke="_ _ _ _ _ _ _";
		type="DARK";
		stage="2nd Stage";
	}
	else if(num==47)
	{
		name="MURKROW";
		poke="_ _ _ _ _ _ _";
		type="DARK/FLYING";
		stage="1st Stage";
	}
	else if(num==48)
	{
		name="SLOWKING";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==49)
	{
		name="MISDREAVUS";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GHOST";
		stage="1st Stage";
	}
	else if(num==50)
	{
		name="UNOWN";
		poke="_ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==51)
	{
		name="WOBUFFET";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==52)
	{
		name="GIRAFARIG";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==53)
	{
		name="PINECO";
		poke="_ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==54)
	{
		name="FORRETRESS";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG/STEEL";
		stage="2nd Stage";
	}
	else if(num==55)
	{
		name="DUNSPARCE";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==56)
	{
		name="GLIGAR";
		poke="_ _ _ _ _ _";
		type="GROUND/FLYING";
		stage="1st Stage";
	}
	else if(num==57)
	{
		name="STEELIX";
		poke="_ _ _ _ _ _ _";
		type="STEEL/GROUND";
		stage="2nd Stage";
	}
	else if(num==58)
	{
		name="SNUBBULL";
		poke="_ _ _ _ _ _ _ _";
		type="FAIRY";
		stage="1st Stage";
	}
	else if(num==59)
	{
		name="GRANBULL";
		poke="_ _ _ _ _ _ _ _";
		type="FAIRY";
		stage="2nd Stage";
	}
	else if(num==60)
	{
		name="QWILFISH";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/POISON";
		stage="1st Stage";
	}
	else if(num==61)
	{
		name="SCIZOR";
		poke="_ _ _ _ _ _";
		type="BUG/STEEL";
		stage="2nd Stage";
	}
	else if(num==62)
	{
		name="SHUCKLE";
		poke="_ _ _ _ _ _ _";
		type="BUG/ROCK";
		stage="1st Stage";
	}
	if(num==63)
	{
		name="HERACROSS";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG/FIGHTING";
		stage="1st Stage";
	}
	else if(num==64)
	{
		name="SNEASEL";
		poke="_ _ _ _ _ _ _";
		type="DARK/ICE";
		stage="1st Stage";
	}
	else if(num==65)
	{
		name="TEDDIURSA";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==66)
	{
		name="URSARING";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==67)
	{
		name="SLUGMA";
		poke="_ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==68)
	{
		name="MAGCARGO";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE/ROCK";
		stage="2nd Stage";
	}
	else if(num==69)
	{
		name="SWINUB";
		poke="_ _ _ _ _ _";
		type="ICE/GROUND";
		stage="1st Stage";
	}
	else if(num==70)
	{
		name="PILOSWINE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ICE/GROUND";
		stage="2nd Stage";
	}
	else if(num==71)
	{
		name="CORSOLA";
		poke="_ _ _ _ _ _ _";
		type="WATER/ROCK";
		stage="1st Stage";
	}
	else if(num==72)
	{
		name="REMORAID";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==73)
	{
		name="OCTILLERY";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==74)
	{
		name="DELIBIRD";
		poke="_ _ _ _ _ _ _ _";
		type="ICE/FLYING";
		stage="1st Stage";
	}
	else if(num==75)
	{
		name="MANTINE";
		poke="_ _ _ _ _ _ _";
		type="WATER/FLYING";
		stage="2nd Stage";
	}
	else if(num==76)
	{
		name="SKARMORY";
		poke="_ _ _ _ _ _ _ _";
		type="STEEL/FLYING";
		stage="1st Stage";
	}
	else if(num==77)
	{
		name="HOUNDOUR";
		poke="_ _ _ _ _ _ _ _";
		type="DARK/FIRE";
		stage="1st Stage";
	}
	else if(num==78)
	{
		name="HOUNDOOM";
		poke="_ _ _ _ _ _ _ _";
		type="DARK/FIRE";
		stage="2nd Stage";
	}
	else if(num==79)
	{
		name="KINGDRA";
		poke="_ _ _ _ _ _ _";
		type="WATER/DRAGON";
		stage="3rd Stage";
	}
	else if(num==80)
	{
		name="PHANPY";
		poke="_ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==81)
	{
		name="DONPHAN";
		poke="_ _ _ _ _ _ _";
		type="GROUND";
		stage="2nd Stage";
	}
	else if(num==82)
	{
		name="PORYGON2";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==83)
	{
		name="STANTLER";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==84)
	{
		name="SMEARGLE";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==85)
	{
		name="TYROGUE";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==86)
	{
		name="HITMONTOP";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==87)
	{
		name="SMOOCHUM";
		poke="_ _ _ _ _ _ _ _";
		type="ICE/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==88)
	{
		name="ELEKID";
		poke="_ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==89)
	{
		name="MAGBY";
		poke="_ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==90)
	{
		name="MILTANK";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==91)
	{
		name="BLISSEY";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="3rd Stage";
	}
	else if(num==92)
	{
		name="RAIKOU";
		poke="_ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==93)
	{
		name="ENTEI";
		poke="_ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==94)
	{
		name="SUICUNE";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==95)
	{
		name="LARVITAR";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK/GROUND";
		stage="1st Stage";
	}
	else if(num==96)
	{
		name="PUPITAR";
		poke="_ _ _ _ _ _ _";
		type="ROCK/GROUND";
		stage="2nd Stage";
	}
	else if(num==97)
	{
		name="TYRANITAR";
		poke="_ _ _ _ _ _ _ _ _";
		type="ROCK/DARK";
		stage="3rd Stage";
	}
	else if(num==98)
	{
		name="LUGIA";
		poke="_ _ _ _ _";
		type="PSYCHIC/FLYING";
		stage="1st Stage";
	}
	else if(num==99)
	{
		name="HO-OH";
		poke="_ _ _ _ _";
		type="FIRE/FLYING";
		stage="1st Stage";
	}
	else if(num==100)
	{
		name="CELEBI";
		poke="_ _ _ _ _ _";
		type="GRASS/PSYCHIC";
		stage="1st Stage";
	}
	display(name,poke,type,stage,res,pokecount,hint,mistake);
	clear();
	if(go==0)
	{
		if(pokecount<100)
		{
			cout<<"\n\n\t\t\t\t\tGAME OVER!";
			cout<<"\n\t\t\t\tBetter Luck Next Time!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
		else if(pokecount==100)
		{
			cout<<"\n\n\t\t\t\t\tCONGRATULATIONS!!";
			cout<<"\n\t\t\t\tYou have successfully completed the theme by guessing all "<<pokecount<<" Pokemon!!!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
	}
}
void hoenn(int num,char name[],char poke[],char type[],char stage[],int &res,int &pokecount,int &hint,int &mistake,int go=0)
{
	if(num==1)
	{
		name="TREECKO";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==2)
	{
		name="GROVYLE";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==3)
	{
		name="SCEPTILE";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="3rd Stage";
	}
	else if(num==4)
	{
		name="TORCHIC";
		poke="_ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==5)
	{
		name="COMBUSKEN";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIRE/FIGHTING";
		stage="2nd Stage";
	}
	else if(num==6)
	{
		name="BLAZIKEN";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE/FIGHTING";
		stage="3rd Stage";
	}
	else if(num==7)
	{
		name="MUDKIP";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==8)
	{
		name="MARSHTOMP";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/GROUND";
		stage="2nd Stage";
	}
	else if(num==9)
	{
		name="SWAMPERT";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/GROUND";
		stage="3rd Stage";
	}
	else if(num==10)
	{
		name="POOCHYENA";
		poke="_ _ _ _ _ _ _ _ _";
		type="DARK";
		stage="1st Stage";
	}
	else if(num==11)
	{
		name="MIGHTYENA";
		poke="_ _ _ _ _ _ _ _ _";
		type="DARK";
		stage="2nd Stage";
	}
	else if(num==12)
	{
		name="ZIGZAGOON";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==13)
	{
		name="LINOONE";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==14)
	{
		name="WURMPLE";
		poke="_ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==15)
	{
		name="SILCOON";
		poke="_ _ _ _ _ _ _";
		type="BUG";
		stage="2nd Stage";
	}
	else if(num==16)
	{
		name="BEAUTIFLY";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="3rd Stage";
	}
	else if(num==17)
	{
		name="CASCOON";
		poke="_ _ _ _ _ _ _";
		type="BUG";
		stage="2nd Stage";
	}
	else if(num==18)
	{
		name="DUSTOX";
		poke="_ _ _ _ _ _";
		type="BUG/POISON";
		stage="3rd Stage";
	}
	else if(num==19)
	{
		name="LOTAD";
		poke="_ _ _ _ _";
		type="WATER/GRASS";
		stage="1st Stage";
	}
	else if(num==20)
	{
		name="LOMBRE";
		poke="_ _ _ _ _ _";
		type="WATER/GRASS";
		stage="2nd Stage";
	}
	else if(num==21)
	{
		name="LUDICOLO";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/GRASS";
		stage="3rd Stage";
	}
	else if(num==22)
	{
		name="SEEDOT";
		poke="_ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==23)
	{
		name="NUZLEAF";
		poke="_ _ _ _ _ _ _";
		type="GRASS/DARK";
		stage="2nd Stage";
	}
	else if(num==24)
	{
		name="SHIFTRY";
		poke="_ _ _ _ _ _ _";
		type="GRASS/DARK";
		stage="3rd Stage";
	}
	else if(num==25)
	{
		name="TAILLOW";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==26)
	{
		name="SWELLOW";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==27)
	{
		name="WINGULL";
		poke="_ _ _ _ _ _ _";
		type="WATER/FLYING";
		stage="1st Stage";
	}
	else if(num==28)
	{
		name="PELIPPER";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/FLYING";
		stage="2nd Stage";
	}
	else if(num==29)
	{
		name="RALTS";
		poke="_ _ _ _ _";
		type="PSYCHIC/FAIRY";
		stage="1st Stage";
	}
	else if(num==30)
	{
		name="KIRLIA";
		poke="_ _ _ _ _ _";
		type="PSYCHIC/FAIRY";
		stage="2nd Stage";
	}
	else if(num==31)
	{
		name="GARDEVOIR";
		poke="_ _ _ _ _ _ _ _ _";
		type="PSYCHIC/FAIRY";
		stage="3rd Stage";
	}
	else if(num==32)
	{
		name="SURSKIT";
		poke="_ _ _ _ _ _ _";
		type="BUG/WATER";
		stage="1st Stage";
	}
	else if(num==33)
	{
		name="MASQUERAIN";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="2nd Stage";
	}
	else if(num==34)
	{
		name="SHROOMISH";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==35)
	{
		name="BRELOOM";
		poke="_ _ _ _ _ _ _";
		type="GRASS/FIGHTING";
		stage="2nd Stage";
	}
	else if(num==36)
	{
		name="SLAKOTH";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==37)
	{
		name="VIGOROTH";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==38)
	{
		name="SLAKING";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="3rd Stage";
	}
	else if(num==39)
	{
		name="NINCADA";
		poke="_ _ _ _ _ _ _";
		type="BUG/GROUND";
		stage="1st Stage";
	}
	else if(num==40)
	{
		name="NINJASK";
		poke="_ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="2nd Stage";
	}
	else if(num==41)
	{
		name="SHEDINJA";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="2nd Stage";
	}
	else if(num==42)
	{
		name="WHISMUR";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==43)
	{
		name="LOUDRED";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==44)
	{
		name="EXPLOUD";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="3rd Stage";
	}
	else if(num==45)
	{
		name="MAKUHITA";
		poke="_ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==46)
	{
		name="HARIYAMA";
		poke="_ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==47)
	{
		name="AZURILL";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FAIRY";
		stage="1st Stage";
	}
	else if(num==48)
	{
		name="NOSEPASS";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK";
		stage="1st Stage";
	}
	else if(num==49)
	{
		name="SKITTY";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==50)
	{
		name="DELCATTY";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==51)
	{
		name="SABLEYE";
		poke="_ _ _ _ _ _ _";
		type="DARK/GHOST";
		stage="1st Stage";
	}
	else if(num==52)
	{
		name="MAWILE";
		poke="_ _ _ _ _ _";
		type="STEEL/FAIRY";
		stage="1st Stage";
	}
	else if(num==53)
	{
		name="ARON";
		poke="_ _ _ _";
		type="STEEL/ROCK";
		stage="1st Stage";
	}
	else if(num==54)
	{
		name="LAIRON";
		poke="_ _ _ _ _ _";
		type="STEEL/ROCK";
		stage="2nd Stage";
	}
	else if(num==55)
	{
		name="AGGRON";
		poke="_ _ _ _ _ _";
		type="STEEL/ROCK";
		stage="3rd Stage";
	}
	else if(num==56)
	{
		name="MEDITITE";
		poke="_ _ _ _ _ _ _ _";
		type="FIGHTING/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==57)
	{
		name="MEDICHAM";
		poke="_ _ _ _ _ _ _ _";
		type="FIGHTING/PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==58)
	{
		name="ELECTRIKE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==59)
	{
		name="MANECTRIC";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==60)
	{
		name="PLUSLE";
		poke="_ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==61)
	{
		name="MINUN";
		poke="_ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==62)
	{
		name="VOLBEAT";
		poke="_ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	if(num==63)
	{
		name="ILLUMISE";
		poke="_ _ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==64)
	{
		name="ROSELIA";
		poke="_ _ _ _ _ _ _";
		type="GRASS/PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==65)
	{
		name="GULPIN";
		poke="_ _ _ _ _ _";
		type="POSION";
		stage="1st Stage";
	}
	else if(num==66)
	{
		name="SWALOT";
		poke="_ _ _ _ _ _";
		type="POISON";
		stage="2nd Stage";
	}
	else if(num==67)
	{
		name="CARVANHA";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/DARK";
		stage="1st Stage";
	}
	else if(num==68)
	{
		name="SHARPEDO";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/DARK";
		stage="2nd Stage";
	}
	else if(num==69)
	{
		name="WAILMER";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==70)
	{
		name="WAILORD";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==71)
	{
		name="NUMEL";
		poke="_ _ _ _ _";
		type="FIRE/GROUND";
		stage="1st Stage";
	}
	else if(num==72)
	{
		name="CAMERUPT";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE/GROUND";
		stage="2nd Stage";
	}
	else if(num==73)
	{
		name="TORKOAL";
		poke="_ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==74)
	{
		name="SPOINK";
		poke="_ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==75)
	{
		name="GRUMPIG";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==76)
	{
		name="SPINDA";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==77)
	{
		name="TRAPINCH";
		poke="_ _ _ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==78)
	{
		name="VIBRAVA";
		poke="_ _ _ _ _ _ _";
		type="GROUND/DRAGON";
		stage="2nd Stage";
	}
	else if(num==79)
	{
		name="FLYGON";
		poke="_ _ _ _ _ _";
		type="GROUND/DRAGON";
		stage="3rd Stage";
	}
	else if(num==80)
	{
		name="CACNEA";
		poke="_ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==81)
	{
		name="CACTURNE";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/DARK";
		stage="2nd Stage";
	}
	else if(num==82)
	{
		name="SWABLU";
		poke="_ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==83)
	{
		name="ALTARIA";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==84)
	{
		name="ZANGOOSE";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==85)
	{
		name="SEVIPER";
		poke="_ _ _ _ _ _ _";
		type="POISON";
		stage="1st Stage";
	}
	else if(num==86)
	{
		name="LUNATONE";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==87)
	{
		name="SOLROCK";
		poke="_ _ _ _ _ _ _";
		type="ROCK/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==88)
	{
		name="BARBOACH";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/GROUND";
		stage="1st Stage";
	}
	else if(num==89)
	{
		name="WHISCASH";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/GROUND";
		stage="2nd Stage";
	}
	else if(num==90)
	{
		name="CORPHISH";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==91)
	{
		name="CRAWDAUNT";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/DARK";
		stage="2nd Stage";
	}
	else if(num==92)
	{
		name="BALTOY";
		poke="_ _ _ _ _ _";
		type="GROUND/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==93)
	{
		name="CLAYDOL";
		poke="_ _ _ _ _ _";
		type="GROUND/PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==94)
	{
		name="LILEEP";
		poke="_ _ _ _ _ _";
		type="ROCK/GRASS";
		stage="1st Stage";
	}
	else if(num==95)
	{
		name="CRADILY";
		poke="_ _ _ _ _ _ _";
		type="ROCK/GRASS";
		stage="2nd Stage";
	}
	else if(num==96)
	{
		name="ANORITH";
		poke="_ _ _ _ _ _ _";
		type="ROCK/BUG";
		stage="1st Stage";
	}
	else if(num==97)
	{
		name="ARMALDO";
		poke="_ _ _ _ _ _ _";
		type="ROCK/BUG";
		stage="2nd Stage";
	}
	else if(num==98)
	{
		name="FEEBAS";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==99)
	{
		name="MILOTIC";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==100)
	{
		name="CASTFORM";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==101)
	{
		name="KECLEON";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==102)
	{
		name="SHUPPET";
		poke="_ _ _ _ _ _ _";
		type="GHOST";
		stage="1st Stage";
	}
	else if(num==103)
	{
		name="BANETTE";
		poke="_ _ _ _ _ _ _";
		type="GHOST";
		stage="2nd Stage";
	}
	else if(num==104)
	{
		name="DUSKULL";
		poke="_ _ _ _ _ _ _";
		type="GHOST";
		stage="1st Stage";
	}
	else if(num==105)
	{
		name="DUSCLOPS";
		poke="_ _ _ _ _ _ _ _";
		type="GHOST";
		stage="2nd Stage";
	}
	else if(num==106)
	{
		name="TROPIUS";
		poke="_ _ _ _ _ _ _";
		type="GRASS/FLYING";
		stage="1st Stage";
	}
	else if(num==107)
	{
		name="CHIMECHO";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==108)
	{
		name="ABSOL";
		poke="_ _ _ _ _";
		type="DARK";
		stage="1st Stage";
	}
	else if(num==109)
	{
		name="WYNAUT";
		poke="_ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==110)
	{
		name="SNORUNT";
		poke="_ _ _ _ _ _ _";
		type="ICE";
		stage="1st Stage";
	}
	else if(num==111)
	{
		name="GLALIE";
		poke="_ _ _ _ _ _";
		type="ICE";
		stage="2nd Stage";
	}
	else if(num==112)
	{
		name="SPHEAL";
		poke="_ _ _ _ _ _";
		type="ICE/WATER";
		stage="1st Stage";
	}
	else if(num==113)
	{
		name="SEALEO";
		poke="_ _ _ _ _ _";
		type="ICE/WATER";
		stage="2nd Stage";
	}
	else if(num==114)
	{
		name="WALREIN";
		poke="_ _ _ _ _ _ _";
		type="ICE/WATER";
		stage="3rd Stage";
	}
	else if(num==115)
	{
		name="CLAMPERL";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==116)
	{
		name="HUNTAIL";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==117)
	{
		name="GOREBYSS";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==118)
	{
		name="RELICANTH";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/ROCK";
		stage="1st Stage";
	}
	else if(num==119)
	{
		name="LUVDISC";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==120)
	{
		name="BAGON";
		poke="_ _ _ _ _";
		type="DRAGON";
		stage="1st Stage";
	}
	else if(num==121)
	{
		name="SHELGON";
		poke="_ _ _ _ _ _ _";
		type="DRAGON";
		stage="2nd Stage";
	}
	else if(num==122)
	{
		name="SALAMENCE";
		poke="_ _ _ _ _ _ _ _ _";
		type="DRAGON/FLYING";
		stage="3rd Stage";
	}
	else if(num==123)
	{
		name="BELDUM";
		poke="_ _ _ _ _ _";
		type="STEEL/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==124)
	{
		name="METANG";
		poke="_ _ _ _ _ _";
		type="STEEL/PSYCHIC";
		stage="2nd Stage";
	}
	if(num==125)
	{
		name="METAGROSS";
		poke="_ _ _ _ _ _ _ _ _";
		type="STEEL/PSYCHIC";
		stage="3rd Stage";
	}
	else if(num==126)
	{
		name="REGIROCK";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK";
		stage="1st Stage";
	}
	else if(num==127)
	{
		name="REGICE";
		poke="_ _ _ _ _ _";
		type="ICE";
		stage="1st Stage";
	}
	else if(num==128)
	{
		name="REGISTEEL";
		poke="_ _ _ _ _ _ _ _ _";
		type="STEEL";
		stage="1st Stage";
	}
	else if(num==129)
	{
		name="LATIAS";
		poke="_ _ _ _ _ _";
		type="DRAGON/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==130)
	{
		name="LATIOS";
		poke="_ _ _ _ _ _";
		type="DRAGON/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==131)
	{
		name="KYOGRE";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==132)
	{
		name="GROUDON";
		poke="_ _ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==133)
	{
		name="RAYQUAZA";
		poke="_ _ _ _ _ _ _ _";
		type="DRAGON/FLYING";
		stage="1st Stage";
	}
	else if(num==134)
	{
		name="JIRACHI";
		poke="_ _ _ _ _ _ _";
		type="STEEL/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==135)
	{
		name="DEOXYS";
		poke="_ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	display(name,poke,type,stage,res,pokecount,hint,mistake);
	clear();
	if(go==0)
	{
		if(pokecount<135)
		{
			cout<<"\n\n\t\t\t\t\tGAME OVER!";
			cout<<"\n\t\t\t\tBetter Luck Next Time!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
		else if(pokecount==135)
		{
			cout<<"\n\n\t\t\t\t\tCONGRATULATIONS!!";
			cout<<"\n\t\t\t\tYou have successfully completed the theme by guessing all "<<pokecount<<" Pokemon!!!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
	}
}
void sinnoh(int num,char name[],char poke[],char type[],char stage[],int &res,int &pokecount,int &hint,int &mistake,int go=0)
{
	if(num==1)
	{
		name="TURTWIG";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==2)
	{
		name="GROTLE";
		poke="_ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==3)
	{
		name="TORTERRA";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="3rd Stage";
	}
	else if(num==4)
	{
		name="CHIMCHAR";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==5)
	{
		name="MONFERNO";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE/FIGHTING";
		stage="2nd Stage";
	}
	else if(num==6)
	{
		name="INFERNAPE";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIRE/FIGHTING";
		stage="3rd Stage";
	}
	else if(num==7)
	{
		name="PIPLUP";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==8)
	{
		name="PRINPLUP";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==9)
	{
		name="EMPOLEON";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="3rd Stage";
	}
	else if(num==10)
	{
		name="STARLY";
		poke="_ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==11)
	{
		name="STARAVIA";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==12)
	{
		name="STARAPTOR";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="3rd Stage";
	}
	else if(num==13)
	{
		name="BIDOOF";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==14)
	{
		name="BIBAREL";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/WATER";
		stage="2nd Stage";
	}
	else if(num==15)
	{
		name="KRICKETOT";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==16)
	{
		name="KRICKETUNE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG";
		stage="2nd Stage";
	}
	else if(num==17)
	{
		name="SHINX";
		poke="_ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==18)
	{
		name="LUXIO";
		poke="_ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==19)
	{
		name="LUXRAY";
		poke="_ _ _ _ _ _";
		type="ELECTRIC";
		stage="3rd Stage";
	}
	else if(num==20)
	{
		name="BUDEW";
		poke="_ _ _ _ _";
		type="GRASS/POISON";
		stage="1st Stage";
	}
	else if(num==21)
	{
		name="ROSERADE";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/POISON";
		stage="3rd Stage";
	}
	else if(num==22)
	{
		name="CRANIDOS";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK";
		stage="1st Stage";
	}
	else if(num==23)
	{
		name="RAMPARDOS";
		poke="_ _ _ _ _ _ _ _ _";
		type="ROCK";
		stage="2nd Stage";
	}
	else if(num==24)
	{
		name="SHIELDON";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK/STEEL";
		stage="1st Stage";
	}
	else if(num==25)
	{
		name="BASTIODON";
		poke="_ _ _ _ _ _ _ _ _";
		type="ROCK/STEEL";
		stage="2nd Stage";
	}
	else if(num==26)
	{
		name="BURMY";
		poke="_ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==27)
	{
		name="WORMADAM";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/GRASS";
		stage="2nd Stage";
	}
	else if(num==28)
	{
		name="MOTHIM";
		poke="_ _ _ _ _ _";
		type="BUG/FLYING";
		stage="2nd Stage";
	}
	else if(num==29)
	{
		name="COMBEE";
		poke="_ _ _ _ _ _";
		type="BUG/FLYING";
		stage="1st Stage";
	}
	else if(num==30)
	{
		name="VESPIQUEN";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="2nd Stage";
	}
	else if(num==31)
	{
		name="PACHIRISU";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==32)
	{
		name="BUIZEL";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==33)
	{
		name="FLOATZEL";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==34)
	{
		name="CHERUBI";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==35)
	{
		name="CHERRIM";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==36)
	{
		name="SHELLOS";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==37)
	{
		name="GASTRODON";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==38)
	{
		name="AMBIPOM";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==39)
	{
		name="DRIFLOON";
		poke="_ _ _ _ _ _ _ _";
		type="GHOST/FLYING";
		stage="1st Stage";
	}
	else if(num==40)
	{
		name="DRIFBLIM";
		poke="_ _ _ _ _ _ _ _";
		type="GHOST/FLYING";
		stage="2nd Stage";
	}
	else if(num==41)
	{
		name="BUNEARY";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==42)
	{
		name="LOPUNNY";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==43)
	{
		name="MISMAGIUS";
		poke="_ _ _ _ _ _ _ _ _";
		type="GHOST";
		stage="2nd Stage";
	}
	else if(num==44)
	{
		name="HONCHKROW";
		poke="_ _ _ _ _ _ _ _ _";
		type="DARK/FLYING";
		stage="2nd Stage";
	}
	else if(num==45)
	{
		name="GLAMEOW";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==46)
	{
		name="PURUGLY";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==47)
	{
		name="CHINGLING";
		poke="_ _ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==48)
	{
		name="STUNKY";
		poke="_ _ _ _ _ _";
		type="POISON/DARK";
		stage="1st Stage";
	}
	else if(num==49)
	{
		name="SKUNTANK";
		poke="_ _ _ _ _ _ _ _";
		type="POISON/DARK";
		stage="2nd Stage";
	}
	else if(num==50)
	{
		name="BRONZOR";
		poke="_ _ _ _ _ _ _";
		type="STEEL/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==51)
	{
		name="BRONZONG";
		poke="_ _ _ _ _ _ _ _";
		type="STEEL/PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==52)
	{
		name="BONSLY";
		poke="_ _ _ _ _ _";
		type="ROCK";
		stage="1st Stage";
	}
	else if(num==53)
	{
		name="MIME JR.";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC/FAIRY";
		stage="1st Stage";
	}
	else if(num==54)
	{
		name="HAPPINY";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==55)
	{
		name="CHATOT";
		poke="_ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==56)
	{
		name="SPIRITOMB";
		poke="_ _ _ _ _ _ _ _ _";
		type="GHOST/DARK";
		stage="1st Stage";
	}
	else if(num==57)
	{
		name="GIBLE";
		poke="_ _ _ _ _";
		type="DRAGON/GROUND";
		stage="1st Stage";
	}
	else if(num==58)
	{
		name="GABITE";
		poke="_ _ _ _ _ _";
		type="DRAGON/GROUND";
		stage="2nd Stage";
	}
	else if(num==59)
	{
		name="GARCHOMP";
		poke="_ _ _ _ _ _ _ _";
		type="DRAGON/GROUND";
		stage="3rd Stage";
	}
	else if(num==60)
	{
		name="MUCHLAX";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==61)
	{
		name="RIOLU";
		poke="_ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==62)
	{
		name="LUCARIO";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	if(num==63)
	{
		name="HIPPOPOTAS";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==64)
	{
		name="HIPPOWDON";
		poke="_ _ _ _ _ _ _ _ _";
		type="GROUND";
		stage="2nd Stage";
	}
	else if(num==65)
	{
		name="SKORUPI";
		poke="_ _ _ _ _ _ _";
		type="POISON/BUG";
		stage="1st Stage";
	}
	else if(num==66)
	{
		name="DRAPION";
		poke="_ _ _ _ _ _ _";
		type="POISON/DARK";
		stage="2nd Stage";
	}
	else if(num==67)
	{
		name="CROAGUNK";
		poke="_ _ _ _ _ _ _ _";
		type="POSION/FIGHTING";
		stage="1st Stage";
	}
	else if(num==68)
	{
		name="TOXICROAK";
		poke="_ _ _ _ _ _ _ _ _";
		type="POISON/FIGGHTINNG";
		stage="2nd Stage";
	}
	else if(num==69)
	{
		name="CARNIVINE";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==70)
	{
		name="FINNEON";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==71)
	{
		name="LUMINEON";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==72)
	{
		name="MANTYKE";
		poke="_ _ _ _ _ _ _";
		type="WATER/FLYING";
		stage="1st Stage";
	}
	else if(num==73)
	{
		name="SNOVER";
		poke="_ _ _ _ _ _";
		type="GRASS/ICE";
		stage="1st Stage";
	}
	else if(num==74)
	{
		name="ABOMASNOW";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/ICE";
		stage="2nd Stage";
	}
	else if(num==75)
	{
		name="WEAVILE";
		poke="_ _ _ _ _ _ _";
		type="DARK/ICE";
		stage="2nd Stage";
	}
	else if(num==76)
	{
		name="MAGNEZONE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC/STEEL";
		stage="3rd Stage";
	}
	else if(num==77)
	{
		name="LICKILICKY";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==78)
	{
		name="RHYPERIOR";
		poke="_ _ _ _ _ _ _ _ _";
		type="GROUND/ROCK";
		stage="3rd Stage";
	}
	else if(num==79)
	{
		name="TANGROWTH";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==80)
	{
		name="ELECTIVIRE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="3rd Stage";
	}
	else if(num==81)
	{
		name="MAGMORTAR";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIRE";
		stage="3rd Stage";
	}
	else if(num==82)
	{
		name="TOGEKISS";
		poke="_ _ _ _ _ _ _ _";
		type="FAIRY/FLYING";
		stage="3rd Stage";
	}
	else if(num==83)
	{
		name="YANMEGA";
		poke="_ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="2nd Stage";
	}
	else if(num==84)
	{
		name="LEAFEON";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==85)
	{
		name="GLACEON";
		poke="_ _ _ _ _ _ _";
		type="ICE";
		stage="2nd Stage";
	}
	else if(num==86)
	{
		name="GLISCOR";
		poke="_ _ _ _ _ _ _";
		type="GROUND/FLYING";
		stage="2nd Stage";
	}
	else if(num==87)
	{
		name="MAMOSWINE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ICE/GROUND";
		stage="3rd Stage";
	}
	else if(num==88)
	{
		name="PORYGON-Z";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="3rd Stage";
	}
	else if(num==89)
	{
		name="GALLADE";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC/FIGHTING";
		stage="3rd Stage";
	}
	else if(num==90)
	{
		name="PROBOPASS";
		poke="_ _ _ _ _ _ _ _ _";
		type="ROCK/STEEL";
		stage="2nd Stage";
	}
	else if(num==91)
	{
		name="DUSKNOIR";
		poke="_ _ _ _ _ _ _ _";
		type="GHOST";
		stage="3rd Stage";
	}
	else if(num==92)
	{
		name="FROSLASS";
		poke="_ _ _ _ _ _ _ _";
		type="ICE/GHOST";
		stage="2nd Stage";
	}
	else if(num==93)
	{
		name="ROTOM";
		poke="_ _ _ _ _";
		type="ELECTRIC/GHOST";
		stage="1st Stage";
	}
	else if(num==94)
	{
		name="UXIE";
		poke="_ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==95)
	{
		name="MESPRIT";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==96)
	{
		name="AZELF";
		poke="_ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==97)
	{
		name="DIALGA";
		poke="_ _ _ _ _ _";
		type="STEEL/DRAGON";
		stage="1st Stage";
	}
	else if(num==98)
	{
		name="PALKIA";
		poke="_ _ _ _ _ _";
		type="WATER/DRAGON";
		stage="1st Stage";
	}
	else if(num==99)
	{
		name="HEATRAN";
		poke="_ _ _ _ _ _ _";
		type="FIRE/STEEL";
		stage="1st Stage";
	}
	else if(num==100)
	{
		name="REGIGIGAS";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==101)
	{
		name="GIRATINA";
		poke="_ _ _ _ _ _ _ _";
		type="GHOST/DRAGON";
		stage="1st Stage";
	}
	else if(num==102)
	{
		name="CRESSELIA";
		poke="_ _ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==103)
	{
		name="PHIONE";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==104)
	{
		name="MANAPHY";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==105)
	{
		name="DARKRAI";
		poke="_ _ _ _ _ _ _";
		type="DARK";
		stage="1st Stage";
	}
	else if(num==106)
	{
		name="SHAYMIN";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==107)
	{
		name="ARCEUS";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	display(name,poke,type,stage,res,pokecount,hint,mistake);
	clear();
	if(go==0)
	{
		if(pokecount<107)
		{
			cout<<"\n\n\t\t\t\t\tGAME OVER!";
			cout<<"\n\t\t\t\tBetter Luck Next Time!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
		else if(pokecount==107)
		{
			cout<<"\n\n\t\t\t\t\tCONGRATULATIONS!!";
			cout<<"\n\t\t\t\tYou have successfully completed the theme by guessing all "<<pokecount<<" Pokemon!!!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
	}
}
void unova(int num,char name[],char poke[],char type[],char stage[],int &res,int &pokecount,int &hint,int &mistake,int go=0)
{
	if(num==0)
	{
		name="VICTINI";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC/FIRE";
		stage="1st Stage";
	}
	else if(num==1)
	{
		name="SNIVY";
		poke="_ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==2)
	{
		name="SERVINE";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==3)
	{
		name="SERPERIOR";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="3rd Stage";
	}
	else if(num==4)
	{
		name="TEPIG";
		poke="_ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==5)
	{
		name="PIGNITE";
		poke="_ _ _ _ _ _ _";
		type="FIRE/FIGHTING";
		stage="2nd Stage";
	}
	else if(num==6)
	{
		name="EMBOAR";
		poke="_ _ _ _ _ _";
		type="FIRE/FIGHTING";
		stage="3rd Stage";
	}
	else if(num==7)
	{
		name="OSHAWOTT";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==8)
	{
		name="DEWOTT";
		poke="_ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==9)
	{
		name="SAMUROTT";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="3rd Stage";
	}
	else if(num==10)
	{
		name="PATRAT";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==11)
	{
		name="WATCHOG";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==12)
	{
		name="LILLIPUP";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==13)
	{
		name="HERDIER";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==14)
	{
		name="STOUTLAND";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="3rd Stage";
	}
	else if(num==15)
	{
		name="PURRLOIN";
		poke="_ _ _ _ _ _ _ _";
		type="DARK";
		stage="1st Stage";
	}
	else if(num==16)
	{
		name="LIEPARD";
		poke="_ _ _ _ _ _ _";
		type="DARK";
		stage="2nd Stage";
	}
	else if(num==17)
	{
		name="PANSAGE";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==18)
	{
		name="SIMISAGE";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==19)
	{
		name="PANSEAR";
		poke="_ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==20)
	{
		name="SIMISEAR";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==21)
	{
		name="PANPOUR";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==22)
	{
		name="SIMIPOUR";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==23)
	{
		name="MUNNA";
		poke="_ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==24)
	{
		name="MUSHARNA";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==25)
	{
		name="PIDOVE";
		poke="_ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==26)
	{
		name="TRANQUILL";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==27)
	{
		name="UNFEZANT";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="3rd Stage";
	}
	else if(num==28)
	{
		name="BLITZLE";
		poke="_ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==29)
	{
		name="ZEBSTRIKA";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==30)
	{
		name="ROGGENROLA";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="ROCK";
		stage="1st Stage";
	}
	else if(num==31)
	{
		name="BOLDORE";
		poke="_ _ _ _ _ _ _";
		type="ROCK";
		stage="2nd Stage";
	}
	else if(num==32)
	{
		name="GIGALITH";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK";
		stage="3rd Stage";
	}
	else if(num==33)
	{
		name="WOOBAT";
		poke="_ _ _ _ _ _";
		type="PSYCHIC/FLYING";
		stage="1st Stage";
	}
	else if(num==34)
	{
		name="SWOOBAT";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC/FLYING";
		stage="2nd Stage";
	}
	else if(num==35)
	{
		name="DRILBUR";
		poke="_ _ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==36)
	{
		name="EXCADRILL";
		poke="_ _ _ _ _ _ _ _ _";
		type="GROUND/STEEL";
		stage="2nd Stage";
	}
	else if(num==37)
	{
		name="AUDINO";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==38)
	{
		name="TIMBURR";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==39)
	{
		name="GURDURR";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==40)
	{
		name="CONKELDURR";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="3rd Stage";
	}
	else if(num==41)
	{
		name="TYMPOLE";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==42)
	{
		name="PALPITOAD";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/GROUND";
		stage="2nd Stage";
	}
	else if(num==43)
	{
		name="SEISMITOAD";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="WATER/GROUND";
		stage="3rd Stage";
	}
	else if(num==44)
	{
		name="THROH";
		poke="_ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==45)
	{
		name="SAWK";
		poke="_ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==46)
	{
		name="SEWADDLE";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/GRASS";
		stage="1st Stage";
	}
	else if(num==47)
	{
		name="SWADLOON";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/GRASS";
		stage="2nd Stage";
	}
	else if(num==48)
	{
		name="LEAVANNY";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/GARSS";
		stage="3rd Stage";
	}
	else if(num==49)
	{
		name="VENIPEDE";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/POISON";
		stage="1st Stage";
	}
	else if(num==50)
	{
		name="WHIRLIPEDE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG/POISON";
		stage="2nd Stage";
	}
	else if(num==51)
	{
		name="SCOLIPEDE";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG/POISON";
		stage="3rd Stage";
	}
	else if(num==52)
	{
		name="COTTONEE";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/FAIRY";
		stage="1st Stage";
	}
	else if(num==53)
	{
		name="WHIMSICOTT";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GRASS/FAIRY";
		stage="2nd Stage";
	}
	else if(num==54)
	{
		name="PETILIL";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==55)
	{
		name="LILLIGANT";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==56)
	{
		name="BASCULIN";
		poke="_ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==57)
	{
		name="SANDILE";
		poke="_ _ _ _ _ _ _";
		type="GROUND/DARK";
		stage="1st Stage";
	}
	else if(num==58)
	{
		name="KROKOROK";
		poke="_ _ _ _ _ _ _ _";
		type="GROUND/DARK";
		stage="2nd Stage";
	}
	else if(num==59)
	{
		name="KROOKODILE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GROUND/DARK";
		stage="3rd Stage";
	}
	else if(num==60)
	{
		name="DARUMAKA";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==61)
	{
		name="DARMANITAN";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	if(num==62)
	{
		name="MARACTUS";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	if(num==63)
	{
		name="DWEBBLE";
		poke="_ _ _ _ _ _ _";
		type="BUG/ROCK";
		stage="1st Stage";
	}
	else if(num==64)
	{
		name="CRUSTLE";
		poke="_ _ _ _ _ _ _";
		type="BUG/ROCK";
		stage="2nd Stage";
	}
	else if(num==65)
	{
		name="SCRAGGY";
		poke="_ _ _ _ _ _ _";
		type="DARK/FIGHTING";
		stage="1st Stage";
	}
	else if(num==66)
	{
		name="SCRAFTY";
		poke="_ _ _ _ _ _ _";
		type="DARK/FIGHTING";
		stage="2nd Stage";
	}
	else if(num==67)
	{
		name="SIGILYPH";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC/FLYING";
		stage="1st Stage";
	}
	else if(num==68)
	{
		name="YANMASK";
		poke="_ _ _ _ _ _ _";
		type="GHOST";
		stage="1st Stage";
	}
	else if(num==69)
	{
		name="COFAGRIGUS";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GHOST";
		stage="2nd Stage";
	}
	else if(num==70)
	{
		name="TIRTOUGA";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/ROCK";
		stage="1st Stage";
	}
	else if(num==71)
	{
		name="CARRACOSTA";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="WATER/ROCK";
		stage="2nd Stage";
	}
	else if(num==72)
	{
		name="ARCHEN";
		poke="_ _ _ _ _ _";
		type="ROCK/FLYING";
		stage="1st Stage";
	}
	else if(num==73)
	{
		name="ARCHEOPS";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK/FLYING";
		stage="2nd Stage";
	}
	else if(num==74)
	{
		name="TRUBBISH";
		poke="_ _ _ _ _ _ _ _";
		type="POISON";
		stage="1st Stage";
	}
	else if(num==75)
	{
		name="GARBODOR";
		poke="_ _ _ _ _ _ _ _";
		type="POISON";
		stage="2nd Stage";
	}
	else if(num==76)
	{
		name="ZORUA";
		poke="_ _ _ _ _";
		type="DARK";
		stage="1st Stage";
	}
	else if(num==77)
	{
		name="ZOROARK";
		poke="_ _ _ _ _ _ _";
		type="DARK";
		stage="2nd Stage";
	}
	else if(num==78)
	{
		name="MINCCINO";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==79)
	{
		name="CINCCINO";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==80)
	{
		name="GOTHITA";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==81)
	{
		name="GOTHORITA";
		poke="_ _ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==82)
	{
		name="GOTHITELLE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="3rd Stage";
	}
	else if(num==83)
	{
		name="SOLOSIS";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==84)
	{
		name="DUOSION";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==85)
	{
		name="REUNICLUS";
		poke="_ _ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="3rd Stage";
	}
	else if(num==86)
	{
		name="DUCKLETT";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/FLYING";
		stage="1st Stage";
	}
	else if(num==87)
	{
		name="SWANNA";
		poke="_ _ _ _ _ _";
		type="WATER/FLYING";
		stage="2nd Stage";
	}
	else if(num==88)
	{
		name="VANILLITE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ICE";
		stage="1st Stage";
	}
	else if(num==89)
	{
		name="VANILLISH";
		poke="_ _ _ _ _ _ _ _ _";
		type="ICE";
		stage="2nd Stage";
	}
	else if(num==90)
	{
		name="VANILLUXE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ICE";
		stage="3rd Stage";
	}
	else if(num==91)
	{
		name="DEERLING";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/GRASS";
		stage="1st Stage";
	}
	else if(num==92)
	{
		name="SAWSBUCK";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/GRASS";
		stage="2nd Stage";
	}
	else if(num==93)
	{
		name="EMOLGA";
		poke="_ _ _ _ _ _";
		type="ELECTRIC/FLYING";
		stage="1st Stage";
	}
	else if(num==94)
	{
		name="KARRABLAST";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==95)
	{
		name="ESCAVALIER";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG/STEEL";
		stage="2nd Stage";
	}
	else if(num==96)
	{
		name="FOONGUS";
		poke="_ _ _ _ _ _ _";
		type="GRASS/POISON";
		stage="1st Stage";
	}
	else if(num==97)
	{
		name="AMOONGUSS";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/POISON";
		stage="2nd Stage";
	}
	else if(num==98)
	{
		name="FRILLISH";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/GHOST";
		stage="1st Stage";
	}
	else if(num==99)
	{
		name="JELLICENT";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/GHOST";
		stage="2nd Stage";
	}
	else if(num==100)
	{
		name="ALOMOMOLA";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==101)
	{
		name="JOLTIK";
		poke="_ _ _ _ _ _";
		type="BUG/ELECTRIC";
		stage="1st Stage";
	}
	else if(num==102)
	{
		name="GALVANTULA";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG/ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==103)
	{
		name="FERROSEED";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/STEEL";
		stage="1st Stage";
	}
	else if(num==104)
	{
		name="FERROTHORN";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GRASS/STEEL";
		stage="2nd Stage";
	}
	else if(num==105)
	{
		name="KLINK";
		poke="_ _ _ _ _";
		type="STEEL";
		stage="1st Stage";
	}
	else if(num==106)
	{
		name="KLANG";
		poke="_ _ _ _ _";
		type="STEEL";
		stage="2nd Stage";
	}
	else if(num==107)
	{
		name="KLINKLANG";
		poke="_ _ _ _ _ _ _ _ _";
		type="STEEL";
		stage="3rd Stage";
	}
	else if(num==108)
	{
		name="TYNAMO";
		poke="_ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==109)
	{
		name="EELECTRIK";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==110)
	{
		name="EELEKTROSS";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="3rd Stage";
	}
	else if(num==111)
	{
		name="ELGYEM";
		poke="_ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==112)
	{
		name="BEHEEYEM";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==113)
	{
		name="LITWICK";
		poke="_ _ _ _ _ _ _";
		type="GHOST/FIRE";
		stage="1st Stage";
	}
	else if(num==114)
	{
		name="LAMPENT";
		poke="_ _ _ _ _ _ _";
		type="GHOST/FIRE";
		stage="2nd Stage";
	}
	else if(num==115)
	{
		name="CHANDELURE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GHOST/FIRE";
		stage="3rd Stage";
	}
	else if(num==116)
	{
		name="AXEW";
		poke="_ _ _ _";
		type="DRAGON";
		stage="1st Stage";
	}
	else if(num==117)
	{
		name="FRAXURE";
		poke="_ _ _ _ _ _ _";
		type="DRAGON";
		stage="2nd Stage";
	}
	else if(num==118)
	{
		name="HAXORUS";
		poke="_ _ _ _ _ _ _";
		type="DRAGON";
		stage="3rd Stage";
	}
	else if(num==119)
	{
		name="CUBCHOO";
		poke="_ _ _ _ _ _ _";
		type="ICE";
		stage="1st Stage";
	}
	else if(num==120)
	{
		name="BEARTIC";
		poke="_ _ _ _ _ _ _";
		type="ICE";
		stage="2nd Stage";
	}
	else if(num==121)
	{
		name="CRYOGONAL";
		poke="_ _ _ _ _ _ _ _ _";
		type="ICE";
		stage="1st Stage";
	}
	else if(num==122)
	{
		name="SHELMET";
		poke="_ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==123)
	{
		name="ACCELGOR";
		poke="_ _ _ _ _ _ _ _";
		type="BUG";
		stage="2nd Stage";
	}
	else if(num==124)
	{
		name="STUNFISK";
		poke="_ _ _ _ _ _ _ _";
		type="GROUND/ELECTRIC";
		stage="1st Stage";
	}
	if(num==125)
	{
		name="MIENFOO";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==126)
	{
		name="MIENSHAO";
		poke="_ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="2nd Stage";
	}
	else if(num==127)
	{
		name="DRUDDIGON";
		poke="_ _ _ _ _ _ _ _ _";
		type="DRAGON";
		stage="1st Stage";
	}
	else if(num==128)
	{
		name="GOLETT";
		poke="_ _ _ _ _ _";
		type="GROUND/GHOST";
		stage="1st Stage";
	}
	else if(num==129)
	{
		name="GOLURK";
		poke="_ _ _ _ _ _";
		type="GROUND/GHOST";
		stage="2nd Stage";
	}
	else if(num==130)
	{
		name="PAWNIARD";
		poke="_ _ _ _ _ _ _ _";
		type="DARK/STEEL";
		stage="1st Stage";
	}
	else if(num==131)
	{
		name="BISHARP";
		poke="_ _ _ _ _ _ _";
		type="DARK/STEEL";
		stage="2nd Stage";
	}
	else if(num==132)
	{
		name="BOUFFALANT";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==133)
	{
		name="RUFFLET";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==134)
	{
		name="BRAVIARY";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==135)
	{
		name="VULLABY";
		poke="_ _ _ _ _ _ _";
		type="DARK/FLYING";
		stage="1st Stage";
	}
	else if(num==136)
	{
		name="MANDIBUZZ";
		poke="_ _ _ _ _ _ _ _ _";
		type="DARK/FLYING";
		stage="2nd Stage";
	}
	else if(num==137)
	{
		name="HEATMOR";
		poke="_ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==138)
	{
		name="DURANT";
		poke="_ _ _ _ _ _";
		type="BUG/STEEL";
		stage="1st Stage";
	}
	else if(num==139)
	{
		name="DEINO";
		poke="_ _ _ _ _";
		type="DARK/DRAGON";
		stage="1st Stage";
	}
	else if(num==140)
	{
		name="ZWEILOUS";
		poke="_ _ _ _ _ _ _ _";
		type="DARK/DRAGON";
		stage="2nd Stage";
	}
	else if(num==141)
	{
		name="HYDREIGON";
		poke="_ _ _ _ _ _ _ _ _";
		type="DARK/DRAGON";
		stage="3rd Stage";
	}
	else if(num==142)
	{
		name="LARVESTA";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/FIRE";
		stage="1st Stage";
	}
	else if(num==143)
	{
		name="VOLCARONA";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG/FIRE";
		stage="2nd Stage";
	}
	else if(num==144)
	{
		name="COBALION";
		poke="_ _ _ _ _ _ _ _";
		type="STEEL/FIGHTING";
		stage="1st Stage";
	}
	else if(num==145)
	{
		name="TERRAKION";
		poke="_ _ _ _ _ _ _ _ _";
		type="ROCK/FIGHTING";
		stage="1st Stage";
	}
	else if(num==146)
	{
		name="VIRIZION";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/FIGHTING";
		stage="1st Stage";
	}
	else if(num==147)
	{
		name="TORNADUS";
		poke="_ _ _ _ _ _ _ _";
		type="FLYING";
		stage="1st Stage";
	}
	else if(num==148)
	{
		name="THUNDURUS";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC/FLYING";
		stage="1st Stage";
	}
	else if(num==149)
	{
		name="RESHIRAM";
		poke="_ _ _ _ _ _ _ _";
		type="DRAGON/FIRE";
		stage="1st Stage";
	}
	else if(num==150)
	{
		name="ZEKROM";
		poke="_ _ _ _ _ _";
		type="DRAGON/ELECTRIC";
		stage="1st Stage";
	}
	else if(num==151)
	{
		name="LANDORUS";
		poke="_ _ _ _ _ _ _ _";
		type="GROUND/FLYING";
		stage="1st Stage";
	}
	else if(num==152)
	{
		name="KYUREM";
		poke="_ _ _ _ _ _";
		type="DRAGON/ICE";
		stage="1st Stage";
	}
	else if(num==153)
	{
		name="KELDEO";
		poke="_ _ _ _ _ _";
		type="WATER/FIGHTING";
		stage="1st Stage";
	}
	else if(num==154)
	{
		name="MELOETTA";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==155)
	{
		name="GENESECT";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/STEEL";
		stage="1st Stage";
	}
	display(name,poke,type,stage,res,pokecount,hint,mistake);
	clear();
	if(go==0)
	{
		if(pokecount<156)
		{
			cout<<"\n\n\t\t\t\t\tGAME OVER!";
			cout<<"\n\t\t\t\tBetter Luck Next Time!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
		else if(pokecount==156)
		{
			cout<<"\n\n\t\t\t\t\tCONGRATULATIONS!!";
			cout<<"\n\t\t\t\tYou have successfully completed the theme by guessing all "<<pokecount<<" Pokemon!!!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
	}
}
void kalos(int num,char name[],char poke[],char type[],char stage[],int &res,int &pokecount,int &hint,int &mistake,int go=0)
{
	if(num==1)
	{
		name="CHESPIN";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==2)
	{
		name="QUILLADIN";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==3)
	{
		name="CHESNAUGHT";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="GRASS/FIGHTING";
		stage="3rd Stage";
	}
	else if(num==4)
	{
		name="FENNEKIN";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==5)
	{
		name="BRAIXEN";
		poke="_ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==6)
	{
		name="DELPHOX";
		poke="_ _ _ _ _ _ _";
		type="FIRE/PSYCHIC";
		stage="3rd Stage";
	}
	else if(num==7)
	{
		name="FROAKIE";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==8)
	{
		name="FROGADIER";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==9)
	{
		name="GRENINJA";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/DARK";
		stage="3rd Stage";
	}
	else if(num==10)
	{
		name="BUNNELBY";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==11)
	{
		name="DIGGERSBY";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL/GROUND";
		stage="2nd Stage";
	}
	else if(num==12)
	{
		name="FLETCHING";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==13)
	{
		name="FLETCHINDER";
		poke="_ _ _ _ _ _ _ _ _ _ _";
		type="FIRE/FLYING";
		stage="2nd Stage";
	}
	else if(num==14)
	{
		name="TALONFLAME";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIRE/FLYIING";
		stage="3rd Stage";
	}
	else if(num==15)
	{
		name="SCATTERBUG";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==16)
	{
		name="SPEWPA";
		poke="_ _ _ _ _ _";
		type="BUG";
		stage="2nd Stage";
	}
	else if(num==17)
	{
		name="VIVILLON";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/FLYING";
		stage="3rd Stage";
	}
	else if(num==18)
	{
		name="LITLEO";
		poke="_ _ _ _ _ _";
		type="FIRE/NORMAL";
		stage="1st Stage";
	}
	else if(num==19)
	{
		name="PYROAR";
		poke="_ _ _ _ _ _";
		type="FIRE/NORMAL";
		stage="2nd Stage";
	}
	else if(num==20)
	{
		name="FLABEBE";
		poke="_ _ _ _ _ _ _";
		type="FAIRY";
		stage="1st Stage";
	}
	else if(num==21)
	{
		name="FLOETTE";
		poke="_ _ _ _ _ _ _";
		type="FAIRY";
		stage="2nd Stage";
	}
	else if(num==22)
	{
		name="FLORGES";
		poke="_ _ _ _ _ _ _";
		type="FAIRY";
		stage="3rd Stage";
	}
	else if(num==23)
	{
		name="SKIDDO";
		poke="_ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==24)
	{
		name="GOGOAT";
		poke="_ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==25)
	{
		name="PANCHAM";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==26)
	{
		name="PANGORO";
		poke="_ _ _ _ _ _ _";
		type="FIGHTING/DARK";
		stage="2nd Stage";
	}
	else if(num==27)
	{
		name="FURFROU";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==28)
	{
		name="ESPURR";
		poke="_ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==29)
	{
		name="MEOWSTIC";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==30)
	{
		name="HONEDGE";
		poke="_ _ _ _ _ _ _";
		type="STEEL/GHOST";
		stage="1st Stage";
	}
	else if(num==31)
	{
		name="DOUBLADE";
		poke="_ _ _ _ _ _ _ _";
		type="STEEL/GHOST";
		stage="2nd Stage";
	}
	else if(num==32)
	{
		name="AEGISLASH";
		poke="_ _ _ _ _ _ _ _ _";
		type="STEEL/GHOST";
		stage="3rd Stage";
	}
	else if(num==33)
	{
		name="SPRITZEE";
		poke="_ _ _ _ _ _ _ _";
		type="FAIRY";
		stage="1st Stage";
	}
	else if(num==34)
	{
		name="AROMATISSE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FAIRY";
		stage="2nd Stage";
	}
	else if(num==35)
	{
		name="SWIRLIX";
		poke="_ _ _ _ _ _ _";
		type="FAIRY";
		stage="1st Stage";
	}
	else if(num==36)
	{
		name="SLURPUFF";
		poke="_ _ _ _ _ _ _ _";
		type="FAIRY";
		stage="2nd Stage";
	}
	else if(num==37)
	{
		name="INKAY";
		poke="_ _ _ _ _";
		type="DARK/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==38)
	{
		name="MALAMAR";
		poke="_ _ _ _ _ _ _";
		type="DARK/PSYCHIC";
		stage="2nd Stage";
	}
	else if(num==39)
	{
		name="BINACLE";
		poke="_ _ _ _ _ _ _";
		type="ROCK/WATER";
		stage="1st Stage";
	}
	else if(num==40)
	{
		name="BARBARACLE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="ROCK/WATER";
		stage="2nd Stage";
	}
	else if(num==41)
	{
		name="SKRELP";
		poke="_ _ _ _ _ _";
		type="POSION/WATER";
		stage="1st Stage";
	}
	else if(num==42)
	{
		name="DRAGALGE";
		poke="_ _ _ _ _ _ _ _";
		type="POISON/DRAGON";
		stage="2nd Stage";
	}
	else if(num==43)
	{
		name="CLAUNCHER";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==44)
	{
		name="CLAWITZER";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==45)
	{
		name="HELIOPTILE";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="ELECTRIC/NORMAL";
		stage="1st Stage";
	}
	else if(num==46)
	{
		name="HELIOLISK";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC/NORMAL";
		stage="2nd Stage";
	}
	else if(num==47)
	{
		name="TYRUNT";
		poke="_ _ _ _ _ _";
		type="ROCK/DRAGON";
		stage="1st Stage";
	}
	else if(num==48)
	{
		name="TYRANTRUM";
		poke="_ _ _ _ _ _ _ _ _";
		type="ROCK/DRAGON";
		stage="2nd Stage";
	}
	else if(num==49)
	{
		name="AMAURA";
		poke="_ _ _ _ _ _";
		type="ROCK/ICE";
		stage="1st Stage";
	}
	else if(num==50)
	{
		name="AURORUS";
		poke="_ _ _ _ _ _ _";
		type="ROCK/ICE";
		stage="1st Stage";
	}
	else if(num==51)
	{
		name="SLYVEON";
		poke="_ _ _ _ _ _ _";
		type="FAIRY";
		stage="2nd Stage";
	}
	else if(num==52)
	{
		name="HAWLUCHA";
		poke="_ _ _ _ _ _ _ _";
		type="FIGHTING/FLYING";
		stage="1st Stage";
	}
	else if(num==53)
	{
		name="DEDENNE";
		poke="_ _ _ _ _ _ _";
		type="ELECTRIC/FAIRY";
		stage="1st Stage";
	}
	else if(num==54)
	{
		name="CARBINK";
		poke="_ _ _ _ _ _ _";
		type="ROCK/STEEL";
		stage="1st Stage";
	}
	else if(num==55)
	{
		name="GOOMY";
		poke="_ _ _ _ _";
		type="DRAGON";
		stage="1st Stage";
	}
	else if(num==56)
	{
		name="SLIGGOO";
		poke="_ _ _ _ _ _ _";
		type="DRAGON";
		stage="2nd Stage";
	}
	else if(num==57)
	{
		name="GOODRA";
		poke="_ _ _ _ _ _";
		type="DRAGON";
		stage="3rd Stage";
	}
	else if(num==58)
	{
		name="KLEFKI";
		poke="_ _ _ _ _ _";
		type="STEEL/FAIRY";
		stage="1st Stage";
	}
	else if(num==59)
	{
		name="PHANTUMP";
		poke="_ _ _ _ _ _ _ _";
		type="GHOST/GRASS";
		stage="1st Stage";
	}
	else if(num==60)
	{
		name="TREVENANT";
		poke="_ _ _ _ _ _ _ _ _";
		type="GHOST/GRASS";
		stage="2nd Stage";
	}
	else if(num==61)
	{
		name="PUMPKABOO";
		poke="_ _ _ _ _ _ _ _ _";
		type="GHOST/GRASS";
		stage="1st Stage";
	}
	else if(num==62)
	{
		name="GOURGEIST";
		poke="_ _ _ _ _ _ _ _ _";
		type="GHOST/GRASS";
		stage="1st Stage";
	}
	if(num==63)
	{
		name="BERGMITE";
		poke="_ _ _ _ _ _ _ _";
		type="ICE";
		stage="1st Stage";
	}
	else if(num==64)
	{
		name="AVALUGG";
		poke="_ _ _ _ _ _ _";
		type="ICE";
		stage="2nd Stage";
	}
	else if(num==65)
	{
		name="NOIBAT";
		poke="_ _ _ _ _ _";
		type="FLYING/DRAGON";
		stage="1st Stage";
	}
	else if(num==66)
	{
		name="NOIVERN";
		poke="_ _ _ _ _ _ _";
		type="FLYING/DRAGON";
		stage="2nd Stage";
	}
	else if(num==67)
	{
		name="XERNEAS";
		poke="_ _ _ _ _ _ _";
		type="FAIRY";
		stage="1st Stage";
	}
	else if(num==68)
	{
		name="YVELTAL";
		poke="_ _ _ _ _ _ _";
		type="DARK/FLYING";
		stage="1st Stage";
	}
	else if(num==69)
	{
		name="ZYGARDE";
		poke="_ _ _ _ _ _ _";
		type="DRAGON/GROUND";
		stage="1st Stage";
	}
	else if(num==70)
	{
		name="DIANCIE";
		poke="_ _ _ _ _ _ _";
		type="ROCK/FAIRY";
		stage="1st Stage";
	}
	else if(num==71)
	{
		name="HOOPA";
		poke="_ _ _ _ _";
		type="PSYCHIC/GHOST";
		stage="1st Stage";
	}
	else if(num==72)
	{
		name="VOLCANION";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIRE/WATER";
		stage="1st Stage";
	}
	display(name,poke,type,stage,res,pokecount,hint,mistake);
	clear();
	if(go==0)
	{
		if(pokecount<72)
		{
			cout<<"\n\n\t\t\t\t\tGAME OVER!";
			cout<<"\n\t\t\t\tBetter Luck Next Time!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
		else if(pokecount==72)
		{
			cout<<"\n\n\t\t\t\t\tCONGRATULATIONS!!";
			cout<<"\n\t\t\t\tYou have successfully completed the theme by guessing all "<<pokecount<<" Pokemon!!!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
	}
}
void alola(int num,char name[],char poke[],char type[],char stage[],int &res,int &pokecount,int &hint,int &mistake,int go=0)
{
	if(num==1)
	{
		name="ROWLET";
		poke="_ _ _ _ _ _";
		type="GRASS/FLYING";
		stage="1st Stage";
	}
	else if(num==2)
	{
		name="DARTRIX";
		poke="_ _ _ _ _ _ _";
		type="GRASS/FLYING";
		stage="2nd Stage";
	}
	else if(num==3)
	{
		name="DECIDUEYE";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/GHOST";
		stage="3rd Stage";
	}
	else if(num==4)
	{
		name="LITTEN";
		poke="_ _ _ _ _ _";
		type="FIRE";
		stage="1st Stage";
	}
	else if(num==5)
	{
		name="TORRACAT";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE";
		stage="2nd Stage";
	}
	else if(num==6)
	{
		name="INCINEROAR";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIRE/DARK";
		stage="3rd Stage";
	}
	else if(num==7)
	{
		name="POPPLIO";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==8)
	{
		name="BROINNE";
		poke="_ _ _ _ _ _ _";
		type="WATER";
		stage="2nd Stage";
	}
	else if(num==9)
	{
		name="PRIMARINA";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/FAIRY";
		stage="3rd Stage";
	}
	else if(num==10)
	{
		name="PIKIPEK";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="1st Stage";
	}
	else if(num==11)
	{
		name="TRUMBEAK";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="2nd Stage";
	}
	else if(num==12)
	{
		name="TOUCANNON";
		poke="_ _ _ _ _ _ _ _ _";
		type="NORMAL/FLYING";
		stage="3rd Stage";
	}
	else if(num==13)
	{
		name="YUNGOOS";
		poke="_ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==14)
	{
		name="GUMSHOOS";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="2nd Stage";
	}
	else if(num==15)
	{
		name="GRUBBIN";
		poke="_ _ _ _ _ _ _";
		type="BUG";
		stage="1st Stage";
	}
	else if(num==16)
	{
		name="CHARJABUG";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG/ELECTRIC";
		stage="2nd Stage";
	}
	else if(num==17)
	{
		name="VIKAVOLT";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/ELECTRIC";
		stage="3rd Stage";
	}
	else if(num==18)
	{
		name="CRABRAWLER";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIGGHTING";
		stage="1st Stage";
	}
	else if(num==19)
	{
		name="CRABOMINABLE";
		poke="_ _ _ _ _ _ _ _ _ _ _ _";
		type="FIGHTING/ICE";
		stage="2nd Stage";
	}
	else if(num==20)
	{
		name="ORICORIO";
		poke="_ _ _ _ _ _ _ _";
		type="FIRE/FLYING";
		stage="1st Stage";
	}
	else if(num==21)
	{
		name="CUTIEFLY";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/FAIRY";
		stage="1st Stage";
	}
	else if(num==22)
	{
		name="RIBOMBEE";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/FAIRY";
		stage="2nd Stage";
	}
	else if(num==23)
	{
		name="ROCKRUFF";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK";
		stage="1st Stage";
	}
	else if(num==24)
	{
		name="LYCANROC";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK";
		stage="2nd Stage";
	}
	else if(num==25)
	{
		name="WISHIWASHI";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==26)
	{
		name="MAREANIE";
		poke="_ _ _ _ _ _ _ _";
		type="POISON/WATER";
		stage="2nd Stage";
	}
	else if(num==27)
	{
		name="TOXAPEX";
		poke="_ _ _ _ _ _ _";
		type="POISON/WATER";
		stage="3rd Stage";
	}
	else if(num==28)
	{
		name="MUDBRAY";
		poke="_ _ _ _ _ _ _";
		type="GROUND";
		stage="1st Stage";
	}
	else if(num==29)
	{
		name="MUDSDALE";
		poke="_ _ _ _ _ _ _ _";
		type="GROUND";
		stage="2nd Stage";
	}
	else if(num==30)
	{
		name="DEWPIDER";
		poke="_ _ _ _ _ _ _ _";
		type="WATER/BUG";
		stage="1st Stage";
	}
	else if(num==31)
	{
		name="ARAQUANID";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/BUG";
		stage="2nd Stage";
	}
	else if(num==32)
	{
		name="FOMANTIS";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==33)
	{
		name="LURANTIS";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==34)
	{
		name="MORELULL";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS/FAIRY";
		stage="1st Stage";
	}
	else if(num==35)
	{
		name="SHIINOTIC";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/FAIRY";
		stage="2nd Stage";
	}
	else if(num==36)
	{
		name="SALANDIT";
		poke="_ _ _ _ _ _ _ _";
		type="POISON/FIRE";
		stage="1st Stage";
	}
	else if(num==37)
	{
		name="SALAZZLE";
		poke="_ _ _ _ _ _ _ _";
		type="POISON/FIRE";
		stage="2nd Stage";
	}
	else if(num==38)
	{
		name="STUFFUL";
		poke="_ _ _ _ _ _ _";
		type="NORMAL/FIGHTING";
		stage="1st Stage";
	}
	else if(num==39)
	{
		name="BEWEAR";
		poke="_ _ _ _ _ _";
		type="NORMAL/FIGHTING";
		stage="2nd Stage";
	}
	else if(num==40)
	{
		name="BOUNSWEET";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS";
		stage="1st Stage";
	}
	else if(num==41)
	{
		name="STEENEE";
		poke="_ _ _ _ _ _ _";
		type="GRASS";
		stage="2nd Stage";
	}
	else if(num==42)
	{
		name="TSAREENA";
		poke="_ _ _ _ _ _ _ _";
		type="GRASS";
		stage="3rd Stage";
	}
	else if(num==43)
	{
		name="COMFEY";
		poke="_ _ _ _ _ _";
		type="FAIRY";
		stage="1st Stage";
	}
	else if(num==44)
	{
		name="ORANGURU";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==45)
	{
		name="PASSIMIAN";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIGHTING";
		stage="1st Stage";
	}
	else if(num==46)
	{
		name="WIMPOD";
		poke="_ _ _ _ _ _";
		type="BUG/WATER";
		stage="1st Stage";
	}
	else if(num==47)
	{
		name="GOLISOPOD";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG/WATER";
		stage="2nd Stage";
	}
	else if(num==48)
	{
		name="SANDYGAST";
		poke="_ _ _ _ _ _ _ _ _";
		type="GHOST/GROUND";
		stage="1st Stage";
	}
	else if(num==49)
	{
		name="PALOSSAND";
		poke="_ _ _ _ _ _ _ _ _";
		type="GHOST/GROUND";
		stage="2nd Stage";
	}
	else if(num==50)
	{
		name="PYUKUMUKU";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER";
		stage="1st Stage";
	}
	else if(num==51)
	{
		name="TYPE: NULL";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==52)
	{
		name="SILVALLY";
		poke="_ _ _ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==53)
	{
		name="MINIOR";
		poke="_ _ _ _ _ _";
		type="ROCK/FLYING";
		stage="1st Stage";
	}
	else if(num==54)
	{
		name="KOMALA";
		poke="_ _ _ _ _ _";
		type="NORMAL";
		stage="1st Stage";
	}
	else if(num==55)
	{
		name="TURTONATOR";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="FIRE/DRAGON";
		stage="1st Stage";
	}
	else if(num==56)
	{
		name="TOGEDEMARU";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="ELECTRIC/STEEL";
		stage="1st Stage";
	}
	else if(num==57)
	{
		name="MIMIKYU";
		poke="_ _ _ _ _ _ _";
		type="GHOST/FAIRY";
		stage="1st Stage";
	}
	else if(num==58)
	{
		name="BRUXISH";
		poke="_ _ _ _ _ _ _";
		type="WATER/PSYCHIC";
		stage="1st Stage";
	}
	else if(num==59)
	{
		name="DRAMPA";
		poke="_ _ _ _ _ _";
		type="NORMAL/DRAGON";
		stage="1st Stage";
	}
	else if(num==60)
	{
		name="DHELMISE";
		poke="_ _ _ _ _ _ _ _";
		type="GHOST/GRASS";
		stage="1st Stage";
	}
	else if(num==61)
	{
		name="JANGMO-O";
		poke="_ _ _ _ _ _ _ _";
		type="DRAGON";
		stage="1st Stage";
	}
	else if(num==62)
	{
		name="HAKAMO-O";
		poke="_ _ _ _ _ _ _ _";
		type="DRAGON/FIGHTING";
		stage="2nd Stage";
	}
	if(num==63)
	{
		name="KOMMO-O";
		poke="_ _ _ _ _ _ _";
		type="DRAGON/FIGHTING";
		stage="3rd Stage";
	}
	else if(num==64)
	{
		name="TAPU KOKO";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC/FAIRY";
		stage="1st Stage";
	}
	else if(num==65)
	{
		name="TAPU LELE";
		poke="_ _ _ _ _ _ _ _ _";
		type="PSYCHIC/FAIRY";
		stage="1st Stage";
	}
	else if(num==66)
	{
		name="TAPU BULU";
		poke="_ _ _ _ _ _ _ _ _";
		type="GRASS/FAIRY";
		stage="1st Stage";
	}
	else if(num==67)
	{
		name="TAPU FINI";
		poke="_ _ _ _ _ _ _ _ _";
		type="WATER/FAIRY";
		stage="1st Stage";
	}
	else if(num==68)
	{
		name="COSMOG";
		poke="_ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==69)
	{
		name="COSMOEM";
		poke="_ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==70)
	{
		name="SOLGALEO";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC/STEEL";
		stage="3rd Stage";
	}
	else if(num==71)
	{
		name="LUNALA";
		poke="_ _ _ _ _ _";
		type="PSYCHIC/GHOST";
		stage="3rd Stage";
	}
	else if(num==72)
	{
		name="NIHILEGO";
		poke="_ _ _ _ _ _ _ _";
		type="ROCK/POISON";
		stage="1st Stage";
	}
	else if(num==73)
	{
		name="BUZZWOLE";
		poke="_ _ _ _ _ _ _ _";
		type="BUG/FIGHTING";
		stage="1st Stage";
	}
	else if(num==74)
	{
		name="PHEROMOSA";
		poke="_ _ _ _ _ _ _ _ _";
		type="BUG/FIGHTING";
		stage="1st Stage";
	}
	else if(num==75)
	{
		name="XURKITREE";
		poke="_ _ _ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	else if(num==76)
	{
		name="CELESTEELA";
		poke="_ _ _ _ _ _ _ _ _ _";
		type="STEEL/FLYING";
		stage="1st Stage";
	}
	else if(num==77)
	{
		name="KARTANA";
		poke="_ _ _ _ _ _ _";
		type="GRASS/STEEL";
		stage="1st Stage";
	}
	else if(num==78)
	{
		name="GUZZLORD";
		poke="_ _ _ _ _ _ _ _";
		type="DARK/DRAGON";
		stage="1st Stage";
	}
	else if(num==79)
	{
		name="NECROZMA";
		poke="_ _ _ _ _ _ _ _";
		type="PSYCHIC";
		stage="1st Stage";
	}
	else if(num==80)
	{
		name="MAGEARNA";
		poke="_ _ _ _ _ _ _ _";
		type="STEEL/FAIRY";
		stage="1st Stage";
	}
	else if(num==81)
	{
		name="MARSHADOW";
		poke="_ _ _ _ _ _ _ _ _";
		type="FIGHTING/GHOST";
		stage="1st Stage";
	}
	else if(num==82)
	{
		name="POIPOLE";
		poke="_ _ _ _ _ _ _";
		type="POISON";
		stage="1st Stage";
	}
	else if(num==83)
	{
		name="NAGANADEL";
		poke="_ _ _ _ _ _ _ _ _";
		type="POISON/DRAGON";
		stage="2nd Stage";
	}
	else if(num==84)
	{
		name="STAKATAKA";
		poke="_ _ _ _ _ _ _ _ _";
		type="ROCK/STEEL";
		stage="1st Stage";
	}
	else if(num==85)
	{
		name="BLACEPHALON";
		poke="_ _ _ _ _ _ _ _ _ _ _";
		type="FIRE/GHOST";
		stage="1st Stage";
	}
	else if(num==86)
	{
		name="ZERAORA";
		poke="_ _ _ _ _ _ _";
		type="ELECTRIC";
		stage="1st Stage";
	}
	display(name,poke,type,stage,res,pokecount,hint,mistake);
	clear();
	if(go==0)
	{
		if(pokecount<86)
		{
			cout<<"\n\n\t\t\t\t\tGAME OVER!";
			cout<<"\n\t\t\t\tBetter Luck Next Time!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
		else if(pokecount==86)
		{
			cout<<"\n\n\t\t\t\t\tCONGRATULATIONS!!";
			cout<<"\n\t\t\t\tYou have successfully completed the theme by guessing all "<<pokecount<<" Pokemon!!!!";
			cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
			cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
			cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
			cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
			cout<<"\n\n\t\t\t\t\tThanks for Playing";
		}
	}
}
void start()
{
	int gd=DETECT,gm;
	char ent;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
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
	cout<<"\n\n\t1. To guess the name of the Pokemon, you will enter an alphabet-";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	{
		cout<<"\n\t\t-> If the alphabet is correct, it will be placed in the ";
		cout<<"\n\t\t   position(s) at which it appears.";
	}
	ent=getch();
	while(ent!='\r')
		ent=getch();
	{
		cout<<"\n\t\t-> If the alphabet is incorrect, i.e., it doesn't appear ";
		cout<<"\n\t\t   anywhere in the name, then you lose a life.";
	}
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\n\t2. A total of 10 lives will be given in the game-";
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\t\t-> For each lost life, a new line will appear on the screen.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\t\t-> These lines will form a man being hanged.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	{
		cout<<"\n\t\t-> The game is considered over if the complete image of the man";
		cout<<"\n\t\t   is formed.";
	}
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\n\t3. The game is divided on the basis of regions-";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	{
		cout<<"\n\t\t-> Hence, there are 7 themes of the game: Kanto, Johto, Hoenn, ";
		cout<<"\n\t\t   Sinnoh, Unova, Kalos, Alola.";
	}
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\n\t4. You can ask for hints if you feel stuck in the game-";
	ent=getch();
	if(ent=='\r')
		cout<<"\n\t\t-> There are two hints for each Pokemon: Type & Stage No.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	{
		cout<<"\n\t\t-> Even for Pokemon which do not evolve, the Stage No. will be ";
		cout<<"\n\t\t   shown as '1'.";
	}
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\n\t5. You can Quit the game at any point you want-";
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\t\t-> Just press '/' to Quit and Exit the game.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\t\t-> The game will not be saved if you Quit the Game.";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	{
		clear();
		cout<<"\n\n\t\t\tScoring System!!";
		cout<<"\n\n\t\t\t\t\t\tPress Enter to continue...";
		line(175,30,325,30);
		line(325,30,325,50);
		line(325,50,175,50);
		line(175,50,175,30);
	}
	ent=getch();
	while(ent!='\r')
		ent=getch();
	{
		cout<<"\n\n\t1. For each Pokemon correctly guessed, 10 points will be added to your";
		cout<<"\n\t   score";
	}
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\t2. For each Hint taken, 5 points will be deducted from your score";
	ent=getch();
	while(ent!='\r')
		ent=getch();
		cout<<"\n\t3. For each incorrect alphabet, 1 point will be deducted from your score";
	ent=getch();
	while(ent!='\r')
		ent=getch();
	clear();
}
void main()
{
	cout<<"\n\n\n\n\n\n\t\t\tWelcome to POKEMON HANGMAN!!!!!!!";
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
						k.open("Hangman.dat",ios::binary);
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
					f.open("Hangman.dat",ios::binary|ios::app);
					clrscr();
					int gno;
					p.setid(d-1);
					cout<<"\n";
					p.nameinput();
					cout<<"\n\t\t\t\tEnter Gen No.: ";
					cin>>gno;
					while(gno>8 || gno<1)
					{
						cout<<"\n\nPlease enter a Valid Gen No.(1-8): ";
						cin>>gno;
					}
					p.setgen(gno);
					int pg,h,m,gr=0;
					cout<<"\n\n\t\t\t\tEnter Pokemon Guessed: ";
					cin>>pg;
					while(gr==0)
					{
						if(gno==1 && pg<152 && pg>=0)
							gr=1;
						else if(gno==2 && pg<101 && pg>=0)
							gr=1;
						else if(gno==3 && pg<136 && pg>=0)
							gr=1;
						else if(gno==4 && pg<108 && pg>=0)
							gr=1;
						else if(gno==5 && pg<157 && pg>=0)
							gr=1;
						else if(gno==6 && pg<73 && pg>=0)
							gr=1;
						else if(gno==7 && pg<87 && pg>=0)
							gr=1;
						else if(gno==8 && pg<808 && pg>=0)
							gr=1;
						if(gr==0)
						{
							cout<<"\n\nNo. of Pokemon Guessed is invalid. Kindly reenter: ";
							cin>>pg;
						}
					}
					p.modp(pg);
					gr=0;
					cout<<"\n\n\t\t\t\tEnter Total Mistakes: ";
					cin>>m;
					while(gr==0)
					{
						if(m>=0 && m<(9*pg)+11)
							gr=1;
						if(gr==0)
						{
							cout<<"\n\nNo. of Mistakes is invalid. Kindly reenter: ";
							cin>>m;
						}
					}
					p.modm(m);
					gr=0;
					cout<<"\n\n\t\t\t\tEnter Hints Taken: ";
					cin>>h;
					while(gr==0)
					{
						if(h>=0)
							gr=1;
						if(gr==0)
						{
							cout<<"\n\nNo. of Hints is invalid. Kindly reenter: ";
							cin>>h;
						}
					}
					p.modh(h);
					cout<<"\n\n\t\t\t\tScore: "<<p.rs();
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
						f.open("Hangman.dat",ios::binary);
						while(f.read((char *)&p,sizeof(p)))
						{
							if(p.rid()==a)
							{
								cout<<"\n\n\tPlayer: ";
								cout<<p.rn();
								cout<<"\n\tGen: ";
								cout<<p.rg();
								cout<<"\n\tPokemon Guessed: ";
								cout<<p.rp();
								cout<<"\n\tTotal Mistakes: ";
								cout<<p.rm();
								cout<<"\n\tTotal Hints: ";
								cout<<p.rh();
								cout<<"\n\tScore: ";
								cout<<p.rs();
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
					fstream k("Hangman.dat",ios::binary|ios::in|ios::out);
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
						cout<<"\n\n\t1) Player";
						cout<<"\n\t2) Gen No.";
						cout<<"\n\t3) Pokemon Guessed";
						cout<<"\n\t4) Mistakes";
						cout<<"\n\t5) Hints";
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
							p.modn(n1);
							k.write((char *)&p,sizeof(p));
						}
						else if(ans==2)
						{
							int gennew;
							cout<<"\n\tEnter new Gen No.: ";
							cin>>gennew;
							while(gennew>8 || gennew<1)
							{
								cout<<"\n\n\tPlease enter a Valid Gen No.(1-8): ";
								cin>>gennew;
							}
							p.setgen(gennew);
							k.write((char *)&p,sizeof(p));
						}
						else if(ans==3)
						{
							int pokenew,gr=0;
							cout<<"\n\tEnter new Pokemon Guessed: ";
							cin>>pokenew;
							while(gr==0)
							{
								if(p.rg()==1 && pokenew<152 && pokenew>=0)
									gr=1;
								else if(p.rg()==2 && pokenew<101 && pokenew>=0)
									gr=1;
								else if(p.rg()==3 && pokenew<136 && pokenew>=0)
									gr=1;
								else if(p.rg()==4 && pokenew<108 && pokenew>=0)
									gr=1;
								else if(p.rg()==5 && pokenew<157 && pokenew>=0)
									gr=1;
								else if(p.rg()==6 && pokenew<73 && pokenew>=0)
									gr=1;
								else if(p.rg()==7 && pokenew<87 && pokenew>=0)
									gr=1;
								else if(p.rg()==8 && pokenew<808 && pokenew>=0)
									gr=1;
								if(gr==0)
								{
									cout<<"\n\nNo. of Pokemon Guessed is invalid. Kindly reenter: ";
									cin>>pokenew;
								}
							}
							p.modp(pokenew);
							k.write((char *)&p,sizeof(p));
						}
						else if(ans==4)
						{
							int mnew,gr=0;
							cout<<"\n\tEnter new Mistakes: ";
							cin>>mnew;
							while(gr==0)
							{
								if(mnew>=0 && mnew<(9*p.rp())+11)
									gr=1;
								if(gr==0)
								{
									cout<<"\n\nNo. of Mistakes is invalid. Kindly reenter: ";
									cin>>mnew;
								}
							}
							p.modm(mnew);
							k.write((char *)&p,sizeof(p));
						}
						else if(ans==5)
						{
							int hnew,gr=0;
							cout<<"\n\tEnter new Hints: ";
							cin>>hnew;
							while(gr==0)
							{
								if(hnew>=0)
									gr=1;
								if(gr==0)
								{
									cout<<"\n\nNo. of Hints is invalid. Kindly reenter: ";
									cin>>hnew;
								}
							}
							p.modh(hnew);
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
					f.open("Hangman.dat",ios::binary);
					while(f.read((char *)&p,sizeof(p)))
					{
						if(p.rid()==a)
						{
							cout<<"\n\n\tPlayer: ";
							cout<<p.rn();
							cout<<"\n\tGen: ";
							cout<<p.rg();
							cout<<"\n\tPokemon Guessed: ";
							cout<<p.rp();
							cout<<"\n\tTotal Mistakes: ";
							cout<<p.rm();
							cout<<"\n\tTotal Hints: ";
							cout<<p.rh();
							cout<<"\n\tScore: ";
							cout<<p.rs();
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
						f.open("Hangman.dat",ios::binary|ios::in|ios::out);
						while(f.read((char *)&p,sizeof(p)))
						{
							if(p.rid()==a)
							{
								cout<<"\n\n\tPlayer: ";
								cout<<p.rn();
								cout<<"\n\tGen: ";
								cout<<p.rg();
								cout<<"\n\tPokemon Guessed: ";
								cout<<p.rp();
								cout<<"\n\tTotal Mistakes: ";
								cout<<p.rm();
								cout<<"\n\tTotal Hints: ";
								cout<<p.rh();
								cout<<"\n\tScore: ";
								cout<<p.rs();
								c=1;
							}
						}
						if(a==0)
							break;
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
					ifstream k2("Hangman.dat",ios::binary);
					while(k2.read((char *)&p,sizeof(p)))
					{
						if(p.rid()!=a)
							k1.write((char *)&p,sizeof(p));
					}
					if(a==0)
						break;
					k1.close();
					k2.close();
					remove("Hangman.dat");
					rename("Temp.dat","Hangman.dat");
					cout<<"\n\n\nRecord deleted!\nDo you want to continue?[y/n]: ";
					cin>>ch1;
				}while(ch1=='y' || ch1=='Y');
			}
			if(num==5)
			{
				clrscr();
				ifstream k("Hangman.dat",ios::binary);
				int rmax=2,nl=6;
				while(k.read((char *)&p,sizeof(p)))
				{
					int rcount=length(p.rid());
					if(rcount>rmax)
						rmax=rcount;
					if(strlen(p.rn())>nl)
						nl=strlen(p.rn());
				}
				k.close();
				rmax=rmax/2;
				nl=nl/2;
				int w=2*(rmax+nl)+59;
				cout<<"\n\n";
				for(int o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n||"<<setw(rmax+2)<<"ID"<<setw(rmax+3)<<"||"<<setw(nl+4)<<"Player"<<setw(nl)<<"||"<<" Gen || Pokemon || Mistakes || Hints || Score ||";
				cout<<"\n";
				for(o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n";
				for(o=1;o<=w;o++)
					cout<<"-";
				cout<<"\n";
				ifstream f("Hangman.dat",ios::binary);
				while(f.read((char *)&p,sizeof(p)))
				{
					p.show(rmax,nl,1,3,4,2,2);
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
	ofstream f("Hangman.dat",ios::binary|ios::app);
	ifstream k("Hangman.dat",ios::binary);
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
	clrscr();
	p.setid(d);
	p.nameinput();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	start();
	int regnum=region();
	p.setgen(regnum);
	if(regnum==1)
	{
		srand(time(NULL));
		int order[151],temp,t=0;
		order[0]=(rand()%151)+1;
		for (int i=1; i<151; i++)
		{
			t=0;
			temp=(rand()%151)+1;
			for (int j=0;j<i;j++)
			{
				if(temp!=order[j])
				t++;
			}
			if(t==i)
			order[i]=temp;
			else
			i--;
		}
		int res=0,pokecount=0,mistake=0,hint=0;
		while(res!=1)
		{
			for (int k=0;k<151;k++)
			{
				char name[12],poke[24],type[15],stage[10];
				kanto(order[k],name,poke,type,stage,res,pokecount,hint,mistake);
				if(res!=0)
				break;
			}
			if(pokecount==151)
			break;
		}
		p.modp(pokecount);
		p.modm(mistake);
		p.modh(hint);
	}
	else if(regnum==2)
	{
		srand(time(NULL));
		int order[100],temp,t=0;
		order[0]=(rand()%100)+1;
		for (int i=1; i<100; i++)
		{
			t=0;
			temp=(rand()%100)+1;
			for (int j=0;j<i;j++)
			{
				if(temp!=order[j])
				t++;
			}
			if(t==i)
			order[i]=temp;
			else
			i--;
		}
		int res=0,pokecount=0,mistake=0,hint=0;
		while(res!=1)
		{
			for (int k=0;k<100;k++)
			{
				char name[12],poke[24],type[15],stage[10];
				johto(order[k],name,poke,type,stage,res,pokecount,hint,mistake);
				if(res!=0)
				break;
			}
			if(pokecount==100)
			break;
		}
		p.modp(pokecount);
		p.modm(mistake);
		p.modh(hint);
	}
	else if(regnum==3)
	{
		srand(time(NULL));
		int order[135],temp,t=0;
		order[0]=(rand()%135)+1;
		for (int i=1; i<135; i++)
		{
			t=0;
			temp=(rand()%135)+1;
			for (int j=0;j<i;j++)
			{
				if(temp!=order[j])
				t++;
			}
			if(t==i)
			order[i]=temp;
			else
			i--;
		}
		int res=0,pokecount=0,mistake=0,hint=0;
		while(res!=1)
		{
			for (int k=0;k<135;k++)
			{
				char name[12],poke[24],type[15],stage[10];
				hoenn(order[k],name,poke,type,stage,res,pokecount,hint,mistake);
				if(res!=0)
				break;
			}
			if(pokecount==135)
			break;
		}
		p.modp(pokecount);
		p.modm(mistake);
		p.modh(hint);
	}
	else if(regnum==4)
	{
		srand(time(NULL));
		int order[107],temp,t=0;
		order[0]=(rand()%107)+1;
		for (int i=1; i<107; i++)
		{
			t=0;
			temp=(rand()%107)+1;
			for (int j=0;j<i;j++)
			{
				if(temp!=order[j])
				t++;
			}
			if(t==i)
			order[i]=temp;
			else
			i--;
		}
		int res=0,pokecount=0,mistake=0,hint=0;
		while(res!=1)
		{
			for (int k=0;k<107;k++)
			{
				char name[12],poke[24],type[15],stage[10];
				sinnoh(order[k],name,poke,type,stage,res,pokecount,hint,mistake);
				if(res!=0)
				break;
			}
			if(pokecount==107)
			break;
		}
		p.modp(pokecount);
		p.modm(mistake);
		p.modh(hint);
	}
	else if(regnum==5)
	{
		srand(time(NULL));
		int order[156],temp,t=0;
		order[0]=(rand()%156);
		for (int i=1; i<156; i++)
		{
			t=0;
			temp=(rand()%156);
			for (int j=0;j<i;j++)
			{
				if(temp!=order[j])
				t++;
			}
			if(t==i)
			order[i]=temp;
			else
			i--;
		}
		int res=0,pokecount=0,mistake=0,hint=0;
		while(res!=1)
		{
			for (int k=0;k<156;k++)
			{
				char name[12],poke[24],type[15],stage[10];
				unova(order[k],name,poke,type,stage,res,pokecount,hint,mistake);
				if(res!=0)
				break;
			}
			if(pokecount==156)
			break;
		}
		p.modp(pokecount);
		p.modm(mistake);
		p.modh(hint);
	}
	else if(regnum==6)
	{
		srand(time(NULL));
		int order[72],temp,t=0;
		order[0]=(rand()%72)+1;
		for (int i=1; i<72; i++)
		{
			t=0;
			temp=(rand()%72)+1;
			for (int j=0;j<i;j++)
			{
				if(temp!=order[j])
				t++;
			}
			if(t==i)
			order[i]=temp;
			else
			i--;
		}
		int res=0,pokecount=0,mistake=0,hint=0;
		while(res!=1)
		{
			for (int k=0;k<72;k++)
			{
				char name[12],poke[24],type[15],stage[10];
				kalos(order[k],name,poke,type,stage,res,pokecount,hint,mistake);
				if(res!=0)
				break;
			}
			if(pokecount==72)
			break;
		}
		p.modp(pokecount);
		p.modm(mistake);
		p.modh(hint);
	}
	else if(regnum==7)
	{
		srand(time(NULL));
		int order[86],temp,t=0;
		order[0]=(rand()%86)+1;
		for (int i=1; i<86; i++)
		{
			t=0;
			temp=(rand()%86)+1;
			for (int j=0;j<i;j++)
			{
				if(temp!=order[j])
				t++;
			}
			if(t==i)
			order[i]=temp;
			else
			i--;
		}
		int res=0,pokecount=0,mistake=0,hint=0;
		while(res!=1)
		{
			for (int k=0;k<86;k++)
			{
				char name[12],poke[24],type[15],stage[10];
				alola(order[k],name,poke,type,stage,res,pokecount,hint,mistake);
				if(res!=0)
				break;
			}
			if(pokecount==86)
			break;
		}
		p.modp(pokecount);
		p.modm(mistake);
		p.modh(hint);
	}
	else if(regnum==8)
	{
		srand(time(NULL));
		int order[807],temp,t=0;
		order[0]=(rand()%807)+1;
		for (int i=1; i<807; i++)
		{
			t=0;
			temp=(rand()%807)+1;
			for (int j=0;j<i;j++)
			{
				if(temp!=order[j])
				t++;
			}
			if(t==i)
			order[i]=temp;
			else
			i--;
		}
		int res=0,pokecount=0,mistake=0,hint=0;
		while(res!=1)
		{
			for (int k=0;k<807;k++)
			{
				char name[12],poke[24],type[15],stage[10];
				if(order[k]>0 && order[k]<=151)
					kanto(order[k],name,poke,type,stage,res,pokecount,hint,mistake,1);
				else if(order[k]>151 && order[k]<=251)
					johto(order[k]-151,name,poke,type,stage,res,pokecount,hint,mistake,1);
				else if(order[k]>251 && order[k]<=386)
					hoenn(order[k]-251,name,poke,type,stage,res,pokecount,hint,mistake,1);
				else if(order[k]>386 && order[k]<=493)
					sinnoh(order[k]-386,name,poke,type,stage,res,pokecount,hint,mistake,1);
				else if(order[k]>493 && order[k]<=649)
					unova(order[k]-494,name,poke,type,stage,res,pokecount,hint,mistake,1);
				else if(order[k]>649 && order[k]<=721)
					kalos(order[k]-649,name,poke,type,stage,res,pokecount,hint,mistake,1);
				else if(order[k]>721 && order[k]<=807)
					alola(order[k]-721,name,poke,type,stage,res,pokecount,hint,mistake,1);
				if(pokecount<807)
				{
					cout<<"\n\n\t\t\t\t\tGAME OVER!";
					cout<<"\n\t\t\t\tBetter Luck Next Time!!";
					cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
					cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
					cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
					cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
					cout<<"\n\n\t\t\t\t\tThanks for Playing";
				}
				else if(pokecount==807)
				{
					cout<<"\n\n\t\t\t\t\tCONGRATULATIONS!!";
					cout<<"\n\t\t\t\tYou have successfully completed the theme by guessing all "<<pokecount<<" Pokemon!!!!";
					cout<<"\n\n\t\t\t\tTOTAL SCORE: "<<(pokecount*10)-(hint*5)-mistake;
					cout<<"\n\t\t\t\tTOTAL POKEMON GUESSED: "<<pokecount;
					cout<<"\n\t\t\t\tTOTAL MISTAKES: "<<mistake;
					cout<<"\n\t\t\t\tTOTAL HINTS TAKEN: "<<hint;
					cout<<"\n\n\t\t\t\t\tThanks for Playing";
				}
				if(res!=0)
				break;
			}
			if(pokecount==807)
			break;
		}
		p.modp(pokecount);
		p.modm(mistake);
		p.modh(hint);
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