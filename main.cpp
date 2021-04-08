#include <iostream>
#include <clocale>      //Lingua portuguesa
#include <windows.h>    //
#include <string>
#pragma comment(lib, "winmm.lib")

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Portuguese_Portugal.1252");		//Traduz tudo para portugues

	cout << "        CCCCCCCCCCCCC       OOOOOOOOO       MMMMMMMM               MMMMMMMM  IIIIIIIIII  DDDDDDDDDDDDD                    AAA                                                         " << endl;
	cout << "     CCC::::::::::::C     OO:::::::::OO      M:::::::M             M::::::M  I::::::::I  D::::::::::::DDD                A:::A                                                        " << endl;
	cout << "   CC:::::::::::::::C   OO:::::::::::::OO   M::::::::M           M::::::::M  I::::::::I  D:::::::::::::::DD             A:::::A                                                       " << endl;
	cout << "  C:::::CCCCCCCC::::C  O:::::::OOO:::::::O  M:::::::::M         M:::::::::M  II::::::II  DDD:::::DDDDD:::::D           A:::::::A                   +++++++              +++++++       " << endl;
	cout << " C:::::C       CCCCCC  O::::::O   O::::::O  M::::::::::M       M::::::::::M    I::::I      D:::::D    D:::::D         A:::::::::A                  +:::::+              +:::::+       " << endl;
	cout << "C:::::C                O:::::O     O:::::O  M:::::::::::M     M:::::::::::M    I::::I      D:::::D     D:::::D       A:::::A:::::A                 +:::::+              +:::::+       " << endl;
	cout << "C:::::C                O:::::O     O:::::O  M:::::::M::::M   M::::M:::::::M    I::::I      D:::::D     D:::::D      A:::::A A:::::A          +++++++:::::+++++++  +++++++:::::+++++++ " << endl;
	cout << "C:::::C                O:::::O     O:::::O  M::::::M M::::M M::::M M::::::M    I::::I      D:::::D     D:::::D     A:::::A   A:::::A         +:::::::::::::::::+  +:::::::::::::::::+ " << endl;
	cout << "C:::::C                O:::::O     O:::::O  M::::::M  M::::M::::M  M::::::M    I::::I      D:::::D     D:::::D    A:::::A     A:::::A        +:::::::::::::::::+  +:::::::::::::::::+ " << endl;
	cout << "C:::::C                O:::::O     O:::::O  M::::::M   M:::::::M   M::::::M    I::::I      D:::::D     D:::::D   A:::::AAAAAAAAA:::::A       +++++++:::::+++++++  +++++++:::::+++++++ " << endl;
	cout << "C:::::C                O:::::O     O:::::O  M::::::M    M:::::M    M::::::M    I::::I      D:::::D     D:::::D  A:::::::::::::::::::::A            +:::::+              +:::::+       " << endl;
	cout << " C:::::C       CCCCCC  O::::::O   O::::::O  M::::::M     MMMMM     M::::::M    I::::I      D:::::D    D:::::D  A:::::AAAAAAAAAAAAA:::::A           +:::::+              +:::::+       " << endl;
	cout << "  C:::::CCCCCCCC::::C  O:::::::OOO:::::::O  M::::::M               M::::::M  II::::::II  DDD:::::DDDDD:::::D  A:::::A             A:::::A          +++++++              +++++++       " << endl;
	cout << "   CC:::::::::::::::C   OO:::::::::::::OO   M::::::M               M::::::M  I::::::::I  D:::::::::::::::DD  A:::::A               A:::::A                                            " << endl;
	cout << "     CCC::::::::::::C     OO:::::::::OO     M::::::M               M::::::M  I::::::::I  D::::::::::::DDD   A:::::A                 A:::::A                                           " << endl;
	cout << "        CCCCCCCCCCCCC       OOOOOOOOO       MMMMMMMM               MMMMMMMM  IIIIIIIIII  DDDDDDDDDDDDD     AAAAAAA                   AAAAAAA                                          " << endl;

	printf("\n");
	printf("\x1B[31mTexting\033[0m\t\t");
	printf("\x1B[32mTexting\033[0m\t\t");
	printf("\x1B[33mTexting\033[0m\t\t");
	printf("\x1B[34mTexting\033[0m\t\t");
	printf("\x1B[35mTexting\033[0m\n");

	printf("\x1B[36mTexting\033[0m\t\t");
	printf("\x1B[36mTexting\033[0m\t\t");
	printf("\x1B[36mTexting\033[0m\t\t");
	printf("\x1B[37mTexting\033[0m\t\t");
	printf("\x1B[93mTexting\033[0m\n");

	printf("\033[3;42;30mTexting\033[0m\t\t");
	printf("\033[3;43;30mTexting\033[0m\t\t");
	printf("\033[3;44;30mTexting\033[0m\t\t");
	printf("\033[3;104;30mTexting\033[0m\t\t");
	printf("\033[3;100;30mTexting\033[0m\n");

	printf("\033[3;47;35mTexting\033[0m\t\t");
	printf("\033[2;47;35mTexting\033[0m\t\t");
	printf("\033[1;47;35mTexting\033[0m\t\t");
	printf("\t\t");
	printf("\n");

	cout << "FREAKY, EU SINTO ME FREAKYYYYYYYYYYYYYYYYYYYYYYYYYYY" << endl;

	//PlaySound(TEXT("pinkfloid.wav"), NULL, SND_FILENAME);

}