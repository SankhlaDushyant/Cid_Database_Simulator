#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>
class forensic_lab //for the forensic lab report
  { public:
    char blood[20];
    char finger[20];
    char condition[200];
    char condition1[200];
    void enter_forensic();
    void display2();
    void write2();
  }f1;
class list_of_suspects  //for the suspects list
  {public:
   int primes;
   int no_of_suspect;
   char suspect[20][20];
   char prime[20][20];
   int no_of_evidences;
   char list_of_evidences[20][20];
   void no_of_suspects();
   void prime_suspects();
   void evidences();
   void display3();
   void write3();
  }s1;
class datafile  //main class
{
 int choice;
 int age;
 char gender[20];
 char name[50];
 char feature[200];
 public:
   void opencase();
   void selection();
   void delete1();
   void modify();
   void enter_details();
   void load();
   void bullet();
   void display1();
   void write1();
}d1;
   void list_of_suspects::no_of_suspects() //takes the suspects input
   {
     cleardevice;
     moveto(100,0);
     setusercharsize(1 ,1 , 1 , 1);
     outtext(" SUSPECTS & EVIDENCES ");
     cout<<"\n"<<"\n"<<"\n"<<"\t Enter the no of suspects : ";
     cin>>no_of_suspect;
     for(int i=0;i<no_of_suspect;i++)
    {
      cout<<"\n"<<"\t Enter the suspect no "<<i+1<<" : ";
      cin>>suspect[i];
    }
  }
   void list_of_suspects::prime_suspects()
   {
    cout<<"\n"<<"\t Enter the prime suspects : ";
    cin>>primes;
     for(int i=0;i<primes;i++)
    {
     cout<<"\n"<<"\t Enter the prime suspects"<<i+1<<" : ";
    cin>>prime[i];
    }
   }
    void list_of_suspects::evidences() //takes the evidence input
    {
	cout<<"\n"<<"\t Enter the number of evidences : ";
	cin>>no_of_evidences;
	  for(int i=0;i<no_of_evidences;i++)
	 {
	  cout<<"\n"<<"\t state the evidences found : ";
	  cin>>list_of_evidences[i];
	 }
    }
    void list_of_suspects::display3() //displays suspects list and evidence
  {
   cout<<"\n"<<"\n"<<"\n"<<"\t The number of suspects are    : ";
   cout<<no_of_suspect;
   for(int i=0;i<no_of_suspect;i++)
   {
    cout<<"\n"<<"\t The suspects names are        : ";
    cout<<suspect[i];
   }
   cout<<"\n\n"<<"\t The no of prime suspects are     : ";
   cout<<primes;
   for(i=0;i<primes;i++)
   {
    cout<<"\n"<<"\t The prime suspect names are   : ";
    cout<<prime[i];
   }
    cout<<"\n\n"<<"\t The number of evidences found : ";
   cout<<no_of_evidences;
   for(i=0;i<no_of_evidences;i++)
   {
   cout<<"\n"<<"\t The list of evidences  are    : ";
   cout<<list_of_evidences[i];
   }
   char choice4;
   cout<<"\n\n                 Do u want to display more details: ";
   cin>>choice4;
   if(choice4=='y'||choice4=='Y')
    {
	 clrscr();
	 cleardevice();
	 int choice3;
	 moveto(50,10);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 1.General details ");
	 moveto(200,100);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 2.Forensic ");
	 moveto(200,250);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 3.Suspects ");
	 moveto(50,350);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 4.Exit ");
	 cin>>choice3;
	 if(choice3==1)
	   {
	     clrscr();
	     cleardevice();
	     moveto(200,0);
	     setusercharsize(1 ,1 , 1 , 1);
	     outtext(" GENERAL DETAILS ");
	     cout<<"\n"<<"\n"<<"\n";
	     d1.display1();
	     delay(1000);

	   }
	 else if(choice3==2)
	   {
	     clrscr();
	     cleardevice();
	     moveto(200,0);
	     setusercharsize(1 ,1 , 1 , 1);
	     outtext(" FORENSIC REPORT ");
	     cout<<"\n"<<"\n"<<"\n";
	     f1.display2();
	     delay(1000);
	   }
	 else if(choice3==3)
	   {
	    clrscr();
	    cleardevice();
	    moveto(200,0);
	    setusercharsize(1 ,1 , 1 , 1);
	    outtext(" SUSPECTS REPORT ");
	    cout<<"\n"<<"\n"<<"\n";
	    s1.display3();
	    delay(1000);
	   }
     else
     exit(0);
   }
  }
   void list_of_suspects::write3() //input the details in file
  {
    ofstream fout;
    fout.open("suspect.dat",ios::binary|ios::out);
    cleardevice();
    s1.no_of_suspects();
    s1.prime_suspects();
    s1.evidences();
    fout.write((char*)&s1,sizeof(s1));
    fout.close();
  }
 void datafile::display1() //display general details
  {
   cout<<"\n"<<"\n"<<"\n"<<"\t Name : ";
   puts(name);
   cout<<"\t Age : ";
   cout<<age;
   cout<<"\n"<<"\t Gender : ";
   puts(gender);
   cout<<"\t Features : ";
   puts(feature);
   char choice4;
   cout<<"\n                  Do u want to display more details: ";
   cin>>choice4;
   if(choice4=='y'||choice=='Y')
    {
	 clrscr();
	 cleardevice();
	 int choice3;
	 moveto(50,10);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 1.General details ");
	 moveto(200,100);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 2.Forensic ");
	 moveto(200,250);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 3.Suspects ");
	 moveto(50,350);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 4.Exit ");
	 cin>>choice3;
	 if(choice3==1)
	   {
	     clrscr();
	     cleardevice();
	     moveto(200,0);
	     setusercharsize(1 ,1 , 1 , 1);
	     outtext(" GENERAL DETAILS ");
	     cout<<"\n"<<"\n"<<"\n";
	     d1.display1();
	     delay(1000);
		     }
	 else if(choice3==2)
	   {
	     clrscr();
	     cleardevice();
	     moveto(200,0);
	     setusercharsize(1 ,1 , 1 , 1);
	     outtext(" FORENSIC REPORT ");
	     cout<<"\n"<<"\n"<<"\n";
	     f1.display2();
	     delay(1000);
	   }
	 else if(choice3==3)
	   {
	    clrscr();
	    cleardevice();
	    moveto(200,0);
	    setusercharsize(1 ,1 , 1 , 1);
	    outtext(" SUSPECTS REPORT ");
	    cout<<"\n"<<"\n"<<"\n";
	    s1.display3();
	   }
      else
      exit(0);
  }
 }
  void datafile::write1() //write details in file
  {
    ofstream fout;
    fout.open("cid.dat",ios::binary|ios::out);
    d1.enter_details();
    fout.write((char*)&d1,sizeof(d1));
    fout.close();
  }
  void forensic_lab::display2() //display forensic lab report
  {
   cout<<"\n\n";
   cout<<"\n"<<"\t Blood report is : ";
   puts(blood);
   cout<<"\n"<<"\t Finger scan is : ";
   puts(finger);
   char choice4;
   cout<<"\n                      Do u want to display more details: ";
   cin>>choice4;
   if(choice4=='y'||choice4=='Y')
    {
	 clrscr();
	 cleardevice();
	 int choice3;
	 moveto(50,10);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 1.General details ");
	 moveto(200,100);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 2.Forensic ");
	 moveto(200,250);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 3.Suspects ");
	 moveto(50,350);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 4.Exit ");
	 cin>>choice3;
	 if(choice3==1)
	   {
	     clrscr();
	     cleardevice();
	     moveto(200,0);
	     setusercharsize(1 ,1 , 1 , 1);
	     outtext(" GENERAL DETAILS ");
	     cout<<"\n"<<"\n"<<"\n";
	     d1.display1();
	     delay(1000);
	   }
	 else if(choice3==2)
	   {
	     clrscr();
	     cleardevice();
	     moveto(200,0);
	     setusercharsize(1 ,1 , 1 , 1);
	     outtext(" FORENSIC REPORT ");
	     cout<<"\n"<<"\n"<<"\n";
	     f1.display2();
	     delay(1000);
	   }
	 else if(choice3==3)
	   {
	    clrscr();
	    cleardevice();
	    moveto(200,0);
	    setusercharsize(1 ,1 , 1 , 1);
	    outtext(" SUSPECTS REPORT ");
	    cout<<"\n"<<"\n"<<"\n";
	    s1.display3();
	    delay(1000);
	   }
      else
      exit(0);
  }
 }
   void forensic_lab::write2() //write details in file
  {
    ofstream fout;
    fout.open("forensic.dat",ios::binary|ios::out);
    f1.enter_forensic();
    fout.write((char*)&f1,sizeof(f1));
    fout.close();
  }

  void datafile::bullet() //graphic function........makes a gun appear
  {
   setfillstyle(SLASH_FILL,getmaxcolor());
     for(int i=0;i<400;i++)
     {
      delay(10);
      cleardevice();
      moveto(60,60); //makes gun
      lineto(230,60);
      lineto(230,130);
      lineto(80,130);
      lineto(80,200);
      lineto(40,200);
      lineto(40,60);
      lineto(60,60);
      moveto(100,130);
      lineto(100,150);
      lineto(80,150);
      moveto(90,130);
      lineto(90,140);
      lineto(80,140);
      arc(260,95,130,230,45);
      bar(260+i,100,300+i,60); // makes bullet
      arc(460,360,360+i,360,80); // makes olypic rings......rotate
      arc(360,360,360+i,360,80);
      arc(260,360,360+i,360,80);
      arc(160,360,360+i,360,80);
      arc(460,360,360+i,360,60);
      arc(360,360,360+i,360,60);
      arc(260,360,360+i,360,60);
      arc(160,360,360+i,360,60);
      arc(460,360,360+i,360,40);
      arc(360,360,360+i,360,40);
      arc(260,360,360+i,360,40);
      arc(160,360,360+i,360,40);
    }
 }
  void datafile::load() //load function
  {
     setfillstyle(SLASH_FILL,BLUE);
     for(int i=0;i<101;i++)
      {  randomize();
	delay(90);
	rectangle(319-54-100,239-52,319+54+100,239+52);
	bar(319-50-i,239-50,319+50+i,239+50);
	gotoxy(32,9);
	i=i+0;
	cout<<"LOADING "<<i<<"%";
      }
   }
  void forensic_lab::enter_forensic() //takes  forensic details
  {
   clrscr();
   cleardevice();
   moveto(170,0);
   setusercharsize(1 ,1 , 1 , 1);
   outtext(" FORENSIC DEPARTMENT ");
   cout<<"\n"<<"\n"<<"\n Enter the condition of the body before evaluation : ";
   gets(condition);
   cout<<"\n Enter the condition of internal organs : ";
   gets(condition1);
   cout<<"\n Enter the blood test report : ";
   gets(blood);
   cout<<"\n Enter the finger scan report : ";
   gets(finger);
   clrscr();
  }

  void datafile::opencase() //takes in forensic,suspect and general details
  {
      clrscr();
      d1.selection();
  }
  void datafile::enter_details() //takes in user choice......
  {
    clrscr();
    cleardevice();
    moveto(200,0);
    setusercharsize(1 ,1 , 1 , 1);
    outtext(" GENERAL DETAILS ");
    cout<<"\n"<<"\n"<<"\n Enter the gender of body  : ";
    gets(gender);
    cout<<"\n Enter distinctive injury features  : ";
    gets(feature);
    cout<<"\n Enter name of the body : ";
    gets(name);
    cout<<"\n Enter approx. age : ";
    cin>>age;
  }
 void datafile::delete1() //deletes selected file
   {
     clrscr();
     cleardevice();
     ifstream fin;
     ofstream fout;
     int choice4;
     cout<<"\n Enter the file to be deleted"<<"\n 1.CID.DAT"<<"\t\t 2.SUSPECT.DAT"<<"\t\t 3.FORENSIC.DAT :";
     cin>>choice4;
     switch(choice4)
      {
       case '1':
	fin.open("cid.dat",ios::nocreate); //deletes the content of cid file
	fout.open("temp.dat",ios::out);
	while(!fin.eof())
	{
		fin.read((char*)&d1,sizeof(d1));
		fout.write((char*)&d1,sizeof(d1));
	}
	fin.close();
	fout.close();
	remove("cid.dat");
	break;

       case '2':
	 fin.open("suspect.dat",ios::nocreate); //deletes the content of suspect file
	 fout.open("temp.dat",ios::out);
	 while(!fin.eof());
	 {
	  fin.read((char*)&s1,sizeof(s1));
	  fout.write((char*)&s1,sizeof(s1));
	 }
		fin.close();
		fout.close();
		remove("suspect.dat");
		break;

       case '3':
	fin.open("forensic.dat",ios::nocreate); //deletes the content of forensic file
	fout.open("temp.dat",ios::out);
	while(!fin.eof());
	{
		fin.read((char*)& f1,sizeof(f1));
		fout.write((char*)& f1,sizeof(f1));
	}
	fin.close();
	fout.close();
		remove("forensic.dat");
		break;

     default: cout<<"\n Entered file not found";
	      break;
   }
 }
   void datafile::modify() //modify function
   {
    clrscr();
    cleardevice();
    ifstream fin;
    ofstream fout;
    int pos;
    char choice2;
    cout<<"\n Enter the file u want to modify"<<"\n 1.CID.DAT"<<"\t\t 2.SUSPECT.DAT"<<"\t\t 3.FORENSIC.DAT :";
    cin>>choice2;
    switch(choice2)
    {
      case '1':
	       fin.open("cid.dat",ios::in|ios::out|ios::binary); //modify the content of cid file
	       while(!fin.eof())
		 {
		  pos=fin.tellg();
		  cout<<pos;
		  fin.read((char*)&d1,sizeof(d1));
		  cout<<"\nEnter the new details:";
		  d1.enter_details();
		  fin.seekg(pos);
		  fout.write((char*)&d1,sizeof(d1));
		 }
		fin.close();
		break;

       case '2':
	      fin.open("suspect.dat",ios::in|ios::out|ios::binary); //modify the contet of suspect file
	      while(!fin.eof())
		  {
		    pos=fin.tellg();
		    fin.read((char*)&s1,sizeof(s1));
		    cout<<"\nEnter the new details:";
		    clrscr();
                    cleardevice();
                    s1.no_of_suspects();
		    s1.prime_suspects();
		    s1.evidences();
		    fin.seekg(pos);
		    fout.write((char*)&s1,sizeof(s1));
		  }
		  fin.close();
		  break;

	case '3':
		fin.open("forensic.dat",ios::in|ios::out|ios::binary); //modify the content of forensic file
		while(!fin.eof())
		 {
		    pos=fin.tellg();
		    fin.read((char*)&f1,sizeof(f1));
		    cout<<"\nEnter the new details:";
		    f1.enter_forensic();
		    fin.seekg(pos);
		    fout.write((char*)&f1,sizeof(f1));
		 }
		 fin.close();
		 break;

	default : cout<<"\n Wrong filename";
		   break;
    }
  }
  void datafile::selection()
  {
   cleardevice();
   int choice;
   cout<<"\n Select the type of case  : ";
   endl;
   cleardevice();
   moveto(80,50);
   setusercharsize(1 ,1 , 1 , 1);
   outtext("1.OPENCASE ");
   moveto(80,100);
   setusercharsize(1 ,1 , 1 , 1);
   outtext("2.MODIFY ");
   moveto(80,150);
   setusercharsize(1 ,1 , 1 , 1);
   outtext("3.DELETE ");
   moveto(80,200);
   setusercharsize(1 ,1 , 1 , 1);
   outtext("4.EXIT ");
   moveto(300,30);
   lineto(20,380);
   lineto(580,380);
   lineto(300,30);
   moveto(290,470);
   lineto(40,160);
   lineto(580,160);
   lineto(290,470);
   cin>>choice;
   switch(choice)
     {case 1:
	  {
	    d1.write1();
	    f1.write2();
	    s1.write3();
	  }
	   break;

      case 2:
	  {
	    d1.modify();
	    if(strcmp("filename","cid.dat"))
	       {
		 d1.display1();

	       }
	    if(strcmp("filename","suspect.dat"))
	       {
		 f1.display2();
	       }
	    if(strcmp("filename","forensic.dat"))
	       {
		 s1.display3();
	       }
	  }
	    break;

      case 3:
	  {
	    d1.delete1();
	    cout<<"\t FILE DELETED.............. ";
	  }
	    break;
      case 4:
	  {
	    exit(0);
	  }
	    break;
      default : cout<<"\n wrong choice!!!!!!!!";
		break;
   }
 }

  void main()
   {
     clrscr();
     int choice1;
     int gd=DETECT,gm;
     int xasp,yasp;
     initgraph(&gd, &gm,"d:\\tc\\bgi");
     int midx = getmaxx() / 2;
     int midy = getmaxy() / 2;
     int xmax = getmaxx();
     int ymax = getmaxx();
     cleardevice();
     d1.load();
     clrscr();
     cleardevice();
     getaspectratio(&xasp, &yasp);
     setaspectratio(xasp/2, yasp);
     cleardevice();
     d1.bullet(); //calls bullet function
     delay(200);
     setfillstyle(EMPTY_FILL,getmaxcolor());
     bar3d(319-190,239-70,319+190,239+70,10,1); //makes a 3d bar
     settextstyle(TRIPLEX_FONT, 0, 4);
     moveto(midx-160,midy-30);
     setusercharsize(3,2,1,1);
     outtext("CID DATABASE");
     settextstyle(SMALL_FONT, 0, 6);
     moveto(300,400);
     outtext(" BY");
     settextstyle(SMALL_FONT, 0, 6);
     moveto(330,420);
     outtext(" Dushyant,Hrishikesh and Naim ");
     delay(5000);
     clrscr();
     cleardevice();
     setcolor(getmaxcolor());
     moveto(300,30); //makes a star
     lineto(20,380);
     lineto(580,380);
     lineto(300,30);
     moveto(290,470);
     lineto(40,160);
     lineto(580,160);
     lineto(290,470);
     settextstyle(TRIPLEX_FONT, 0, 4);
     moveto(135,225);
     setusercharsize(3, 2, 1, 1);
     outtext(" CID Database ");
     cout<<endl;
     cout<<"\n Enter process to performed  :";
     moveto(0,40);
     setusercharsize(1 ,1 , 1 , 1);
     outtext(" 1.Addcase ");
     moveto(0,70);
     setusercharsize(1 ,1 , 1, 1);
     outtext(" 2.Refercase ");
     moveto(0,100);
     setusercharsize(1 ,1 , 1, 1);
     outtext(" 3.Report ");
     moveto(400,50);
     setusercharsize(1 ,1 , 1, 1);
     outtext(" 4.Exit ");
     cin>>choice1;
     cleardevice();
     if(choice1==1)
	{
	d1.opencase();
	 clrscr();
	 cleardevice();
	 moveto(300,30);//makes a star
	 lineto(20,380);
	 lineto(580,380);
	 lineto(300,30);
	 moveto(290,470);
	 lineto(40,160);
	 lineto(580,160);
	 lineto(290,470);
	 int choice3;
	 moveto(50,10);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 1.General details ");
	 moveto(200,100);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 2.Forensic ");
	 moveto(200,250);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 3.Suspects ");
	 moveto(50,350);
	 setusercharsize(1 ,1 , 1, 1);
	 outtext(" 4.Exit ");
	 cin>>choice3;
	 if(choice3==1)
	   {
	     clrscr();
	     cleardevice();
	     moveto(200,0);
	     setusercharsize(1 ,1 , 1 , 1);
	     outtext(" GENERAL DETAILS ");
	     cout<<"\n"<<"\n"<<"\n";
	     d1.display1();
	   }
	 else if(choice3==2)
	   {
	     clrscr();
	     cleardevice();
	     moveto(200,0);
	     setusercharsize(1 ,1 , 1 , 1);
	     outtext(" FORENSIC REPORT ");
	     cout<<"\n"<<"\n"<<"\n";
	     f1.display2();
	   }
	 else if(choice3==3)
	   {
	    clrscr();
	    cleardevice();
	    moveto(200,0);
	    setusercharsize(1 ,1 , 1 , 1);
	    outtext(" SUSPECTS REPORT ");
	    cout<<"\n"<<"\n"<<"\n";
	    s1.display3();
	   }
	}

      else if(choice1==2)
       {
	 char filename[30];
	 cout<<" Enter the file to be opened : ";
	 gets(filename);
	 if(strcmp(filename,"cid.dat")==0)
	{
	 ifstream fin;
	 fin.open("cid.dat",ios::in|ios::binary);
	 while(!fin.eof())
	 {
	   fin.read((char*)&d1,sizeof(d1));
	   if(fin.eof())
	      break;
	   d1.display1();
	 }
	 fin.close();
	 delay(1000);
	 d1.opencase();
	}
	 else if(strcmp(filename,"forensic.dat")==0)
	{
	 ifstream fin;
	 fin.open("forensic.dat",ios::in|ios::binary);
	 while(!fin.eof())
	   {
	       fin.read((char*)&f1,sizeof(f1));
	       if(fin.eof())
		 break;
	       f1.display2();
	   }
	       fin.close();
	   delay(1000);
	   d1.opencase();
	}

	else if(strcmp(filename,"suspect.dat")==0)
	{
	 ifstream fin;
	 fin.open("suspect.dat",ios::in|ios::binary);
	 while(!fin.eof())
	  {
		fin.read((char*)&s1,sizeof(s1));
		if(fin.eof())
		break;
		s1.display3();
	  }
	    fin.close();
	   delay(1000);
	   d1.opencase();
       }
       else
	 cout<<" Wrong choice ";
     }
     else if(choice1==3)// final report input
     {
       char a[50],b[50],c[50],d[50],e[50],f[50],g[50],h[50],i[50],j[50],k[50],l[50],m[50];
       setcolor(getmaxcolor());
       moveto(120,60);
       setusercharsize(1 ,1 , 1 , 1);
       outtext(" FOR AUTHORITY ");
       cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\t"<<" * Area of recovery           : ";
       cout<<"\t"<<"\t"<<"\t";cin>>a;
       cout<<"\t"      <<" * Date of incident           : ";
       cout<<"\t"<<"\t"<<"\t";cin>>b;
       cout<<"\t"      <<" * Status of case             : ";
       cout<<"\t"<<"\t"<<"\t";cin>>c;
       cout<<"\t"      <<" * Expected lenght of case    : ";
       cout<<"\t"<<"\t"<<"\t";cin>>d;
       cout<<"\t"      <<" * Has family been informed   : ";
       cout<<"\t"<<"\t"<<"\t";cin>>e;
       cout<<"\t"      <<" * Severity of case           : ";
       cout<<"\t"<<"\t"<<"\t";cin>>f;
       cout<<"\t"      <<" * Name of branch             : ";
       cout<<"\t"<<"\t"<<"\t";cin>>g;
       cout<<"\t"      <<" * Name of head handling case : ";
       cout<<"\t"<<"\t"<<"\t";cin>>h;
       moveto(150,260);
       setusercharsize(1 ,1 , 1 , 1);
       outtext(" CASE BRIEFING ");
       cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\t"<<" * Foresic report              : ";
       cout<<"\t"<<"\t"<<"\t";cin>>i;
       cout<<"\t"                        <<" * Suspects list               : ";
       cout<<"\t"<<"\t"<<"\t";cin>>j;
       cout<<"\t"                        <<" * Details of the person dead  : ";
       cout<<"\t"<<"\t"<<"\t";cin>>k;
       cout<<"\t"                        <<" * Name of person              : ";
       cout<<"\t"<<"\t"<<"\t";gets(l);
       cout<<"\t"                        <<" * Age                         : ";
       cout<<"\t"<<"\t"<<"\t";cin>>m;
       setlinestyle(SOLID_LINE,1,1);
       moveto(0,50);
       lineto(xmax,50);
       moveto(50,0);
       lineto(50,ymax);
       moveto(450,0);
       lineto(450,ymax);
	setfillstyle(SOLID_FILL,BLUE);
       bar3d(0, 0,50,50, 0, 0);
	setfillstyle(SOLID_FILL,GREEN);
       bar3d(0, 0,30,30, 0, 0);
	setfillstyle(SOLID_FILL,RED);
       bar3d(0, 0,10,10, 0, 0);
       moveto(200,0);
       setusercharsize(1 ,1 , 1 , 1);
       outtext(" REPORT ");
       moveto(460,0);
       setusercharsize(1 ,1 , 1 , 1);
       outtext(" ANALYSIS ");
	 moveto(90,90);// star intended as a stamp
	 lineto(80,200);
	 lineto(180,160);
	 lineto(90,90);
	 moveto(55,140);
	 lineto(160,100);
	 lineto(140,210);
	 lineto(55,140);
	delay(10000);
       clrscr();
       cleardevice();
       setcolor(getmaxcolor());
       moveto(90,105);
       setusercharsize(1 ,1 , 1 , 1);
       outtext(" FORENSIC DEPARTMENT ");
       cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\t";
	 ifstream fin;
	 fin.open("forensic.dat",ios::in|ios::binary);
	 while(!fin.eof())
	   {
	       fin.read((char*)&f1,sizeof(f1));
	       if(fin.eof())
		 break;
	       f1.display2();
	   }
	       fin.close();
	  moveto(200,225);
	  setusercharsize(1 ,1 , 1 , 1);
	  outtext(" SUSPECTS LIST ");
	  fin.open("suspect.dat",ios::in|ios::binary);
	  while(!fin.eof())
	   {
		fin.read((char*)&s1,sizeof(s1));
		if(fin.eof())
		break;
		cout<<"\n";
		s1.display3();
	   }
	    fin.close();
       setlinestyle(SOLID_LINE,1,1);
       moveto(0,50);
       lineto(xmax,50);
       moveto(50,0);
       lineto(50,ymax);
       setfillstyle(SOLID_FILL,BLUE);
       bar3d(0, 0,50,50, 0, 0);
       setfillstyle(SOLID_FILL,GREEN);
       bar3d(0, 0,30,30, 0, 0);
       setfillstyle(SOLID_FILL,RED);
       bar3d(0, 0,10,10, 0, 0);
       moveto(200,0);
       setusercharsize(1 ,1 , 1 , 1);
       outtext(" REPORT ");
	 moveto(90,90); //star appears intended as a stamp
	 lineto(80,200);
	 lineto(180,160);
	 lineto(90,90);
	 moveto(55,140);
	 lineto(160,100);
	 lineto(140,210);
	 lineto(55,140);
     }
      else if(choice1==4)
     {
      exit(0);
     }
  getche();
  closegraph;
 }

