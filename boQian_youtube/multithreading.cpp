#include <iostream>
#include <thread>

using namespace std;

class Fctor {
public:
	void operator()(string& msg){
		cout << "t1 says: " << msg << endl;
		msg = "Trust is the mother of deceit.";
	}

};

int	main(){
	string s = "Where there is no trust, there is no love";
	thread t1((Fctor()), ref(s));	// t1 starts running
	t1.join();	
	cout << "from main: " << s << endl;
	return (0);
}
