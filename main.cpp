#include "BI.h"

int main()
{
	cin.tie(0);
	cout << "Welcome to use BIG_INTENGER calculator 1.0.0" << endl;
	cout << "press '+' '-' '*' '/' to continue" << endl;
	int gz;
	while ((gz = getchar())!= EOF)
	{
		if (gz == '+') {
			BI obj;
			cin >> obj.a;
			cout << "       +" << endl;
			cin >> obj.b;

			for (int i = obj.a.size() - 1; i >= 0; i--)
			{
				obj.A.push_back(obj.a[i] - '0');
			}
			for (int i = obj.b.size() - 1; i >= 0; i--)
			{
				obj.B.push_back(obj.b[i] - '0');
			}

			auto C = add(obj.A, obj.B);
			cout << "answer��";
			for (int i = C.size() - 1; i >= 0; i--)
			{
				cout << C[i];
			}
			puts("");
			cout << "press '+' '-' '*' '/' to continue" << endl << "press 'e' to exit" << endl;
			puts("");
		}


		else if (gz == '-')
		{
			BI obj;
			cin >> obj.a;
			cout << "       -" << endl;
			cin >> obj.b;
			


			for (int i = obj.a.size() - 1; i >= 0; i--)
				obj.A.push_back(obj.a[i] - '0');
			for (int i = obj.b.size() - 1; i >= 0; i--)
				obj.B.push_back(obj.b[i] - '0');


			cout << "answer��";
			if (cmp(obj.A, obj.B))
			{
				auto C = sub(obj.A, obj.B);
				for (int i = C.size() - 1; i >= 0; i--)
					cout << C[i];
			}
			else {
				auto C = sub(obj.A, obj.B);
				cout << "-" << endl;
				for (int i = C.size() - 1; i >= 0; i--)
					cout << C[i];
			}
			puts("");
			cout << "press '+' '-' '*' '/' to continue" << endl << "press 'e' to exit" << endl;

		}

		else if (gz == '*')
		{
			cout << "the second intenger should range from 0~10^9" << endl;
			int d;
			BI obj;
			cin >> obj.b; 
			cout << "       x" << endl;
			cin >> d;
			

			for (int i = obj.b.size() - 1; i >= 0; i--)
			{
				obj.A.push_back(obj.b[i] - '0');
			}


			auto c = mul(obj.A, d);
			cout << "answer��";

			for (int i = c.size() - 1; i >= 0; i--)
				cout << c[i];
			cout << endl << "press '+' '-' '*' '/' to continue" << endl << "press 'e' to exit" << endl;
		}

		else if (gz == '/')
		{
			cout << "the second intenger should range from 0~10^9" << endl << endl;
			BI obj;
			int d, r = 0;
			cin >> obj.a;
			cout << "       /" << endl;
			cin>> d;
			
			for (int i = obj.a.size() - 1; i >= 0; i--)
				obj.A.push_back(obj.a[i] - '0');

			auto c = div(obj.A, d, r);
			cout << "answer��" << endl;
			cout << "�̣�";
			for (int i = c.size() - 1; i >= 0; i--)
				cout << c[i];

			cout << endl << "�ࣺ" << r << endl;

			cout << endl << "press '+' '-' '*' '/' to continue" << endl <<"press 'e' to exit" << endl << endl;

		}

		else if (gz == 'e' || gz == 'E')
		{
			break;
		}



	}
}