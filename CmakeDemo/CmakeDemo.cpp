// CmakeDemo.cpp: 定义应用程序的入口点。
//

#include "CmakeDemo.h"
#include "../CMakeStatic/HelloCMake.h"
using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	HelloCMake breakingbad;
	cout << breakingbad.SayMyName() << endl;
	return 0;
}
