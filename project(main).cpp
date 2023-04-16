/*
Name:word game(project) 
Copyright: 
Author:amirreza javadi 
Date start: 14/09/1401_10:00AM
Description: 
*/
#include <iostream>//main
#include<cstdlib>//for RAND
#include<fstream>//for file
#include <stdio.h>//help to beterr input&output
#include <conio.h>//help to run
#include <ctype.h>//for character&for design& for string
#include <time.h>//randome choice
#include <string.h>//string
#include <windows.h>//help to beterr run
#include <ctime>//time
using namespace std;
#define inFile "infile.txt"
#define outFile "outfile.txt"
clock_t startTime=clock();
int NumbersOfG=0;
int saving(ifstream&,ofstream&);//not end
int NUMS=0;
int pas;

//=====================================================================================================================================================================================================================================
void printMainMenu()//meno
{

  	 cout<<"  ____________________________________________________________"<<endl;
     cout<<"  |                                                          |"<<endl;
	 cout<<"  |                     "<<char (218)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (191)<<"                       |"<<endl;
     cout<<"  |";
	 for( int tt=1;tt<22;tt++)
		 cout<<char (22);
	 cout<<char (179)<<"  word Game "<<char (179);
 for(int tt=1;tt<24;tt++)
		 cout<<char (22);
    	 cout<<"|\n  |                     "<<char(192)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (196)<<char (217)<<"                       |"<<endl;



     cout<<"  |                                                          |"<<endl;
     cout<<"  |__________________________________________________________|"<<endl;
}

//______________________________________________________________________________________________________________________________________________________
void printCredits()//about us
{
    system("cls");
    system("color 3");
    int CREDIT_NUMS=50;
    char* creditln1=new char[CREDIT_NUMS];
    printMainMenu();
    creditln1="\n\tabout game and us:\n\tSimple word Game\n\tversion:1.0.0\n\tMake by:\t\t  amirreza javadi;amin rahmani;amirhosain khoainyha;\n\tmaster:\t\t\t  MR.minoofam\n\n\t you sent All qustions to my E.mails : amirjj83@yahoo.com\n\n\t\t\t\t   \n\n\t\t\t\t    \n";
    for(int i=0;i<strlen( creditln1);i++)
    {
        cout<<creditln1[i];
        Sleep(20);
    }
    cout<<"\n\n\t\t   ";
    system("pause");
}
//___________________________________________________________________________________________________________________
//**
//____________________________________________________________________________________________________________________
bool isCharacterOf(char character,char *string)//for game play&(__) in game
{
    bool ico=false;
    for(int i=0;i<strlen(string);i++)
            if(toupper(string[i])==toupper(character))
            ico=true;
    return ico;
}
//=================+++========================+++================================================================
//=================+++========================+++================================================================
//for line 198
int *findTarget(char character,char *string)
{
    int t=0;
    for(int i=0;i<strlen(string);i++)
        if(toupper(string[i])==toupper(character))
        t++;
        int *a=new int[t];
        NUMS=t;
        t=0;
        for(int i=0;i<strlen(string);i++)
        {
            if(toupper(string[i])==toupper(character))
            {
                a[t]=i;
                t++;
            }
        }
return a;
}
//meno
//====================+++===================+++==================================================================================
//====================+++===================+++==================================================================================
void meno(){
	cout<<"  |   CRATED BY ***AMIRREZA,,AMIN,,AMIRHOSEAN***             |"<<endl;
	cout<<"  |                 *WELLCOME  TO MY GAME :)*                |" <<endl;                        
    cout<<"  |                                                          |\n  |  What do you want to do now?                             |"<<endl;
    cout<<"  |                                                          |"<<endl;
    cout<<"  |   1.Play word Game                                       |"<<endl;
	cout<<"  |   2.About Us                                             |"<<endl;
    cout<<"  |   3.prees any other key to quit                          |"<<endl;
    cout<<"  |                                                          |"<<endl;
    cout<<"  |__________________________________________________________|"<<endl;
    cout<<"\n What do you want to do now? ";
	}
