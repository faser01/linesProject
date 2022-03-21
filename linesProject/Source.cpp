
#include <iostream>
using namespace std;

template< typename T>  int searchIndex(T arr[], int L, T key, int begin =0) {
	for (int i = begin; i < L; i++)
		if (arr[i] == key)
			return i;
}

template <typename T> int lastSearchIndex(T array[], int length, T key, int begin = -1) {// �������� ������ � �������� ������� ������
	if (begin == -1)// ���� ����� �����-1 ����� =�����-1
		begin = length - 1;
	for (int i = begin; i >= 0; i--)// ������������� �����,�������� � ����� �������
		if (array[i] == key)
			return i;
	return -1;		//����� ��� �� ���������� ��������, �����������!
}

void subWord(char array[], int length, char sym) {// ���������� ������� ��������� ������ �� ��������
	for (int i = 0; i < length; i++)// 
		cout << array[i];
	cout << endl << endl;
}

int main() {
	setlocale(LC_ALL, "russian");
	int n;


	//������ "��������
	cout << "���������� ������ ������:\n";
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
		for (int i = 0; i < 8; i++)
			cout << word[i];
	char Sym;
	cout << "������� ������: ";
	cin >> Sym;
	cout << "��������: \n";
	subWord(word, 8, Sym);
	cout << endl;

	return 0;
}

	//������� ��������
	void subWord(char array[], int length, char sym) {
		int symIndex = searchIndex(array, length, sym);		//� ����� ������� �������� ������.
		if (symIndex == -1)
			cout << "ERROR!";
		else
			for (int i = symIndex; i < length; i++)
				cout << array[i];
	}



	/*double a[5] = {7.7, 5.7, 7.7, 78.3, 4.8,};

	int index = searchIndex(a, 5, 7.7, 4);
	if (index == -1)
		cout << "�������� ��� � �������" << endl;
	else
		cout << "��������� ������� �������� =" << index<<  endl;

	
	int index = searchIndex(a, 5, 7.7, 2);
	if (index == -1)
		cout << "�������� ��� � �������" << endl;
	else
		cout << "�������� ����� �� " << index<< "�������"<< endl;*/


