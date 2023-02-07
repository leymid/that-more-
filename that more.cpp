#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "A nechiga barobarligini yozing:";
	cin >> a;

	cout << "B nechiga barobarligini yozing:";
	cin >> b;

	cout << "C nechiga barobarligini yozing:";
	cin >> c;

	cout << "D nechiga barobarligini yozing:";
	cin >> d;

	if (a + b > c + d) cout << "Birinchi sonlar ikinchi sonlardan kotta.";

	if (a + b < c + d) cout << "Ikinchi sonlar birinchiga nisbatan kotta.";
	return 0;

}
