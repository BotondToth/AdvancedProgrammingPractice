// zhgyak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Elem {
	int protonszam, neutronszam, elektronszam;
public:
	Elem() {
		elektronszam = 0;
		neutronszam = 0;
		protonszam = 0;
		cout << "Elem letrehozva" << endl;
	}

	Elem(int protonszam, int neutronszam, int elektronszam) {
		this->protonszam = protonszam;
		this->neutronszam = neutronszam;
		this->elektronszam = elektronszam;
		cout << "Elem letrehozva" << endl;
	}

	int get_protonszam() { return protonszam; }
	int get_neutronszam() { return neutronszam; }
	int get_elektronszam() { return elektronszam; }

	bool isAlkalifem() { return false; }

	void operator++() {
		elektronszam++;
	}

	void operator+=(int mennyivel) {
		elektronszam+=mennyivel;
	}

	void operator-=(int mennyivel) {
		if (elektronszam - mennyivel < 0) {
			cout << "Hiba" << endl;
		}
		else {
			elektronszam -= mennyivel;
		}

	}

	virtual bool operator==(const Elem& masik) {
		return masik.protonszam == protonszam
			&& masik.elektronszam == elektronszam
			&& masik.neutronszam == neutronszam;
	}

	void operator--() {
		if (elektronszam == 0) {
			cout << "Hiba" << endl;
		}
		else {
			elektronszam--;
		}
	}

	~Elem() {
		cout << "Elem torolve" << endl;
	}
};

int main()
{
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