//====================================================================================================================
//====================================================================================================================
//game play(RANDOM_CHOICE)
int main()
{
   srand(time(NULL));
   char** words=new char*[70];
   for(int i=0;i<55;i++)
   {
    words[i]=new char[70];
   }
//==========================================================================================================================================================================================================================================================================================================================================================================================================================================================    
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	words[0]="mother_board";words[1]="keyboard";words[2]="mouse";words[3]="monitor";words[4]="modem";
    words[5]="peugeot";words[6]="ferrari";words[7]="mclaren";words[8]="mitsubishi";words[9]="jaguar";words[10]="bugatti";words[11]="Lamborghini";words[12]="Chevrolet";words[13]="Audi";words[14]="toyota";words[15]="Viper";words[16]="mercedes-benz";
    words[16]="Afghanistan";words[17]="Albania";words[18]="Algeia";words[19]="America";words[20]="Angola";words[21]="Argentina";words[22]="Armenia";words[23]="Australia";words[24]="Azerbaijan";words[25]="Bangladesh";words[26]="Belarus";words[27]="Belgium";words[28]="Benin";words[29]="Bolivia";words[30]="Bosnia_Herzegovina";words[31]="Brazil";words[32]="Britain";words[33]="Bulgaria";words[34]="Cameroon";words[35]="Canada";
    words[36]="shiraz";words[37]="rasht";words[38]="oshnaveyeh";words[39]="tehran";words[40]="tabriz";words[41]="boshehr";words[42]="sari";words[43]="gorgan";words[44]="sanandaj";words[45]="qazvin";words[46]="saghez";words[47]="sardasht";
    words[48]="c++";words[49]="java";words[50]="asp.net";words[51]="vb.net";words[52]="delphi";words[53]="pascal";words[54]="visual_basic";words[55]="basic";
//----------------------------------------------------------------------------------------------------------------------------------
//_________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
    system("color 3");
    cout<<"\n\t\t\t\t\t\t\t***PROJECT***\n\n\t\t\t\t\t\t Hi\n\t\t\t\t\t\t i hope you are well today.\n\n\n\t\t\t\t\t\t this project was made by some guys of\n\t\t\t\t\t\t qazvin islamic azad university.";
    sleep(9);   	
	int fails=0;
    int ans2; 
    int rnd;
    char ch1;
    char word[27];
    int save1,save2;
	char key1[2]="y";
	int key;
    char *kk=new char[40];
	int tt1;
	int rnd2;

    MainMenu:
    system("cls");
    printMainMenu();// main menu(2)
    int ans=0;
    meno();//menu(2)
    cin>>ans;//input
    switch(ans)
    {
//===================================================================================================================    	
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//===================================================================================================================
	                case 1 :
	                system("cls");
					system("color 2");	
	                printMainMenu();
				    cout<<"\n Enter your new password:";//not End
				    cin>>pas;
				    system("cls");
	                system("color 3");
                    GetAnswer2:
                    NumbersOfG=0;
                    srand(time(NULL));
                    system("cls");
                    printMainMenu();
                    cout<<"     About:"<<endl;
                    cout<<"     1.computer hardwares\n     2.cars\n     3.countries\n     4.city\n     5.programing languages     ";
                    cin>>ans2;//input2
//________________________________________________________________________________________________________________________________________________________
					switch(ans2)
                    {
                        case 1: rnd=rand()%5;break;//rnd=random
                        case 2: rnd=rand()%12+5;break;//rnd=random
                        case 3: rnd=rand()%20+16;break;//rnd=random
                        case 4: rnd=rand()%11+36;break;//rnd=random
						case 5: rnd=rand()%7+48;break;//rnd=random
						default :cout<<"     You have to enter 1 , 2 , 3 , 4 or 5\n";
                            system("pause");
                            goto GetAnswer2;
                            break;
                        }
//_____________________________________________________________________________________________________________
						unsigned int n;
                        for (n=0; n<strlen(words[rnd]); n++) word[n]='-';
                        word[n]='\0';
                        fails=strlen(words[rnd])*2-n/2;
                        while(fails>0)
                        {

                            system("cls");//start game play
                            printMainMenu();
                            if(!(isCharacterOf('-',word)))
                            {
                                cout<<endl<<"     "<<word<<"\n";
							    char *kk1=new char[40];
                                system("color 3");
						        kk1=" Congratulations!!! You won the game.\n";
							    cout<<"\n\n\n\n           ";
					        	for(int t1=0;t1<40;t1++){
					         	cout<<kk1[t1];
						        Sleep(50);}
						        cout<<"\n\n\n\n\n\n                          ";
						        system("pause");
						        printCredits();
                                goto MainMenu;
                                }
                                cout<<endl<<"     "<<word<<"\n";
                                cout<<"\n     Enter your character:(Lives:"<<fails<<"):";//lives
                                cin>>ch1;//input in game(main input)
/*                           */ findTarget(ch1,words[rnd]);
                                if(isCharacterOf(ch1,words[rnd]))
                                    for(int i=0;i<NUMS;i++)
                                    {
                                        if(word[findTarget(ch1,words[rnd])[i]]!=ch1)
                                        {
                                            word[findTarget(ch1,words[rnd])[i]]=ch1;
                                        }
                                            else
                                        {
                                            cout<<"     This character is already choosed, please choose another character.";getch();break;
                                        }
                                    }
                            else
                        fails-=1;//decrase lives
                        }
                        if(fails==0)
                        {
                            system("cls");
							char *aj=new char[20];
                            system("color 4");
							aj="\t\tX_X\n\t\t\t\t\tGAME OVER\n\t\t\t\t\ttry again   ";
							cout<<"\n\n\n\n\n\n\n                             ";
							for(int t1=0;t1<50;t1++){
							cout<<aj[t1];
							Sleep(50);}
							cout<<"\n\n\n\n\n\n\n\n\n\n\n                          ";
							system("pause");
						}
						goto MainMenu;//return
						
//_______________________________________________________________________________________________________________________						
				   		
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
				case 2 :
                    printCredits();
                    goto MainMenu;
//_____________________________________________________________________________________________________________
//____________________________________________________________________________________________________________________					    
               case 3 :
                    break;
    }
    system("cls");
    system("color 2");
    cout<<"time of you playng game:"<<(clock()-startTime)/1000<<"s"<<"\n\ni hope you enjoy at this time"<<"\n\n your password is:"<<pas;
    sleep(9);
    system("cls");
    cout<<"\n\n\t\t\t\t\t\t\tgood bye\n\t\t\t\t\t                thank you for playing my game^_~";
    sleep(4);
    system("cls");
	return 0;	
}