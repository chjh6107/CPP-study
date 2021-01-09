#include <iostream>

using namespace std;

class Complex {
public:
	Complex() :real(0), imag(0) {} //초기화목록

								   //초기화목록은 멤버변수만 올수있어서
								   //매개변수 관리가 편리
	Complex(double real, double imag) :real(real), imag(imag) {} 

	double GetReal() {
		return real;
	}
	void SetReal(double real_) {
		real = real_;
	}
	double GetImag() {
		return imag;
	}
	void SetImag(double imag_) {
		imag = imag_;
	}

private:
	double real;
	double imag;
};

int main() {


	Complex c1;
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3);
	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
	cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;
}