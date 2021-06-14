 #include <iostream>

using namespace std;


//The Object ADT
class Time {
public:

	int hour;
	int min;
	int sec;

	Time(){

	}

	Time(int hours, int mins, int secs){
		hour = hours;
		min = mins;
		sec = secs;
	}


	Time operator+(Time t){
		Time newTime(0, 0, 0);


		newTime.hour = hour + t.hour;
		newTime.min = min + t.min;
		newTime.sec = sec + t.sec;

		return  newTime;
		
	}

	void print(){
		cout<<hour<<" hours "<<min<<" minutes "<<sec<<" seconds"<<"\n";
	}

};

