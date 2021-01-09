// static member
// '21.01.09
#include <iostream>

using namespace std;

class Color {
private:
	float r;
	float g;
	float b;

public:
	Color() :r(0), g(0), b(0) {}
	Color(float r, float g, float b) :r(r), g(g), b(b) {}

	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }
	static Color MixColors(Color a, Color b) {
		return Color((a.getR() + b.getR()) / 2, (a.getG() + b.getG()) / 2, (a.getB() + b.getB()) / 2);
	}
};

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color::MixColors(blue, red);

	cout << "r = " << purple.getR() << ", g = " << purple.getG() << ", b = " << purple.getB() << endl;
}