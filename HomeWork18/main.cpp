#include <iostream>
#include <cmath>





int sum(int num1, int num2=0, int num3 = 0, int num4 = 0, int num5 = 0) {
	int result = num1 + num2 + num3 + num4 + num5;
	
	return result;
}

inline double arif(double num1, double num2, double num3) {
double result = (num1 + num2 + num3) / 3;

	return result;

}

int MAX(int num1, int num2, int num3) {
	std::cout << "INTS -> ";
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else return num3;
}
short MAX(short num1, short num2, short num3) {
	std::cout << "SHORTS ->";
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else return num3;


}
double MAX(double num1, double num2, double num3) {
	std::cout << "Doubles -> ";
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	else return num3;
}


// Задание номер 4 в процессе. Не понимаю как обнулить числа, именно справа от отрицательного, чтобы его самого не задеть.

//template <typename T>
//void print_arr(T arr[], const int length) {
//	int neg = 0;
//	std::cout << "Массив изначальный: ";
//
//	for (int j = 0; j < length; j++) {
//		std::cout << arr[j] << ' ';
//	}
//	for (int i = 0; i < length; i++) {
//		if (arr[i] < 0)
//			std::cout << "\n\nОтрицательное число массива -> " << arr[i] << "\n\n\n";
//
//
//	}
//
//}








int main() {
	setlocale(LC_ALL, "Russian");
	int num1 = 14, num2 = 2, num3 = 5, num4 = 7, num5 = 25, n{}, m{};
	int arif1, arif2, arif3;
	
	std::cout << "Задача 1 \n\n";
	std::cout << sum(num1,num2,num3,num4,num5); // Если я правильно понял условие задачи. Тут можно убрать любой num и функция заменит его значение на 0 (кроме первого).
	
	std::cout << "\n\nЗадача 2\n\n";
	
	std::cout << "Введите три числа -> ";
	std::cin >> arif1 >> arif2 >> arif3;
	std::cout << "Среднее Арифметическое чисел " << arif1 << " и " << arif2 << " и " << arif3 << " = " << arif(arif1, arif2, arif3);
	
	std::cout << "\n\nЗадача 3\n\n";
	
	std::cout<< "Максимальное число -> " << MAX(124, 1552, 116) << std::endl;
	
	std::cout << "\n\nЗадача 4\n\n"; // Задание номер 4 в процессе. Не понимаю как обнулить числа, именно справа от отрицательного, чтобы его самого не задеть.

	const int size = 5;
	int arr[size]{ 10, 15, -5 ,22, 25 };

	



	return 0;
}