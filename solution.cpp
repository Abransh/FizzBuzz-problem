//Fizz Buzz is a classic developer interview question that is asked or referred to so often for so long, it is almost a cliché!

//Though this challenge will appear very simplistic to those with some coding experience, it is designed to weed out 99.5% programming job candidates who cannot creatively use their coding knowledge to solve simple problems.

#include <iostream>

int main ()
{
int i = 1; 

for(int i = 1; i <= 100; i++ )
{
if(i % 3 != 0 && i % 5 != 0){

  std::cout << i << std::endl; 
}
else if( i % 3 == 0 && i % 5 != 0  )
{
  std::cout << "Fizz" << std::endl; 
}
else if( i % 3 != 0 && i % 5 == 0)
{
  std::cout << "buzz" << std::endl; 
}
else if(i % 3 == 0 && i % 5 == 0)
{
  std::cout << "FizzBuzz" << std::endl; 

}
}


}
