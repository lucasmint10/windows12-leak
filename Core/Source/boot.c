#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <direct.h>

int main(void){
    system("title QEMU");
	printf("SeaBIOS (version dev_baseline_source-0-gblf2eed-3.fc31)\n");
	printf("\n");
	printf("iPXE (http://ipxe.org) 00:03.0 C980 PCI2.10 PnP PMM+07f92570+07ED2570 C980\n");
	printf("\n");
	printf("Booting from Hard Disk...\n");
	Sleep(2000);
	system("title Windows 12 - Do screenshot this build.");
	printf("Booting Windows 12 build 2643");
	Sleep(2000);
	_chdir("Core");
	system("welcome.exe");
}
