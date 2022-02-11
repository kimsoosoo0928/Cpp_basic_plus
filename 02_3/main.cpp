#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "당근을  몇 개나 가지고 있니?" << endl;
	cin >> carrots;
	cout << "여기 두 개가 더 있다.";
	carrots = carrots + 2;

	cout << "이제 당근을 모두 " << carrots << "개이다." << endl;
	return 0;
}