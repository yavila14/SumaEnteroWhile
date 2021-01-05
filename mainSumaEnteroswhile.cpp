#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,suma;
	suma=0;
	i=2;
	while (i<=200){
	suma=suma+i;
	i=i+2;
	cout <<suma <<endl;
    }
	return 0;
}
