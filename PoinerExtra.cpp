#include <iostream>

using namespace std;

// 判断是否是三位数后，根据逻辑判断输出哪种显示方式 
void test1(int num) {
	if(num < 100 || num > 999) {
		cout << "请输入三位数!" << endl;
		return;
	}
	int n[3] = {num % 10 , (num/10)%10 , num/100};
	char a[10][6]={"","one","two","three","four","five","six","seven","eight","nine"}; 
	char b[10][8]={"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety",}; 
	char c[10][11]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","senventeen","eighteen","ninteen"};
	if (n[1] == 0) {
		if (n[0] != 0) {
			cout << a[n[2]] << " hundred and " << a[n[0]] << endl;
		} else {
			cout << a[n[2]] << " hundred" << endl;
		}
	} else if (n[1] == 1) {
		cout << a[n[2]] << " hundred and " << c[n[0]] << endl;
	} else {
		cout << a[n[2]] << " hundred and " << b[n[1]] << " " << a[n[0]] << endl;
	}
}

int Strlen(char *s) {
	int count = 0;
	while ( *s != '\0') {
		count += 1;
		s += 1;
	}
	return count;
}
 
void Strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++) != '\0'); 
}

// 先获取字符串长度，根据长度将前后对应位置字符互换 
char* Reverse(char* s)
{
	int length = Strlen(s);
	char *temp = new char[length];
	Strcpy(temp, s);
	for (int i = 0; i <= length/2; ++i)
	{
 		char c = temp[i];
		temp[i] = temp[length - i -1];
 		temp[length - i -1] = c;
	}
	return temp;
}

void test5(int num) {
	cout << "输入的值为:" << num << endl;
	int temp = num, sum = 0;
	while(temp != 0) {
		sum = (sum * 10) + (temp % 10);
		temp /= 10;
	}
	if (sum == num) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}

int main(void) {
	test5(15351);
	return 0;
}
