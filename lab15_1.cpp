#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	void *y = &b;
	int **z = &x;
	for (int i = 0; i < 6; i++){

		if (i == 1){
			cout << &a << " " << (void *)&b << " " << (void *)&c << " " << &x << " " << &y << " " << &z << endl;
			continue;
		}else if(i == 2){
			c = 'F';
		}else if (i == 3){
			b = 'W';
		}else if (i == 4){
			**z = 6;
		}else if (i == 5){
			**z = 7;
		}else{
			**z = 5;
		}
		cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	}

	return 0;
}