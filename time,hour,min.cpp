#include <iostream>
using namespace std;

class Time {
  private:
    int hour;
    int minute;
    int second;
    int day;

  public:
    Time(int h = 0, int m = 0, int s = 0, int d = 1) {
        hour = h;
        minute = m;
        second = s;
        day = d;
    }

    void setHour(int h) {
        hour = h;
    }

    void setMinute(int m) {
        minute = m;
    }

    void setSecond(int s) {
        second = s;
    }

    void setDay(int d) {
        day = d;
    }

    int getHour() const {
        return hour;
    }

    int getMinute() const {
        return minute;
    }

    int getSecond() const {
        return second;
    }

    int getDay() const {
        return day;
    }

    void printTime() const {
        cout << day << "/" << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time t(10, 30, 45, 13);

    cout << "Time is: ";
    t.printTime();

    t.setHour(12);
    t.setMinute(15);
    t.setSecond(0);

    cout << "Time is now: ";
    t.printTime();

    return 0;
}

