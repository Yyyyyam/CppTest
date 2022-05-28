#include <iostream>
#include <string.h>

using namespace std;

class TDate {
	public :
		TDate(int Day = 1, int Month = 1, int Year = 2022) {
			this->Year = Year;
			this->Month = Month;
			this->Day = Day;
		}
		
		friend void TDateInfo(TDate date);
		
	private :
		int Month, Day, Year;
};

void TDateInfo(TDate date) {
	cout << date.Year << "��" << date.Month << "��" << date.Day << "��" << endl;
}

class Student {
	public :
		Student(char sNum[], char sName[], char sSex[]) {	
			strcpy(num, sNum);
			strcpy(name, sName);
			strcpy(sex, sSex);
		}
		
		void toString();
		
	private :
		char num[12], name[10], sex[5];
};

void Student::toString() {
	cout << "ѧ������:" << name << ", ѧ��:" << num << ", �Ա�:" << sex << endl; 
}

class NUM {
	public :
		NUM() {
			c = 0;
		}
		
		void fun();
		
		void disp();
		
	private :
		int a[50], c;
};

void NUM::fun() {
	for (int i = 0; i < 100; i++) {
		if (i % 7 == 0 && i % 9 != 0) {
			a[c++] = i;
		} else if (i % 9 == 0 && i % 7 != 0) {
			a[c++] = i;
		}
	}
}

void NUM::disp() {
	if (c == 0) {
		cout << "�����Ա����Ϊ0�����ȵ��ü��㺯��" << endl;
	} else {
		cout << "�����Ա����Ϊ" << c << "��, �ֱ���:" << endl;
		for (int i = 0; i < c; i++) {
			cout << a[i];
			if ((i+1) % 5 == 0 || (i+1) == c) {
				cout << endl;
			} else {
				cout << ", ";
			}
		}
	}
}

class WORD {
	public :
		WORD(char *str) {
			strcpy(s, str);
			c = 0;
		}
		
		void fun();
		
		void disp();
		
	private :
		char s[80];
		int c;
};

void WORD::fun() {
	for (int i = 0; i < 80; i++) {
		if (s[i] == '\0') break;
		if (s[i] == ' ' || s[i] == '.') c += 1;
	}
}

void WORD::disp() {
	cout << "�ַ���Ϊ:" << s << endl;
	if (c == 0) {
		cout << "δ�����жϺ���" << endl; 
	} else {
		cout << "��" << c << "������" << endl; 
	}
}

class CRectangle {
	public :
		CRectangle(int ltx, int lty, int rbx, int rby) {
			this->ltx = ltx;
			this->lty = lty;
			this->rbx = rbx;
			this->rby = rby;
			width = rbx - ltx;
			height = lty - rby;
		}
		
		int IsSquare();
		
		void PrintRectangle();
		
		void Area();
		
		void Move(int x, int y);
		
	private :
		int ltx, lty, rbx, rby, width, height;
};

int CRectangle::IsSquare() {
	if (width == height) return 1;
	else return 1;
}

void CRectangle::PrintRectangle()  {
	cout << "��������: (" << ltx << ", " << lty << ")" << endl;
	cout << "��������: (" << rbx << ", " << lty << ")" << endl;
	cout << "��������: (" << ltx << ", " << rby << ")" << endl;
	cout << "��������: (" << rbx << ", " << rby << ")" << endl;
}

void CRectangle::Area() {
	cout << "�������Ϊ: " << width*height << endl;
} 

void CRectangle::Move(int x, int y) {
	cout << "x�����ƶ�" << x << ", y�����ƶ�" << y << endl; 
	ltx += x;
	lty += y;
	rbx += x;
	rby += y;
}

int main(void) {
	CRectangle test(5, 5, 0, 10);
	if (test.IsSquare() == 1) {
		cout << "��������" << endl;
	} else {
		cout << "����������" << endl;
	}
	test.PrintRectangle();
	test.Area();
	test.Move(3,15);
	test.PrintRectangle();
	return 0;
}
