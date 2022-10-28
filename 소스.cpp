/*             Object-Oriented Programming, Midterm exam (2021-2)                       */
// Write your answers in Korean or English(답안은 한국어 또는 영어로 작성하시오).
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

//1번

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

//2번

void Set(int* x, int y) {
	*x = y;
}

void Set(int** x, int y) {
	**x = y;
}

//3번


double Sine(double x, bool y) {
	if (y == false)
		return sin(3.141592 / 180 * x);
}

double Sine(double x) {
	return sin(x);
}

//4번

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

//5번

void GetElement(int input, vector<int>& i1, vector<int>& i2) {
	int num;
	num = input % 10;
	i2.push_back(num);

	if (input / 10 > 0) {
		GetElement(input / 10, i1, i2);
	}

	i1.push_back(num);
}

//6번


void AddTo(vector< vector<int>>& v2, int a) {

	for (int i = 0; i < v2.size(); i++) {

		for (int j = 0; j < v2[i].size(); j++) {
			v2[i][j] = v2[i][j] + 10;
		}
	}
}




int main() {
	OOP_2021_2_Exam(ExamCode, SourcePath, Department, StudentId, Name);

	srand((unsigned)time(nullptr)); // nullptr대신에 0가능
	std::cout << std::endl;

	///********** 1번) 아래 3개의 함수를 정의하라(main 함수 위에 작성). - 5점 (Max:1, Mean:2, Ratio:2)
	///**********      |x|는 x의 절댓값(absolute value), 절댓값은 표준함수 사용.
	int  x = 7, y = 3, max = 0;
	double mean = 0, ratio = 0;
	//	max = Max(x, y);		// x, y중에서 큰 값이 max에 저장됨
	std::cout << "Max: " << max << std::endl;							// 출력 예) Max: 7		
	//	Mean(x, y, &mean);		// x, y의 평균이 mean에 저장됨
	std::cout << "Mean: " << mean << std::endl;							// 출력 예) Mean: 5
	//	Ratio(x, y, ratio);		// |x|/|y|가 ratio에 저장됨
	std::cout << "Ratio: " << ratio << std::endl;						// 출력 예) Ratio: 2.33333
	//	Ratio(x, -y, ratio);		// |x|/|y|가 ratio에 저장됨
	std::cout << "Ratio: " << ratio << std::endl;						// 출력 예) Ratio: 2.33333
	//	Ratio(x, 0, ratio);		// x/0은 연산하지 않고, ratio에 0이 저장됨
	std::cout << "Ratio: " << ratio << std::endl;						// 출력 예) Ratio: 0
	std::cout << std::endl;

	///********** 2번) 아래 2개의 함수를 정의하라(main 함수 위에 작성). - 2점 (Set: 1, Set: 1)
	int data = 0;
	int* p = &data;
	int** pp = &p;
	//	Set(p, 1);				// data에 1을 수정
	std::cout << data << std::endl;										// 출력 예) 1
	//	Set(pp, 2);				// data에 2를 대입
	std::cout << data << std::endl;										// 출력 예) 2
	std::cout << std::endl;


	///********** 3번) 아래 Sine 함수를 정의하라(main 함수 위에 작성). - 2점
	///**********      라디안(radian)에서 pi는 3.14159로 사용하며, pi는 180도(degree)이다. sine 계산은 표준함수 사용.
	double a = 0;
	//	a = Sine(3.14159/2.);		// a는 sin(3.14159/2.)
	std::cout << a << std::endl;										// 출력 예) 1
	//	a = Sine(60., false);		// a는 sin(60도(degree))
	std::cout << a << std::endl;										// 출력 예) 0.866025
	std::cout << std::endl;

	///********** 4번) 아래 3개의 함수를 정의하라(main 함수 위에 작성). - 5점 (PrintVector:1, GetRand:2, GetEvenList:2)
	std::vector<int> v1{ 3, 5, 2, 4, 5, 1 }, v2(15), v3;
	//	PrintVector(v1);		// v1의 요소를 출력							// 출력 예) 3,5,2,4,5,1,
	//	GetRand(v2);			// v2의 요소를 임의의 [0, 99]의 값으로 저장
	//	PrintVector(v2);													// 출력 예) 39,64,54,24,33,63,7,76,12,26,90,99,87,77,88,
	//	v3 = GetEvenList(v2);	// v3에 v2의 짝수인 요소를 순서대로 저장
	//	PrintVector(v3);													// 출력 예) 64,54,24,76,12,26,90,88,
	std::cout << std::endl;

	///********** 5번) 아래 GetElement 함수를 recursive function(순환 함수)로 정의하라(main 함수 위에 작성). - 2점
	int input = 24653974;
	std::vector<int> i1, i2;
	//	GetElement(input, i1, i2);  // input의 각 자리를 i1은 순서대로 i2는 역순으로 저장, input이 음수인 경우는 고려하지 않음
	//	PrintVector(i1);													// 출력 예) 2,4,6,5,3,9,7,4,
	//	PrintVector(i2);													// 출력 예) 4,7,9,3,5,6,4,2,
	std::cout << std::endl;

	///********** 6번) 아래 AddTo 함수를 정의하라(main 함수 위에 작성). - 2점
	std::vector<std::vector<int>> vv{ {5, 19, 3}, {22, -8, 10} };
	//	AddTo(vv, 10);		// vv의 각 2차원 요소에 10을 더함
	for (auto v : vv) {
		//		PrintVector(v);													// 출력 예) 
	}																	// 15,29,13, 
	std::cout << std::endl;												// 32,2,20,


	///********** 7번) 아래 코드를 완성하라. - 2점
	///**********      s의 10개의 요소는 임의로 서로 다른 0-9의 값이 저장된다.
	std::vector<int> s(10);
	int i, k = s.size() + 1;
	for (i = 0; i < s.size(); i++) {
		do {
			s[i] = rand() % 10;
			for (k = 0; k < i; ++k)
				if (s[i] == s[k])
					break; //	;앞에 문장을 작성, {} 사용하면 0점
		} while (i != k);
	}

	PrintVector(s);
	//	PrintVector(s);														// 출력 예) 9,4,5,8,0,3,2,7,6,1,
}

