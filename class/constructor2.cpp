// 시간 저장 클래스 overloading 이용
// '21.01.09. 17:44
#include <iostream>
using namespace std;

class Time {
public:
	int h;
	int m;
	int s;

	Time() :h(0), m(0), s(0) {}	//매개변수 없는 생성자
	//초기화목록을 참조하여 재귀적으로 호출되도록 만든 생성자
	//생성자 위임이라고 함
	Time(int s_) :Time() {
		s = s_;
	}
	Time(int m_, int s_) :Time(s_) {
		m = m_;
	}
	Time(int h_, int m_, int s_) :Time(m_, s_) {
		h = h_;
	}
};

int main() {
	Time t1;
	Time t2(5);
	Time t3(3, 16);
	Time t4(2, 42, 15);

	cout << "T1 : " << t1.h << ":" << t1.m << ":" << t1.s << endl;
	cout << "T2 : " << t2.h << ":" << t2.m << ":" << t2.s << endl;
	cout << "T3 : " << t3.h << ":" << t3.m << ":" << t3.s << endl;
	cout << "T4 : " << t4.h << ":" << t4.m << ":" << t4.s << endl;
}