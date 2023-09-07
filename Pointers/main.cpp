#include <iostream>

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;

}

void p_swap(int* var1, int* var2) {
	int tmp = *var1;
	*var1 = *var2;
	*var2 = tmp;

}

template <typename T>
void arr_sum(T arr[], const int length, T* var);



int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;


	// ��������� �� ����������
	
	//n = 7;
	//std::cout << "n = " << n << std::endl; // n = 7
	//std::cout << "&n = " << &n << std::endl; // ����������������� ��� �.�. & - �������� ��������� � ������
	//int* pn = &n; // ��������� �� ������ ������ ���� int, ������������ �� ���������� n
	//std::cout << "pn = " << pn << std::endl; // ����� n
	//std::cout << "*pn = " << *pn << std::endl; // ������������� ���������
	//
	//*pn = 15;
	//std::cout << "n = " << n << std::endl; // 15
	//std::cout << "-------------------------------------\n";
	//m = 42;
	//std::cout << "m = " << m << std::endl; // 42
	//std::cout << "&m = " << &m << std::endl; // ����� m
	//pn = &m; // ��������������� ��������� �� ���������� m
	//std::cout << "pn = " << pn << std::endl;
	//*pn = 100;
	//std::cout << "m = " << m << std::endl;
	//int* pm = &m;
	//std::cout << "pm = " << pm << std::endl;

	// ��������� � �������

	//const int size = 5;
	//int arr[size]{ 30, 40, 50, 60, 70 };
	////             0   1    2   3   4
	//int* parr = &arr[2];
	//std::cout << "*parr = " << *parr << std::endl; // 50
	//std::cout << "*parr + 1 = " << *parr + 1 << std::endl; // 51
	//std::cout << parr << std::endl; // �����
	//std::cout << parr + 1 << std::endl; // ����� + (1*���_������(int))
	//std::cout << *(parr + 1) << std::endl; // 60
	//parr -= 2;
	//std::cout << *parr << std::endl; //30
	//std::cout << arr << std::endl; // ����� ������� �������� �������
	//
	//std::cout << "������, ���������� ����� ���������:\n";
	//for (int i = 0; i < size; i++)
	//	std::cout << *(parr + i) << " ";
	//std::cout << "\n";

	// ��������� ��� ��������� �������

	//n = 7;
	//m = 15;
	//std::cout << "n = " << n << "; m = " << m << std::endl; // 7 15
	//// my_swap(n, m); // �� �������� ��� ��� �������� - ��� ���� ����� ����������
	//p_swap(&n, &m);
	//std::cout << "n = " << n << "; m = " << m << std::endl; // 7 15


	// ������ 1. ����� ��������� ������� � ���������

	std::cout << "������ 1.\n������: ";
	const int size1 = 5;
	int arr1[size1]{ 15, 5, 6, 13, 1 };

	for (int i = 0; i < size1; i++)
		std::cout << *(arr1 + i) << ' ';
	std::cout << std::endl;

	int sum;

	arr_sum(arr1, size1, &sum);

	std::cout << "����� ��� ���������: " << sum << std::endl;





	return 0;
}


template<typename T>
void arr_sum(T arr[], const int length, T* var){
	*var = 0; // *var = T(); - ����� ������������ �� ���������
	for (int i = 0; i < length; i++) {
		*var += arr[i];
	}
}
