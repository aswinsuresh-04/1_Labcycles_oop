#include<iostream>
using namespace std;

class TIME {
  private:
    int hours, minutes, seconds;
  public:
    TIME() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void input() {
        cout << "\nEnter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    TIME add_time(TIME const &obj) {
    TIME res;
    res.seconds = (seconds + obj.seconds) % 60;
    res.minutes = (minutes + obj.minutes + (seconds + obj.seconds) / 60) % 60;
    res.hours = hours + obj.hours + (minutes + obj.minutes + (seconds + obj.seconds) / 60) / 60;
    return res;
}

};

int main(){
	TIME t1, t2, t3;
	int ch;
	
	while (ch!=4){
		cout<<"\n\n1. Input time. \n2. Add 2 time. \n3. Display added time. \n4. Exit."<<endl;
		cout<<"\nEnter choice: ";
		cin>>ch;
		
		switch (ch){
			case 1:{
				cout<<"\nEnter first time: ";
				t1.input();
				cout<<"\nEnter second time: ";
				t2.input();
				cout<<"\nDone";
				break;
			}
			case 2:{
				t3 = t1.add_time(t2);
				cout<<"\nTime added";
				break;
			}
			case 3:{
				cout<<"\nFirst time: ";
				t1.display();
				cout<<"\nSecond time: ";
				t2.display();
				
				cout<<"\nAdded time: ";
				t3.display();
				break;
			}
			case 4:{
				cout<<"\nThank you";
				break;
			}
			default:{
				cout<<"\nerror!!! please try again";
				break;
			}
		}
	}
	return (0);
}
