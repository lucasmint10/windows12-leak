#include <stdio.h>
#include <stdlib.h>


int main(void){
	system("cls");
	int opt;
	system("cecho.exe dark_blue black \"INFO: Do screenshot this build.\"");
	system("cecho dark_magenta black \"--- Explorer ---\"");
	printf("1) Command Prompt\n");
	printf("2) System Settings\n");
	printf("3) File Explorer\n");
	printf("4) MS-Paint\n");
	printf("5) Log out\n");
	scanf("%d", &opt);
	if(opt==1){
		system("start cmd.exe /k cls");
		main();
	} else if (opt == 2) {
		system("start sysdm.cpl");
		main();
	} else if (opt == 3) {
		system("start C:/Windows/explorer.exe");
		main();
    } else if (opt == 4) {
		system("start mspaint.exe");
		main();
	} else if (opt == 5) {
		system("welcome.exe");
		main();
	} else {
		main();
	}
}