#include <iostream>

using namespace std;

int main() {
    int height, weight, hand, leg, experince;
    string eyeColor;

    cout << "Отбор в пилоты!\n\n";
    cout << "Введите Ваш рост: ";
    cin >> height;
    cout << "Введите Ваш вес: ";
    cin >> weight;
    cout << "Сколько у Вас рук? ";
    cin >> hand;
    cout << "Сколько у Вас ног? ";
    cin >> leg;    
    cout << "Сколько часов Вы летали на самолётах? ";
    cin >> experince;
    cout << "Какой цвет Ваших глаз? (С)иний, (К)арий, (З)елёный, (Д)ругой ";
    cin >> eyeColor;

    if (experince >= 100) {
        cout << "Вы приняты!\n";
        return 1;
    }
    else if (eyeColor[0] == 'З' || eyeColor[0] == 'з') {        
        cout << "Не быть Вам пилотом!";
        return 0; 
    }
    else if (height > 145 && height < 165 && weight > 45 && weight < 65 && hand == leg) {
        cout << "Вы приняты!\n";
        return 1;    
    }
    else {
        cout << "Не быть Вам пилотом!";
        return 0;
    }

    return 0;
}