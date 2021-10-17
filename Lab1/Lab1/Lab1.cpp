#include <iostream>
using namespace std;
void kalkulator(float q, float w) {// 5.
	int e;
	cout << "Jakie dzialanie?\n1-Dodawania\n2-Odejmowanie\n3-Mnozenie\n4-Dzielenie" << endl;
	cin >> e;
	switch (e)
	{
	case 1:
		cout << q + w << endl;
		break;
	case 2:
		cout << q - w << endl;
		break;
	case 3:
		cout << q * w << endl;
		break;
	case 4:
		if (w != 0) { cout << q / w << endl; }
		else
		{
			cout << "Nie dziel przez zero" << endl;
		}
		break;
	default:
		kalkulator(q, w);
		break;
	}
}

int main()
{
	std::cout << 65541 << endl;// 1.

	int x;// 2.
	cin >> x;
	if (x % 2 == 0) {
		cout << "Parzysta" << endl;
	}
	else {
		cout << "Nieparzysta" << endl;
	}

	float y, z;// 3.
	cin >> y >> z;
	if (y > z) {
		cout << y << " jest wieksza" << endl;
	}
	else {
		cout << z << " jest wieksza" << endl;
	}

	float a, b, c, d;// 4.
	cin >> a >> b >> c >> d;
	cout << (a + b + c + d) / 4 << endl;



	float q, w;// 5.
	cout << "Wpisz liczby" << endl;
	cin >> q >> w;
	kalkulator(q, w);

}