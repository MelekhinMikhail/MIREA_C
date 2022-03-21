#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

void F1(){
	float S, r, m, n, p;
	cout << "Enter the loan amount: ";
	cin >> S;
	cout << "Enter the loan rate: ";
	cin >> p;
	cout << "Enter the number of years: ";
	cin >> n;
	if (S<1 || p<1 || n<1) {cout << "Math error! You enter negativenumbers or zero!";}
	else {
		r = p/100;
		if ((pow((1+r), n) - 1) == 0) {cout << "Math error!";}
		else {
			m = (S*r*pow((1+r), n))/(12*(pow((1+r), n) - 1));
			cout << "The monthly payment is equal to: " << m << endl;
		}
	}
}

void F2(){
	double S, m, n, p, r, rez;
	float a = 0;
    cout << "Enter S: ";
    cin >> S;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    
    rez = 0;
    for (p = 1; rez < m; p++)
    {
        r = p / 100;
        if ((pow((1+r), n) - 1) == 0) {cout << "Math error!";}
		else {
			rez = (S*r*pow((1+r), n))/(12*(pow((1+r), n) - 1));
        	if (rez > m) {
            	a = p;
            	break;
        	}
        }
    }
    if (a > 0 && a < 101) {cout << "p = " << a << endl;}
    else {cout << "Error!" << endl;}
}

void F3(){
	string a;
	ofstream F;
	F.open("file.txt");
	F << "adfsdagadsgdsafg";
	F.close();
}

void F4(){
	string path = "taskFile.txt";
    ofstream F;

    int Number;

    F.open(path);


    if (!F.is_open()) {
        cout << "Error";
    }

    else {
        F << 5545454 << "frgreg" << 666 << endl;
    }

    ifstream file(path);


    do {
        if (file >> Number) {
            cout << Number << endl;
        }
        else {
            file.clear();
            file.ignore(1, ' ');
        }
    } 
    while (!file.eof());
    F.close();
}

void F5(){
	char abc[30];
    cout << "Input word: ";
    cin >> abc;

    for (int i = 0; i < strlen(abc) - 1; i++)
    {
        for (int j = i; j < strlen(abc) - 1; j++)
        {
            if (abc[i] > abc[j + 1])
            {
                swap(abc[i], abc[j + 1]);
            }
        }
    }
    cout << abc;
}

int main(){
	F5();
}