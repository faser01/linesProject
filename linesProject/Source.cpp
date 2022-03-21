
#include <iostream>
using namespace std;

template< typename T>  int searchIndex(T arr[], int L, T key, int begin =0) {
	for (int i = begin; i < L; i++)
		if (arr[i] == key)
			return i;
}

template <typename T> int lastSearchIndex(T array[], int length, T key, int begin = -1) {// начинает искать с обратной стороны масива
	if (begin == -1)// если бегин равен-1 бегин =ленгс-1
		begin = length - 1;
	for (int i = begin; i >= 0; i--)// отрицательные числа,считывая с конца массива
		if (array[i] == key)
			return i;
	return -1;		//нужно при не правельном варианте, обязательно!
}

void subWord(char array[], int length, char sym) {// войдовская функция принимает массив из символов
	for (int i = 0; i < length; i++)// 
		cout << array[i];
	cout << endl << endl;
}

int main() {
	setlocale(LC_ALL, "russian");
	int n;


	//задача "подслово
	cout << "символьный массив массив:\n";
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
		for (int i = 0; i < 8; i++)
			cout << word[i];
	char Sym;
	cout << "Введите символ: ";
	cin >> Sym;
	cout << "Подслово: \n";
	subWord(word, 8, Sym);
	cout << endl;

	return 0;
}

	//Задание подслово
	void subWord(char array[], int length, char sym) {
		int symIndex = searchIndex(array, length, sym);		//В одной функции вызываем другую.
		if (symIndex == -1)
			cout << "ERROR!";
		else
			for (int i = symIndex; i < length; i++)
				cout << array[i];
	}



	/*double a[5] = {7.7, 5.7, 7.7, 78.3, 4.8,};

	int index = searchIndex(a, 5, 7.7, 4);
	if (index == -1)
		cout << "элемента нет в массиве" << endl;
	else
		cout << "последняя позиция элемента =" << index<<  endl;

	
	int index = searchIndex(a, 5, 7.7, 2);
	if (index == -1)
		cout << "элемента нет в массиве" << endl;
	else
		cout << "элемента стоит на " << index<< "позиции"<< endl;*/


