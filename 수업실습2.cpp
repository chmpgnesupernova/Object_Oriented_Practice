#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
    int height;
    int row = 1;
    char answer;
    cout << "높이를 입력하세요:" << endl;
    cin >> height;

    if (height > 100) {
        cout << "확실해요? 맞으면 'y' 아니면 'n' 를 입력하세요." << endl;
        cin >> answer;

        if (answer == 'y') {
            cout << "미친새끼 . . .";
            Sleep(500);
            cout << " . . . ";
            Sleep(500);
            cout << ". . .";
            Sleep(1000);
            cout << " . ";
            Sleep(1000);
            cout << ". " << endl;
            Sleep(1000);
        }

        else if (answer == 'n') {
            cout << "잘 생각 했어요. 프로그램을 종료합니다." << endl;
            exit(0);
        }
    }

    while (row <= height) {

        int i = 1;
        while (i <= height - row) {
            cout << " ";
            i++;
        }

        int j = 1;
        while (j <= 2 * row - 1) {

            if (j == row) cout << row;
            else cout << "*";
            j++;
        }

        cout << endl;
        row++;
    }
}

