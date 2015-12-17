#include <iostream>
#include <thread>

using namespace std;

void	function1() { cout << "Hello World\n"; }

int	main(){
	thread t1(function1);	// t1 starts running
	t1.detach();		// t1 will freely work on its own	
	if (t1.joinable())		
		t1.join();	//main thread waits for t1 to finish
	
	return (0);
}
