#include "example.h"
#include "moved_out.h"

#include <iostream>


int main() {
	std::cout << "Hello, World!" << std::endl;

	example_function();
	todo_move_me_out();
	
	return 0;
}