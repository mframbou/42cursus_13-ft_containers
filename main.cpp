/* ************************************************************************** */
/*                                                                            */
/*                                  .-.                       .               */
/*                                 / -'                      /                */
/*                  .  .-. .-.   -/--).--..-.  .  .-. .-.   /-.  .-._.)  (    */
/*   By:             )/   )   )  /  /    (  |   )/   )   ) /   )(   )(    )   */
/*                  '/   /   (`.'  /      `-'-''/   /   (.'`--'`-`-'  `--':   */
/*   Created: 28-02-2022  by  `-'                        `-'                  */
/*   Updated: 28-02-2022 15:30 by                                             */
/*                                                                            */
/* ************************************************************************** */

#include "stack.hpp"
#include <iostream>

int main()
{
	ft::stack<int> test;

	std::cout << test.empty() << std::endl;
	test.push(10);
	std::cout << test.empty() << std::endl;
	test.pop();
	std::cout << test.empty() << std::endl;

}