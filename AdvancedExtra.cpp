#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

void test1(int n) {
	int group[n];
	int sum = 0;
	cout << "�����Ա�ֱ���:"; 
	for (int i = 0 ; i < n ; i++) {
		srand(i);
		group[i] = rand();
		cout << group[i] << ", "; 
		sum += group[i];
	}
	cout << endl; 
	int m = sum/n;
	cout << "ƽ��ֵΪ:" << m << endl; 
	int t = 0;
	for (int i = 0 ; i < n ; i++) {
		if(group[i] >= m) {
			t += 1;
		}
	}
	cout << "����ƽ��ֵ������Ϊ:" << t << "��" << endl; 
} 

void test2(void) {
	int group[3][4];
	int sum = 0;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 4 ; j++) {
			cout << "�������" << i+1 << "�У�" << j+1 << "�е�����:";
			cin >> group[i][j];
			sum += group[i][j];
		}
	}
	int m = sum/12;
	cout << "����Ԫ�ص�ƽ��ֵΪ:" << m << endl;
}

void change(int a[], int p) {
		if (p > 5) return;
		int temp = a[p];
		a[p] = a[10 - p - 1];
		a[10 - p - 1] = temp;
		change(a , p+1);
}

void test3(void) {
	int a[10] = {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
	change(a, 0);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ", ";
	}
}

void trans(int n, int base) {
	cout << n << "��" << base << "������Ϊ:";
	int basedNum = 0;
	int location = 0;
	for (int i = n ; i  != 0 ; i /= base) {
		basedNum += (i % base) * pow(10 , location);
		location += 1;
	}
	cout << basedNum << endl;
} 

int test5(int a, int b, int c) {
	if (b > a) {
		a = b;
	}
	if(c > a) {
		a = c;
	} 
	return a;
}

int test5(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int Reverse(unsigned int s)
{
	int p = -1;
	int location = 0;
	int num = 0;
	do{
		p = s % 10;
		num = (10 * num) + p;
		s /= 10;
	}while(s != 0);
	return num;
}

void test7(int sum, int n) {
	if (sum < 1000) {
		sum += 10 * n + 2;
		test7(sum, n+1);
	} else {
		cout << "�������Ϊ:" << n-1 << endl;
	}
}

int main(void) {
	test7(0, 1);
	return 0;
}
