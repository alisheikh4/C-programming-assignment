/*This program replaces letters in order to scramble a message
 * Author : Ali S
 * Department : Computer Science
 * History 
 * **********************************************
 *Feb 20 2020 : Initial version
 * **********************************************
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	int number=atoi(argv[1]);
	if(number==0){
		printf("Error: usage is caesarcipher <offset>\n");
	return 1;
	}
	else {
		char message[500],ch;
		int i;
		fgets(message,499,stdin);
		for(i=0;message[i]!='\0';i++){
			ch = message[i];
			if(ch>='a' && ch<='z'){
				ch = ch+number;
				if(ch>'z' || ch<'a'){
				ch = ((ch-number) - 'z')+('a'-1)+number;
				}
				message[i] = ch;
			}
		}
		printf("%s\n",message);
		return 0;
	}

}
