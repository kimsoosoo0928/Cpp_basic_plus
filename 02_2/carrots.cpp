// carrots.cpp 음식물 처리 프로그램 
// 하나의 변수를 사용하고 출력한다.

#include <iostream>

int main() {
	using namespace std;

	int carrots;

	carrots = 25;
	cout << "나는 당근을 ";
	cout << carrots;
	cout << "개 가지고 있다.";
	cout << endl;
	carrots = carrots - 1;
	cout << " 아삭아사가, 이제 당근은 " << carrots << "개이다." << endl;
	return 0;
}