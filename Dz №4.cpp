#include<iostream>
#include<ctime>
using namespace std;
void print_array(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void arif_prog(int array[], int size) {
	int d;
	int a1;
	cout << "Введитте первый член арифметической прогресcии" << " ";
	cin >> a1;
	cout << "Введите разность" << " ";
	cin >> d;
	array[0] = a1;
	for (int i = 1; i < size; i++)
		array[i] = array[i - 1] + d;
}
int random_number() {
	return rand();
}
void random_shuffle(int array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] = i + 1;
	}
	for (int i = size - 1; i >= 1; i--) {
		int j = random_number() % (i + 1);
		int tmp = array[j];
		array[j] = array[i];
		array[i] = tmp;
	}
}
int random_array(int array[], int size) {
	int k = 0;
	for (int i = 0; i < size; i++) {
		array[i] = random_number() % 1001 + 1000;
		if (((array[i] % 100) / 10) % 2 == 0)
			k++;
	}
	cout << "Число элементов у которых вторая с конца цифра четная" << " " << k << endl;
	return 0;
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int n = 10;
	int mas[n];
	arif_prog(mas, n);
	print_array(mas, n);
	random_shuffle(mas, n);
	print_array(mas, n);
	random_array(mas, n);
	print_array(mas, n);
	return 0;

}
