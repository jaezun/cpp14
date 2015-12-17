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
	cout << this_thread::get_id() << endl;
	string s = "Where there is no trust, there is no love";
	thread t1((Fctor()), ref(s));	// t1 starts running
	cout << t1.get_id() << endl;

	thread t2 = move(t1);

	t2.join();	
	cout << "from main: " << s << endl;
	return (0);
}
