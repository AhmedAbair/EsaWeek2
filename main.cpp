
#include "robot.h"
#include "positie.h"
int main()
{
	positie P(5, 10);
	Robot R(&P);
	R.run();
	R.show();

	return 0;
}