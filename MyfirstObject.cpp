#include<iostream>
#include<string>

using namespace std;


class Samochod
{
public:
	string marka;
	int rocznik;
	string model;
	int long przebieg;

	void dodaj()
	{
		cout << "Podaj Marke SAMOCHODU:";
		cin>> marka;
		cout << "Podaj Model SAMOCHODU:";
		cin >> model;
		cout << "Podaj Rocznik SAMOCHODU:";
		cin >> rocznik;
		cout << "Podaj Przebieg SAMOCHODU:";
		cin >> przebieg;
		cout << "-----------------------------------------------------------" << endl;
}

	void wczytaj()
	{
		cout <<"marka samochodu:"<< marka << endl;
		cout << "rocznik samochodu:" << rocznik << endl;
		cout << "model samochodu:" << model << endl;
		cout << "przebieg samochodu:" << przebieg << endl;
		cout << "-----------------------------------------------------------" << endl;
	}
};

int main()
{
	Samochod s1;
	Samochod s2;

	s1.dodaj();
	s1.wczytaj();
	s2.dodaj();
	s2.wczytaj();

	system("pause");
	return 0;

}