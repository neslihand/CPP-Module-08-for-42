/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:12:33 by ndogan            #+#    #+#             */
/*   Updated: 2025/09/03 17:12:35 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>


int main(){
    try
    {
        std::vector<int> vec;
        vec.push_back(0);
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        std::list<int> li;
        li.push_back(12);
        li.push_back(22);
        li.push_back(32);
        li.push_back(42);

        std::vector<int>::iterator vec_it = easyfind(vec, 4);
        std::list<int>::iterator list_it = easyfind(li, 42);

        std::cout << "Vector find: " << *vec_it << std::endl;
        std::cout << "List find: " << *list_it << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    
}