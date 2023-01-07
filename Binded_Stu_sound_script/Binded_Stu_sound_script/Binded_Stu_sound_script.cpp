#include <iostream>
#include <Windows.h>
#include <string>

#include <conio.h>
#include <mmsystem.h>


using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void Gotoxy(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, { x,y });
}

// Dissappear cursor
void ConsoleCursorVisible(bool show) // 0 1
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}

void loadnig(short duration = 80, short times = 2) // default
{
	for (int i = 0; i < times; i++)
	{
    Gotoxy(43, 10);
    cout << "|";
    Sleep(duration);
    Gotoxy(43, 10);
    cout << "/";
    Sleep(duration);
    Gotoxy(43, 10);
    cout << "-";
    Sleep(duration);
    Gotoxy(43, 10);
    cout << "\\";
    Sleep(duration);
    Gotoxy(43, 10);
    cout << "|";
    Sleep(duration);
    Gotoxy(43, 10);
	}
}

void Stas(int r = 4, int lb = 9, int d = 7)
{
  SetConsoleTextAttribute(hStdOut, d);

  cout << "*==============*\n";

  cout << "***************\r";
  Sleep(100);
  cout << "$(9%424 $^ &*@^\r";
  Sleep(100);
  cout << "(32#!^^ 4H fe52\r";
  Sleep(100);
  cout << ">>/fgsR#3Q4g4GE\r";
  Sleep(100);
  cout << "$#@^@Sa he $#Hs\r";
  Sleep(100);
  cout << ">>/fgsR#Eerwgv2\r";
  Sleep(100);
  cout << "@#@(*24 rw GjE3\r";
  Sleep(100);
  cout << "Đŕđű?š3 #f Jfd@\r";
  Sleep(100);
  cout << ">>/fgsR#E$#q@g#\r";
  Sleep(100);
  cout << "|+3015_ +_ >gR%\r";
  Sleep(100);
  cout << ">>/fgsR#E$#q@g#\r";
  Sleep(100);
  cout << ">>/fgsR#Eerwgv2\r";
  Sleep(100);
  cout << "C#@(*24 rw GjE3\r";
  cout << "C$#5643 $g 43#$\r";
  Sleep(100);
  cout << "Cr#$433 3# gE$#\r";
  cout << "Cr/fgsR#E$#q@g#\r";
  Sleep(100);
  cout << "Cre&#2! Hd {/P]\r";
  cout << "Cre$#8h $G tH23\r";
  Sleep(100);
  cout << "Crea bdf@$#//zd\r";
  cout << "Crea $#@785 4{#\r";
  Sleep(100);
  cout << "Creatdf *( >m,v\r";
  cout << "Creat#$ $h bju7\r";
  Sleep(100);
  cout << "CreateR#Eerwgv2\r";
  cout << "Create- (= *&#$\r";
  Sleep(100);
  cout << "Created rw GjE3\r";
  cout << "Created H4 hj;L\r";
  Sleep(100);
  cout << "Created bf Jfd@\r";
  cout << "Created b. 4E[|\r";
  Sleep(100);
  cout << "Created by#q@g#\r";
  cout << "Created by e367\r";
  Sleep(100);
  cout << "Created by SOP]\r";
  cout << "Created by Sh)$\r";
  Sleep(100);
  cout << "Created by Stz0\r";
  cout << "Created by St^4\r";
  Sleep(100);
  cout << "Created by Stav\r";
  cout << "Created by Sta?\r";

  Sleep(130);

  SetConsoleTextAttribute(hStdOut, r);
  cout << "C";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "reated by Stas\r";
  Sleep(50);

  SetConsoleTextAttribute(hStdOut, d);
  cout << "C";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "r";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "eated by Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Cr";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "e";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "ated by Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Cre";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "a";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "ted by Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Crea";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "t";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "ed by Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Creat";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "e";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "d by Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Create";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "d";
  SetConsoleTextAttribute(hStdOut, d);
  cout << " by Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Created";
  SetConsoleTextAttribute(hStdOut, r);
  cout << " b";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "y Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Created b";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "y";
  SetConsoleTextAttribute(hStdOut, d);
  cout << " Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Created by";
  SetConsoleTextAttribute(hStdOut, r);
  cout << " ";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Stas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Created by ";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "S";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "tas\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Created by S";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "t";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "as\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Created by St";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "a";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "s\r";
  Sleep(50);
  SetConsoleTextAttribute(hStdOut, d);
  cout << "Created by Sta";
  SetConsoleTextAttribute(hStdOut, r);
  cout << "s";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "\r";
  Sleep(50);



  cout << "Created by ";
  SetConsoleTextAttribute(hStdOut, lb);
  cout << "Stas";
  SetConsoleTextAttribute(hStdOut, d);
  cout << "\n*==============*\n\n";

  Beep(200, 100);
  Beep(300, 100);
}

