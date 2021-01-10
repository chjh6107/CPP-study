// static member2 static 멤버변수 사용법
// '21.01.10 
#include <iostream>
using namespace std;

class Color {
private:
	float r;
	float g;
	float b;
	int id;

public:
	Color() :r(0), g(0), b(0), id(idCounter++) {}
	Color(float r, float g, float b) :r(r), g(g), b(b), id(idCounter++) {}

	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }

	int getId() { return id; }

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	static int idCounter;
};

int Color::idCounter = 1;

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);

	cout << "r = " << purple.getR() << ", g = " << purple.getG() << ", b = " << purple.getB() << endl;

	cout << "red.GetId() = " << red.getId() << endl;
	cout << "blud.GetId() = " << blue.getId() << endl;
	cout << "purple.GetId() = " << purple.getId() << endl;

}