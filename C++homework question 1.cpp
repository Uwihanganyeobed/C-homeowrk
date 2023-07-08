/*
Here is a homework for advanced C++
group memebrs and reg_no
RUSHIMISHA DIEUDONNE 222013223
NIYONGABO JEAN DE DIEU 222012223
UWIHANGANYE OBED 222011553
*/
#include <iostream>

int Findit(int start_time, int end_time) {
    int amount = 0;
    if ((start_time <0 || start_time >23) || (end_time <1 || end_time>24)) {
        return -1;
    } else {
        for (int hour=start_time; hour< end_time; hour++){
            if ((hour >= 0 && hour < 7) || (hour >=21 && hour< 24)) {
                amount += 500;
            } else if ((hour >= 7 && hour < 14) || (hour >=19 && hour< 21)) {
                amount += 1000;
            } else if ((hour >= 14 && hour< 19)) {
                amount += 1500;
            }
        }
    }
    return amount;
}

int main() {
    int SH;
    int EH;
    std::cout << "Please enter your starting hour: ";
    std::cin >> SH;
    std::cout << "Please enter your ending hour: ";
    std::cin>>EH;
    
    int amount = Findit(SH, EH);
    if (amount == -1) {
        std::cout<<"incorrect time, please your hours should not exceed a day";
    } else {
    std::cout <<"The amount to pay: "<<amount;
    }
    return 0;
}