// Sound
void Sound(const char *filename)
{
  //PlaySound(TEXT(filename), NULL, SND_ASYNC); // Sinhronic play
}

//========= MAIN ============

// Keywords
const char UP = 72;
const char DOWN = 80;
const char LEFT = 75;
const char RIGHT = 77;
const char ENTER = 13;
const char ESC = 27;

int main()
{
	// Starting arguments
	SetConsoleTitle(L"Stu-tu-tu !!!");
  //system("mode con: cols=80 lines=30");
	//setlocale(LC_ALL, "ru");
  ConsoleCursorVisible(0);


	string menu[] = { "Start", "Show keys", "About", "Exit" };
	int activeMenu = 0;

	int x = 40, y = 9;
	Gotoxy(x, y);
	cout << "Welcome !";
	loadnig(40, 2);

	int key;

  bool first_tip = true;

	// Do this while it true
	int beingDo = true;
	while (beingDo)
	{
		// Start position
		system("cls");
		x = 40; y = 9;
		Gotoxy(x, y);

		// Print menu
		for (int i = 0; i < size(menu); i++)
		{
			// Color active string
			if (i == activeMenu) SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);

			Gotoxy(x, y++);
			cout << menu[i] << endl;
		}

    if (first_tip == true)
    {
      Gotoxy(30, 15);
      cout << "(Use arrows up/down to select)" << endl;
      first_tip = false;
    }

		// Listenning buttons
		key = _getch();
		if (key == 224) key = _getch();

		switch (key)
		{
			case ESC: beingDo = false; break;
			case UP: activeMenu--; break;
			case DOWN: activeMenu++; break;
			case ENTER:
				system("cls");
				
			switch (activeMenu)
			{
				case 0: //! Start -----------------------------------------------
					beingDo = false;
					system("cls");


          while (true)
          {
            // Folder H:\Disk\qwerty\C++\My projects\Binded_Stu_sound_script\x64\Debug\Sounds
            SetConsoleTextAttribute(hStdOut, 3);

            cout << "Listening..." << endl << endl;
            cout << endl;
            cout << "     C - Stu-tu-tu ! (single)" << endl;
            cout << "     V - Supra" << endl;
            cout << "     B - Cool" << endl;
            cout << "     N - Alone" << endl;
            cout << "     1 - GTR long" << endl;
            cout << "     2 - GTR one" << endl;

            SetConsoleTextAttribute(hStdOut, 4);
            cout << endl << endl << "To Close click double Shift ! Dont exit" << endl;
            SetConsoleTextAttribute(hStdOut, 7);
            
            // Old catch
            /*int lis_key = _getch();
            switch (lis_key)
            {
              case 99:
                //Beep(300, 100);

                // Play
                //Sound("Stutu.wav");
                PlaySound(TEXT("Stutu.wav"), NULL, SND_ASYNC);

                break;
            }*/

            //// New catch
            //getasynckeystate key codes
            if (GetAsyncKeyState('C')) // TAB - 9
            {
              PlaySound(TEXT("Sounds/Stutu.wav"), NULL, SND_ASYNC);
            }
            else if (GetAsyncKeyState('V')) // Supra
            {
              int pos = rand() % 8;
              //cout << pos;

              switch (pos)
              {
              case 0:
                PlaySound(TEXT("Sounds/Supra/Sequence 01.wav"), NULL, SND_ASYNC);
                break;
              case 1:
                PlaySound(TEXT("Sounds/Supra/Sequence 01_1.wav"), NULL, SND_ASYNC);
                break;
              case 2:
                PlaySound(TEXT("Sounds/Supra/Sequence 01_2.wav"), NULL, SND_ASYNC);
                break;
              case 3:
                PlaySound(TEXT("Sounds/Supra/Sequence 01_3.wav"), NULL, SND_ASYNC);
                break;
              case 4:
                PlaySound(TEXT("Sounds/Supra/Sequence 01_4.wav"), NULL, SND_ASYNC);
                break;
              case 5:
                PlaySound(TEXT("Sounds/Supra/Sequence 01_5.wav"), NULL, SND_ASYNC);
                break;
              case 6:
                PlaySound(TEXT("Sounds/Supra/Sequence 01_6.wav"), NULL, SND_ASYNC);
                break;
              case 7:
                PlaySound(TEXT("Sounds/Supra/Sequence 01_12.wav"), NULL, SND_ASYNC);
                break;


              default:
                cout << "Error with rand() !";
                break;
              }
            }
            else if (GetAsyncKeyState('B')) // Cool
            {
              int pos = rand() % 3;

              switch (pos)
              {
              case 0:
                PlaySound(TEXT("Sounds/Cool/Sequence 01.wav"), NULL, SND_ASYNC);
                break;
              case 1:
                PlaySound(TEXT("Sounds/Cool/Sequence 01_1.wav"), NULL, SND_ASYNC);
                break;
              case 2:
                PlaySound(TEXT("Sounds/Cool/Sequence 01_2.wav"), NULL, SND_ASYNC);
                break;


              default:
                cout << "Error with rand() !";
                break;
              }
            }
            else if (GetAsyncKeyState('N')) // Alone
            {
              int pos = rand() % 1;

              switch (pos)
              {
              case 0:
                PlaySound(TEXT("Sounds/Alone/Sequence 01_7.wav"), NULL, SND_ASYNC);
                break;

              default:
                cout << "Error with rand() !";
                break;
              }
            }
            else if (GetAsyncKeyState('1')) // GTR long
            {
              int pos = rand() % 3;

              switch (pos)
              {
              case 0:
                PlaySound(TEXT("Sounds/GTR long/Sequence 01.wav"), NULL, SND_ASYNC);
                break;
              case 1:
                PlaySound(TEXT("Sounds/GTR long/Sequence 01_1.wav"), NULL, SND_ASYNC);
                break;
              case 2:
                PlaySound(TEXT("Sounds/GTR long/Sequence 01_9.wav"), NULL, SND_ASYNC);
                break;

              default:
                cout << "Error with rand() !";
                break;
              }
            }
            else if (GetAsyncKeyState('2')) // GTR one
            {
              int pos = rand() % 20;

              switch (pos)
              {
              case 0:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01.wav"), NULL, SND_ASYNC);
                break;
              case 1:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_1.wav"), NULL, SND_ASYNC);
                break;
              case 2:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_2.wav"), NULL, SND_ASYNC);
                break;
              case 3:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_3.wav"), NULL, SND_ASYNC);
                break;
              case 4:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_4.wav"), NULL, SND_ASYNC);
                break;
              case 5:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_5.wav"), NULL, SND_ASYNC);
                break;
              case 6:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_6.wav"), NULL, SND_ASYNC);
                break;
              case 7:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_7.wav"), NULL, SND_ASYNC);
                break;
              case 8:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_8.wav"), NULL, SND_ASYNC);
                break;
              case 9:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_9.wav"), NULL, SND_ASYNC);
                break;
              case 10:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_10.wav"), NULL, SND_ASYNC);
                break;
              case 11:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_11.wav"), NULL, SND_ASYNC);
                break;
              case 12:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_12.wav"), NULL, SND_ASYNC);
                break;
              case 13:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_13.wav"), NULL, SND_ASYNC);
                break;
              case 14:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_14.wav"), NULL, SND_ASYNC);
                break;
              case 15:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_15.wav"), NULL, SND_ASYNC);
                break;
              case 16:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_16.wav"), NULL, SND_ASYNC);
                break;
              case 17:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_17.wav"), NULL, SND_ASYNC);
                break;
              case 18:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_18.wav"), NULL, SND_ASYNC);
                break;
              case 19:
                PlaySound(TEXT("Sounds/GTR one/Sequence 01_19.wav"), NULL, SND_ASYNC);
                break;

              default:
                cout << "Error with rand() !";
                break;
              }
            }
            // Exit
            else if (GetAsyncKeyState(VK_SHIFT))
            {
              SetConsoleTextAttribute(hStdOut, 0);
              return 0; // Bag with Error in Process
            }
            /*else if (_getch() == 13) // If it remove background work stopped 
            {
              SetConsoleTextAttribute(hStdOut, 0);
              return 0;
            }*/

            system("cls");
          }

					break;

				case 1: //! Show keys ----------------
          beingDo = false;
          SetConsoleTextAttribute(hStdOut, 7);

          while (true)
          {
            SetConsoleTextAttribute(hStdOut, rand() % 100);


            int key2 = _getch();
            cout << key2 << endl;

            key = _getch();
            if (key == 27)
            {
              beingDo = true;
              SetConsoleTextAttribute(hStdOut, 7);
              break;
            }
          }

					break;

				case 2: //! About --------------------
          beingDo = false;
          Stas();

          cout << "Latest version." << endl << endl << "All realease and info on git:\033[3m https://github.com/ManiFast?tab=repositories" << endl << endl << endl << endl << endl;

          cout << endl << endl;
          cout << "Fixed bug with Esc of menu response" << endl;
          cout << "Fixed bug when it doesnt listen buttons coz was used two func (_getch() and GetAsyncKeyState()" << endl;


          cout << "\033[30m";
          system("pause");
					break;
				case 3: //! Exit ---------------------
          SetConsoleTextAttribute(hStdOut, 7);
					beingDo = false;
					return(0);
					system("exit");
					break;

				default:
					cout << "Key code " << key << "       ";
					break;
			}
		}

		// Doesnt go beyond menu
		if (activeMenu < 0) activeMenu = 0;
		if (activeMenu >= size(menu)) activeMenu = size(menu) - 1;
	}



	return 0;
}