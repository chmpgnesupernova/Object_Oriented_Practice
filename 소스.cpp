/*             Object-Oriented Programming, Midterm exam (2021-2)                       */
// Write your answers in Korean or English(����� �ѱ��� �Ǵ� ����� �ۼ��Ͻÿ�).
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

static std::string Department = "SWC";
static std::string StudentId = "2000123456";
static std::string Name = "Hong Gildong";
static std::string ExamCode = "12k[2#1ng7263~de+?2";

void OOP_2021_2_Exam(std::string ExamCode, std::string SourcePath, std::string Department, std::string StudentId, std::string Name);
static std::string SourcePath = __FILE__;

using namespace std;

//1��

int Max(int x, int y) {
	return (x > y) ? x : y;
}

void Mean(int x, int y, double* mean) {
	*mean = (x + y) / 2;
}

void Ratio(double x, double y, double& ratio) {
	if (y == 0)
		ratio = 0;
	else
		ratio = abs(x) / abs(y);
}

//2��

void Set(int* x, int y) {
	*x = y;
}

void Set(int** x, int y) {
	**x = y;
}

//3��


double Sine(double x, bool y) {
	if (y == false)
		return sin(3.141592 / 180 * x);
}

double Sine(double x) {
	return sin(x);
}

//4��

void PrintVector(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << ", ";
	}
	cout << '\n';
}

void GetRand(vector<int>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		vec[i] = rand() % 100;
	}
}

vector<int> GetEvenList(vector<int>& vec) {

	vector<int> resultVec;

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] % 2 == 0) {
			resultVec.push_back(vec[i]);
		}
		else
			continue;
	}

	return resultVec;
}

//5��

void GetElement(int input, vector<int>& i1, vector<int>& i2) {
	int num;
	num = input % 10;
	i2.push_back(num);

	if (input / 10 > 0) {
		GetElement(input / 10, i1, i2);
	}

	i1.push_back(num);
}

//6��


void AddTo(vector< vector<int>>& v2, int a) {

	for (int i = 0; i < v2.size(); i++) {

		for (int j = 0; j < v2[i].size(); j++) {
			v2[i][j] = v2[i][j] + 10;
		}
	}
}




int main() {
	OOP_2021_2_Exam(ExamCode, SourcePath, Department, StudentId, Name);

	srand((unsigned)time(nullptr)); // nullptr��ſ� 0����
	std::cout << std::endl;

	///********** 1��) �Ʒ� 3���� �Լ��� �����϶�(main �Լ� ���� �ۼ�). - 5�� (Max:1, Mean:2, Ratio:2)
	///**********      |x|�� x�� ����(absolute value), ������ ǥ���Լ� ���.
	int  x = 7, y = 3, max = 0;
	double mean = 0, ratio = 0;
	//	max = Max(x, y);		// x, y�߿��� ū ���� max�� �����
	std::cout << "Max: " << max << std::endl;							// ��� ��) Max: 7		
	//	Mean(x, y, &mean);		// x, y�� ����� mean�� �����
	std::cout << "Mean: " << mean << std::endl;							// ��� ��) Mean: 5
	//	Ratio(x, y, ratio);		// |x|/|y|�� ratio�� �����
	std::cout << "Ratio: " << ratio << std::endl;						// ��� ��) Ratio: 2.33333
	//	Ratio(x, -y, ratio);		// |x|/|y|�� ratio�� �����
	std::cout << "Ratio: " << ratio << std::endl;						// ��� ��) Ratio: 2.33333
	//	Ratio(x, 0, ratio);		// x/0�� �������� �ʰ�, ratio�� 0�� �����
	std::cout << "Ratio: " << ratio << std::endl;						// ��� ��) Ratio: 0
	std::cout << std::endl;

	///********** 2��) �Ʒ� 2���� �Լ��� �����϶�(main �Լ� ���� �ۼ�). - 2�� (Set: 1, Set: 1)
	int data = 0;
	int* p = &data;
	int** pp = &p;
	//	Set(p, 1);				// data�� 1�� ����
	std::cout << data << std::endl;										// ��� ��) 1
	//	Set(pp, 2);				// data�� 2�� ����
	std::cout << data << std::endl;										// ��� ��) 2
	std::cout << std::endl;


	///********** 3��) �Ʒ� Sine �Լ��� �����϶�(main �Լ� ���� �ۼ�). - 2��
	///**********      ����(radian)���� pi�� 3.14159�� ����ϸ�, pi�� 180��(degree)�̴�. sine ����� ǥ���Լ� ���.
	double a = 0;
	//	a = Sine(3.14159/2.);		// a�� sin(3.14159/2.)
	std::cout << a << std::endl;										// ��� ��) 1
	//	a = Sine(60., false);		// a�� sin(60��(degree))
	std::cout << a << std::endl;										// ��� ��) 0.866025
	std::cout << std::endl;

	///********** 4��) �Ʒ� 3���� �Լ��� �����϶�(main �Լ� ���� �ۼ�). - 5�� (PrintVector:1, GetRand:2, GetEvenList:2)
	std::vector<int> v1{ 3, 5, 2, 4, 5, 1 }, v2(15), v3;
	//	PrintVector(v1);		// v1�� ��Ҹ� ���							// ��� ��) 3,5,2,4,5,1,
	//	GetRand(v2);			// v2�� ��Ҹ� ������ [0, 99]�� ������ ����
	//	PrintVector(v2);													// ��� ��) 39,64,54,24,33,63,7,76,12,26,90,99,87,77,88,
	//	v3 = GetEvenList(v2);	// v3�� v2�� ¦���� ��Ҹ� ������� ����
	//	PrintVector(v3);													// ��� ��) 64,54,24,76,12,26,90,88,
	std::cout << std::endl;

	///********** 5��) �Ʒ� GetElement �Լ��� recursive function(��ȯ �Լ�)�� �����϶�(main �Լ� ���� �ۼ�). - 2��
	int input = 24653974;
	std::vector<int> i1, i2;
	//	GetElement(input, i1, i2);  // input�� �� �ڸ��� i1�� ������� i2�� �������� ����, input�� ������ ���� ������� ����
	//	PrintVector(i1);													// ��� ��) 2,4,6,5,3,9,7,4,
	//	PrintVector(i2);													// ��� ��) 4,7,9,3,5,6,4,2,
	std::cout << std::endl;

	///********** 6��) �Ʒ� AddTo �Լ��� �����϶�(main �Լ� ���� �ۼ�). - 2��
	std::vector<std::vector<int>> vv{ {5, 19, 3}, {22, -8, 10} };
	//	AddTo(vv, 10);		// vv�� �� 2���� ��ҿ� 10�� ����
	for (auto v : vv) {
		//		PrintVector(v);													// ��� ��) 
	}																	// 15,29,13, 
	std::cout << std::endl;												// 32,2,20,


	///********** 7��) �Ʒ� �ڵ带 �ϼ��϶�. - 2��
	///**********      s�� 10���� ��Ҵ� ���Ƿ� ���� �ٸ� 0-9�� ���� ����ȴ�.
	std::vector<int> s(10);
	int i, k = s.size() + 1;
	for (i = 0; i < s.size(); i++) {
		do {
			s[i] = rand() % 10;
			for (k = 0; k < i; ++k)
				if (s[i] == s[k])
					break; //	;�տ� ������ �ۼ�, {} ����ϸ� 0��
		} while (i != k);
	}

	PrintVector(s);
	//	PrintVector(s);														// ��� ��) 9,4,5,8,0,3,2,7,6,1,
}

