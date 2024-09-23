#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R = 0 ;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((x > - R && x < 0 && y>0 && y < R && (x + R) * (x + R) + (x + R) * (y - R) >= R * R) ||
			(x > 0 && x < R && y<0 && y>-R && (x - R) * (x - R) + (y + R) * (y + R) >= R * R))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - 3;
			y = 6. * rand() / RAND_MAX - 3;
			if ((x > -R && x < 0 && y>0 && y < R && (x + R) * (x + R) + (x + R) * (y - R) >= R * R) ||
				(x > 0 && x < R && y<0 && y>-R && (x - R) * (x - R) + (y + R) * (y + R) >= R * R))

				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}