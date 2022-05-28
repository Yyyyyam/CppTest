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
	cout << date.Year << "年" << date.Month << "月" << date.Day << "日" << endl;
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
	cout << "学生姓名:" << name << ", 学号:" << num << ", 性别:" << sex << endl; 
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
		cout << "数组成员数量为0，请先调用计算函数" << endl;
	} else {
		cout << "数组成员数量为" << c << "个, 分别是:" << endl;
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
	cout << "字符串为:" << s << endl;
	if (c == 0) {
		cout << "未运行判断函数" << endl; 
	} else {
		cout << "共" << c << "个单词" << endl; 
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
	cout << "左上坐标: (" << ltx << ", " << lty << ")" << endl;
	cout << "左下坐标: (" << rbx << ", " << lty << ")" << endl;
	cout << "右上坐标: (" << ltx << ", " << rby << ")" << endl;
	cout << "右下坐标: (" << rbx << ", " << rby << ")" << endl;
}

void CRectangle::Area() {
	cout << "矩形面积为: " << width*height << endl;
} 

void CRectangle::Move(int x, int y) {
	cout << "x坐标移动" << x << ", y坐标移动" << y << endl; 
	ltx += x;
	lty += y;
	rbx += x;
	rby += y;
}

int main(void) {
	CRectangle test(5, 5, 0, 10);
	if (test.IsSquare() == 1) {
		cout << "是正方形" << endl;
	} else {
		cout << "不是正方形" << endl;
	}
	test.PrintRectangle();
	test.Area();
	test.Move(3,15);
	test.PrintRectangle();
	return 0;
}
