#include <iostream>
using namespace std;

void print(int t, int *a) {
	for(int i=0; i<t; ++i) {
		cout << "Elemento: " << i << " = " << a[i] << endl;
	}
	cout << "-----------------" << endl;
}

void select_sort(int p, int *a, int t) {
	int aux;
	for(int i=p+1; i<t; i++) {
		if(a[p] > a[i]) {
			aux = a[p];
			a[p] = a[i];
			a[i] = aux;
			cout << "Trocou" << endl;
		}
	}
	
	if((p+1) < (t-1)) {
		select_sort(p+1, a, 10);
	}
}

int main(int argc, char** argv)
{
	int v[10] = {3,0,1,8,7,2,5,4,9,6};
	print(10,v);
	select_sort(0,v,10);
	print(10,v);
	
	return 0;
}

/*
Implementar a ordenação Select Sort
*/
