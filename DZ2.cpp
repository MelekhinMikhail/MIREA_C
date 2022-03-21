#include <iostream>
#include <cmath>
using namespace std;

void F1(){
	float h, r, R, l, S, V;
	cout << "Enter R: ";
	cin >> R;
	cout << "Enter r: ";
	cin >> r;
	cout << "Enter h: ";
	cin >> h;
	if (h<1 || r<1 || R<1) {cout << "Error! Negative numbers or zero are entered!";}
	else {
		if (r == R) {cout << "Error! This is cylinder!";}
		else {
			l = sqrt(abs(R - r) * abs(R - r) + h * h);
			V = (3.14 * h * (R * R + R * r + r * r))/3;
			S = 3.14 * (R * R + (R + r) * l + r * r);
			cout << "The volume is equal to: " << V << endl << "Total surface area is equal to: " << S << endl;
		}
	}
}

void F2(){
	float x, a, w;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter a: ";
	cin >> a;
	if (abs(x) < 1) {
		if (x == 0) {cout << "Math error!";}
		else {
			w = a * log(abs(x));
			cout << "w = " << w << endl;
		}
	}
	else {
		if ((a - x*x) < 0) {cout << "Math error!";}
		else {
			w = sqrt(a - x*x);
			cout << "w = " << w << endl;
		}
	}
}

void F3(){
	float x, y, b, z;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter b: ";
	cin >> b;
	if ((b - y) < 1 || (b - x) < 0) {cout << "Math error!";}
	else {
		z = log(b - y) * sqrt(b - x);
		cout << "z = " << z << endl;
	}
}

void F4(){
	int N, i;
	cout << "Enter N: ";
	cin >> N;
	for (i=N; i<N+10; i++) {
		cout << i << " ";
	}
}

void F5(){
	float x, y;
	for (x=-4; x<4.1; x+=0.5) {
		if ((x-1) == 0) {cout << "Math Error! ";}
		else {
			y = (x*x - 2*x + 2)/(x-1);
			cout << "y = " << y;
		}
		cout << "  x = " << x << endl;
	}
}

int main(){
    F5();
}