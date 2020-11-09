#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    cout << "ZORLUK SECINIZ:\nZOR\nORTA\nKOLAY\n" << endl;
    string zorluk;
    int hak;
    cin >> zorluk;
    if(zorluk == "zor")
    {
        hak = 7;
    }
    else if(zorluk == "orta")
    {
        hak = 13;
    }
    else if(zorluk == "kolay")
    {
        hak = 17;
    }
    int kaybetme = hak;
    int x;
    system("cls");
    cout << "0 ILE 100 ARASINDA BIR SAYI TUTTUM BUL BAKALIM!!!" << endl << kaybetme + 1 << " HAKKIN KALDI" << endl;
    srand(time(NULL));
    x = 1 + rand()%100;
    int a;
    int bitti = 0;
    tekrar:
    cin >> a;
    if(kaybetme < 0)
    {
        system("cls");
        cout << "KAYBETTIN--KAYBETTIN--KAYBETTIN" << endl;
        for(int j = 0;j<= 2;j++)
        {
        system("color c0");
        Sleep(600);
        system("color 0f");
        Sleep(600);
        }
        goto son;
    }
    if(bitti != 2)
    {
    if(a < x)
    {
        cout << "AZ" << endl;
        system("color b0");
        Sleep(700);
        system("cls");
        kaybetme --;
        cout << kaybetme + 1 << " HAKKIN KALDI" << endl;
        goto tekrar;
    }
    else if(a > x)
    {
        cout << "COK" << endl;
        system("color a0");
        Sleep(700);
        system("cls");
        kaybetme --;
        cout << kaybetme + 1<< " HAKKIN KALDI" << endl;
        goto tekrar;
    }
    else if(a = x)
    {
        cout << "KAZANDIN!!KAZANDIN!!KAZANDIN!!KAZANDIN!!KAZANDIN!!KAZANDIN!!KAZANDIN!!KAZANDIN!!" << endl;
        for(int i = 0;i <=3; i++)
        {
        system("color f0");
        Sleep(300);
        system("color 0f");
        Sleep(300);
        }
        goto son;
    }
    }
    son:
    return 0;
}
