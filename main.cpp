#include <iostream>
#include <cmath>
using namespace std;

void round(int prec, double& value)
{
	if (value >= 0)
	{
		value = value * pow(10,prec+1) + 5;
	}
	else
	{
		value = value * pow(10,prec+1) - 5;
	}
	long Templong = (long)value / 10;
	value = Templong / pow(10,prec);
}

int main()
{
	int i = 0;
	float f= (float) i;
	double v = f;
    round(1, v);
    float act_f = (float) i;
	double act_d = act_f;

	if(act_d < v)
	{
		cout << "1" << endl;
	}
	else
	{
		if(act_d > v)
		{
			cout << "2" << endl;
		}
		else
		{
			cout << "3" << endl;
		}
	}

    cout << "sss" << endl;
	return 0;
}