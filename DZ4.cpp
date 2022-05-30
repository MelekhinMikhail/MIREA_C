#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

void F1(){
	string path = "taskFile.txt";
	ofstream F;
	F.open(path);
	F << "8679354120";
	F.close();
	
	ifstream file(path);
	char buff[50];
	file.getline(buff, 50);
	file.close();
	float s = 0;
	for(int i=0;i<10;i++){
		int a = buff[i] - 48;
		s = s + a;
	}
	cout << s;
}
int F(int x){
	if(x>0) {return 1;}
	else if(x == 0){return 0;}
	else{return -1;}
}
void F2(){
	double a;
	cin >> a;
	cout << F(a);
}
double treyg(double a, double h){
	return (a*h)/2;
}
double pryam(double a, double b){
	return a*b;
}
double krug(double r){
	return 3.14*pow(r, 2);
}
void F3(){
	cout << "1 -- pryamoygolnik" << endl;
	cout << "2 -- treygolnik" << endl;
	cout << "3 -- krug" << endl;
	int a;
	cin >> a;
	if(a<1 && a>3){cout<<"Error!";return;}
	if(a==1){
		double a, b;
		cout << "Enter a:" << endl;
		cin >> a;
		if(a<=0){cout<<"Error!";return;}
		cout << "Enter b:" << endl;
		cin >> b;
		if(a<=0){cout<<"Error!";return;}
		cout << "Ploshad = " << pryam(a, b) << endl;
	}
	if(a==2){
		double a, h;
		cout << "Enter a:" << endl;
		cin >> a;
		if(a<=0){cout<<"Error!";return;}
		cout << "Enter h:" << endl;
		cin >> h;
		if(a<=0){cout<<"Error!";return;}
		cout << "Ploshad = " << treyg(a, h) << endl;
	}
	if(a==3){
		double r;
		cout << "Enter r:" << endl;
		cin >> r;
		if(a<=0){cout<<"Error!";return;}
		cout << "Ploshad = " << krug(r) << endl;
	}
}
void F6(){
	string a;
	cin >> a;
	int s = 0;
	for(int i=0;i<strlen(a.c_str());i++){
		if(a[i] == "I"){
			s = s + 1;}
		if(a[i] == "V"){
			s = s + 5;}
		if(a[i] == "X"){
			s = s + 10;}
		if(a[i] == "L"){
			s = s + 50;}
		if(a[i] == "C"){
			s = s + 100;}
		if(a[i] == "D"){
			s = s + 500;}
		if(a[i] == "M"){
			s = s + 1000;}
	}
	cout << s;
}

int main(){
	F6();
}