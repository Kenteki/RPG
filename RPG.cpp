#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#define PRINT(s) cout<<s<<endl;
#define ENTER(s) cin>>s;

int HP = 10, DM = 5;
string name;

void Gmenu() {
	system("cls");
	int menu;
	int create;
	PRINT("1.Vibor Personaza      2.SETTINGS\n3.CTO TO ESHIO      4.Exit")
		ENTER(menu)
		switch (menu)
		{
		case 1:
			system("cls");
			PRINT("tvoi personazi\nY vas net personazej\nSozdat Personaza?\n1.Yes     2.No")
				ENTER(create)
				if (create == 1) {
					createH();
				}
				else {
					Gmenu();
				}
				break;
		case 2:
			Gmenu();
			break;
		case 3:
			PRINT("RAZRABOTKE")
				break;

		}
}
bool createH() {
	
	system("cls");
	int hpordm;
	PRINT("Heroj bydet zirnim ili silnim?\n1.Zirnij(+10hp)     2.Silnij(+10 to damage)")
		ENTER(hpordm);
	if (hpordm == 1) {
		int HP = 20;
		cout << ("your hp :") << HP << endl;
		PRINT("Vvedi imia personaza:")
			getline(cin, name);
		return main();
	}
	else {
		int DM = 10;
		cout << ("your dm :") << DM << endl;
		PRINT("Vvedi imia personaza:")
			getline(cin, name);
		return main();
	}
}

int main(){
	Gmenu();
	return 0;
}
