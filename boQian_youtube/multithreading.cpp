#include <iostream>
#include <thread>

using namespace std;

void	function1() { cout << "Hello World\n"; }



class Fctor {
public:
	void operator()(string msg){
		cout << "t1 says: " << msg << endl;
	}

};

int	main(){
	string s = "Where there is no trust, there is no love";
	thread t1((Fctor()), s);	// t1 starts running
	try{
		cout << "from main: " << s << endl;
	} catch(...) {
		t1.join();	//main thread waits for t1 to finish
		throw;
	}
	t1.join();	
	return (0);
}
