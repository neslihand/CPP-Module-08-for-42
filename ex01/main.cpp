/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:12:39 by ndogan            #+#    #+#             */
/*   Updated: 2025/09/03 18:48:35 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

void test1(){
    std::cout << "\n\n----- Test 1 -----" << std::endl;
    Span sp(10);
    sp.addNumber(43);
    sp.addNumber(90);
    sp.addNumber(-9980);
    sp.addNumber(-903);
    sp.addNumber(-92);
    sp.addNumber(-47);
    sp.addNumber(-2);
    sp.addNumber(-9970);
    std::cout << "Longest: " << sp.longestSpan() << std::endl;
    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
}

void test2(){
    std::cout << "\n\n----- Test 2 -----" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "Longest: "  << sp.longestSpan() << std::endl;
    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
}

void test3(){
    std::cout << "\n\n----- Test 3 -----" << std::endl;
    Span sp(9);
    sp.addNumber(0);
    sp.addNumber(1);
    sp.addRange(2, 8);
    int i = 0;
    while (i < sp.getSize())
    {
        std::cout << "Value: " << sp.getValue(i) << std::endl;
        i++;
    }
}

void test4(){
    std::cout << "\n\n----- Test 4 -----" << std::endl;
    Span sp(9);
    sp.addNumber(0);
    sp.addNumber(1);
    sp.addRange(8, 2);
    int i = 0;
    while (i < sp.getSize())
    {
        std::cout << "Value: " << sp.getValue(i) << std::endl;
        i++;
    }
}

void test5(){
    std::cout << "\n\n----- Test 5 -----" << std::endl;
    Span sp(2);
    sp.addNumber(0);
    sp.addRange(2, 2);
    int i = 0;
    while (i < sp.getSize())
    {
        std::cout << "Value: " << sp.getValue(i) << std::endl;
        i++;
    }
}

void test6(){
    std::cout << "\n\n----- Test 6 -----" << std::endl;
    Span sp(10100);
    sp.addRange(-99, 10000);
    int i = 0;
    while (i < sp.getSize())
    {
        std::cout << "Value: " << sp.getValue(i) << std::endl;
        i++;
    }
    std::cout << "Longest: "  << sp.longestSpan() << std::endl;
    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
}

void test7(){
    std::cout << "\n\n----- Test 7 -----" << std::endl;
    Span sp(100);
    int i = 0;
    while (i < 100) {
        sp.addNumber(1);
        i++;
    }
    i = 0;
    while (i < sp.getSize())
    {
        std::cout << "Value: " << sp.getValue(i) << std::endl;
        i++;
    }
    std::cout << "Longest: "  << sp.longestSpan() << std::endl;
    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
}

int main(){
    try
    {
        test1();
        test2();
        test3();
        test4();
        test5();
        // test6();
        // test7();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}