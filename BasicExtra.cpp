#include <iostream>
#include<math.h>

using namespace std;

void test1(void) {
	int num = -1;
	bool isPass = true;
	cout << "������һ��������:" << endl;
	cin >> num;
	if (num < 0) {
		cout << "������һ��������!" << endl;
		return;
	}
	if (num < 2) {
		cout << "��������" << endl;
		return;
	}
	for (int i = 2; i < num; i++) {
		if(num % i == 0) {
			isPass = false;
			break;
		}
	}
	if(isPass) {
		cout << "������" << endl;
	} else {
		cout << "��������" << endl;
	}
}

void test2(void) {
	for (int i=1 ; i <= 1000 ; i++) {
		bool isPass = true;
		if (i < 2) {
			continue;
		}
		for (int j = 2; j < i; j++ ) {
			if (i % j == 0) {
				isPass = false;
				break;
			}
		}
		if (isPass) {
			cout << i << endl;
		}
	}
}

void test3(void) {
	int num1 = -1;
	int num2 = -1;
	cout << "�������һ����:" << endl;
	cin >> num1;
	cout << "������ڶ�����:" << endl;
	cin >> num2;
	while(num1 != num2) {
		if(num1 > num2) {
			num1 -= num2;
		} else {
			num2 -= num1;
		}
	}
	cout << "���Լ��:" << num1 << endl; 
}

void test4(void) {
	int sum = 0;
	for(int i = 1 ; i <= 100 ; i++) {
		if(i % 2 == 0) {
			sum += i;
		}
	}
	cout << sum << endl; 
}

void test5(void) {
	int num = -1;
	bool isPass = true;
	cout << "������һ��������:" << endl;
	cin >> num;
	if (num < 0) {
		cout << "������һ��������!" << endl;
		return;
	}
	if (num < 2) {
		cout << "��������" << endl;
		return;
	}
	for (int i = 2; i < num; i++) {
		if(num % i == 0) {
			isPass = false;
			break;
		}
	}
	if(isPass) {
		cout << "������" << endl;
	} else {
		cout << "��������" << endl;
	}
}

void test6(void) {
	int num = -1;
	cout << "������һ��������:" << endl;
	cin >> num;
	if (num < 0) {
		cout << "������һ��������!" << endl;
		return;
	}
	cout << num << "�Ķ�������Ϊ:";
	int binary = 0;
	int location = 0;
	for (int i = num ; i  != 0 ; i /= 2) {
		binary += (i % 2) * pow(10 , location);
		location += 1;
	}
	cout << binary << endl;
}

void test7(void) {
	for (int i = 1 ; i <= 1000 ; i++) {
		int sum = 0, e = 0, p = i;
		do {
			p = p/10;
			e++;
		}while (p != 0);
		p = i;
		do {
			sum = sum + pow(p%10, e);
			p = p/10;
		}while (p != 0);
		if (sum == i) {
			cout <<  i << endl;
		}
	}
}

void test8(void) {
	int num1 = -1, num2 = -1, num3 = -1, temp = -1;
	cout << "������������:" << endl;
	cin >> num1 >> num2 >> num3;
	if (num1 > num2) {
		temp = num2;
		num2 = num1;
		num1 = temp;
	}
	if (num1 > num3) {
		temp = num3;
		num3 = num1;
		num1 = temp;
	}
	if (num2 > num3) {
		temp = num3;
		num3 = num2;
		num2 = temp;
	}
	cout << "��������С��������Ϊ:" << num1 << ", " << num2 << ", " << num3 << endl;
}

void test9(int rows) {
	for (int i = 0; i <= rows; i++) {
		for(int j = rows; j >= i ; j--){
			cout << " ";
		}
		
		for(int j = 1; j <= 2 * i-1 ; j++){
			cout << "*";
		}
		cout << endl;
	}
} 

void test10() {
	int year = -1, month = -1, day = -1, sum = 0;
	int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cout << "��ֱ������ꡢ�¡���:" << endl;
	cin >> year >> month >> day;
	for (int i = 0; i < month-1; i++) {
		sum += arr[i];
	}
	sum += day;
	if (year % 4 == 0 && month > 2) {
		sum += 1;
	}
	cout << year << "��" << month << "��" << day << "��Ϊ����ĵ�" << sum << "��" << endl; 
}

int main(void) {
	test10();
	return 0;
} 

