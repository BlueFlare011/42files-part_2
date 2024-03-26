#include "Point.hpp"

/*
     /|
    / |
   /  |
  / * |
 /    |
/_____|
*/

/*
     /|
  * / |
   /  |
  /   |
 /    |
/_____|
*/

/*
     /|
    / |
   /  *
  /   |
 /    |
/_____|
*/

int main()
{
	Point p1(-1.0f, -1.0f), p2(1.0f, -1.0), p3(0.0f, 1.0f), r(-0.6f, 0.2f);

	if (bsp(p1, p2, p3, r)){
		std::cout << "Dentro" << std::endl;
	}else{
		std::cout << "Fuera" << std::endl;
	}
	return (0);
}
