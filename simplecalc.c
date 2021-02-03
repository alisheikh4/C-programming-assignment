/*
 Program to implement a simple calculator
* **************************************************************
* Author	Dept.		Date		Notes
****************************************************************
* Ali S		Comp. Science.	Feb 20 2020	Initial version.
*/ 
#include <stdio.h>

int main(int argc,char *argv[]) {
int x;
switch (*argv[2]) {

case '+':	printf("%d\n",atoi(argv[1])+ atoi(argv[3]));
		break;
case '-':	printf("%d\n",atoi(argv[1])- atoi(argv[3]));
		break;
case '*':	printf("%d\n",atoi(argv[1])* atoi(argv[3]));
		break;
case '/':	printf("%d\n",atoi(argv[1])/ atoi(argv[3]));
		break;
default : printf( "Error: usage is simplecalc <x> <op> <y>\n");
	  return 2;
}
return 0;


}
