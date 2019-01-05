#include <iostream>
#include <thread>
#include <future>

using namespace std;

int main (int argc, char const * argv[])
{
	cout << "Hello World " __FILE__ << endl;

	auto handler = async([] (){ this_thread::sleep_for(12s); cout << "Thread Id: " << this_thread::get_id() << endl;});

	cout << "Main thread Id: : " << this_thread::get_id() << endl;
	
	return 0;

}
