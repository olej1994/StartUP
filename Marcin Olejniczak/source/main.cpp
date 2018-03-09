#include <Windows.h>
#include <string>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	int indeks = 0;
	std::string str;
	std::string pom;
	MessageBox(0, "WYBIERZ LICZBE OD 1 DO 40", "Gra Zgadywanka", MB_OK);
	int IRetKey = MessageBox(0, "Czy twoja liczba jest wieksza od 20 ?", "Gra Zgadywanka", MB_YESNO);
	if (IRetKey == IDYES)
	{
		int IRetKey = MessageBox(0, "Czy twoja liczba jest wieksza od 30 ?", "Gra Zgadywanka", MB_YESNO);
		if (IRetKey == IDYES)
		{
			indeks = 34;
			str = "3";
		}
		else
		{
			indeks = 24;
			str = "2";
		}
	}
	else
	{
		int IRetKey = MessageBox(0, "Czy twoja liczba jest wieksza od 10 ?", "Gra Zgadywanka", MB_YESNO);
		if (IRetKey == IDYES)
		{
			indeks = 14;
			str = "1";
		}
		else
		{
			indeks = 4;
			str = " ";
		}
	}
	pom = str;
	str = "Czy twoja liczba jest wieksza od " + str + "5" + "?";
	int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
	if (IRetKey1 == IDYES)
	{
		str = pom;
		str = "Czy twoja liczba jest wieksza od " + str + "8" + "?";
		int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
		if (IRetKey1 == IDYES)
		{
			str = pom;
			str = "Czy twoja liczba jest wieksza od " + str + "9" + "?";
			int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
			if (IRetKey1 == IDYES)
			{
				indeks = indeks + 5;
			}
			else
			{
				indeks = indeks + 4;
			}
		}
		else
		{
			str = pom;
			str = "Czy twoja liczba jest wieksza od " + str + "7" + "?";
			int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
			if (IRetKey1 == IDYES)
			{
				indeks = indeks + 3;
			}
			else
			{
				str = pom;
				str = "Czy twoja liczba jest wieksza od " + str + "6" + "?";
				int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
				if (IRetKey1 == IDYES)
				{
					indeks = indeks + 2;
				}
				else
				{
					indeks = indeks + 1;
				}
			}

		}
	}
	else
	{
		str = pom;
		str = "Czy twoja liczba jest wieksza od " + str + "3" + "?";
		int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
		if (IRetKey1 == IDYES)
		{
			str = pom;
			str = "Czy twoja liczba jest wieksza od " + str + "4" + "?";
			int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
			if (IRetKey1 == IDYES)
			{
				indeks = indeks;
			}
			else
			{
				indeks = indeks - 1;
			}
		}
		else
		{
			str = pom;
			str = "Czy twoja liczba jest wieksza od " + str + "2" + "?";
			int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
			if (IRetKey1 == IDYES)
			{
				indeks = indeks - 2;
			}
			else
			{
				str = pom;
				str = "Czy twoja liczba jest wieksza od " + str + "1" + "?";
				int IRetKey1 = MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_YESNO);
				if (IRetKey1 == IDYES)
				{
					indeks = indeks - 3;
				}
				else
				{
					indeks = indeks - 4;
				}
			}

		}
	}
	int tab[40];
	for (int i = 0; i < 40; i++)
		tab[i] = i + 1;
	std::string indeksor = std::to_string(tab[indeks]);
	str = "Twoja liczba to " + indeksor;
	MessageBox(0, str.c_str(), "Gra Zgadywanka", MB_OK);
	return 0;
}