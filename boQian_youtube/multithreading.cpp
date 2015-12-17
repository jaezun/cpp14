#include <iostream>
#include <thread>

using namespace std;

void	function1() { cout << "Hello World\n"; }



class Fctor {
public:
	void operator()(){
		for (int i=0; i>-100; i--){ cout << "from t1 " << i << endl; }
	}

};

int	main(){
	Fctor fct;
	thread t1(fct);	// t1 starts running
	try{
		for (int i = 0; i < 100; i++) cout << "from main: " << i << endl;
	} catch(...) {
		t1.join();	//main thread waits for t1 to finish
		throw;
	}
	t1.join();	
	return (0);
}
