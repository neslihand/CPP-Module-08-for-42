/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:12:43 by ndogan            #+#    #+#             */
/*   Updated: 2025/09/03 18:48:25 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm> 

Span::Span(): size(42){}

Span::Span(unsigned int N){
    this->size = N;
}

Span::Span(const Span& other){
    this->size = other.size;
    this->container = other.container;    
}

Span& Span::operator=(const Span& other){

    if (this != &other)
    {
        this->size = other.size;
        this->container = other.container;
    }
    return *this;
}

Span::~Span(){}

void Span::addNumber(int n){
    if (container.size() < this->size)
        this->container.push_back(n);
    else
        throw std::length_error("Span capacity is full, no new elements can be added!");
}

int Span::shortestSpan(){

    if(this->container.size() <= 1)
        throw std::runtime_error("Not enough value");
    else if (this->container.size() == 2)
        return (this->container[0] > this->container[1] ? this->container[0] - this->container[1] : this->container[1] - this->container[0]);
    else {
        int distance = 0;
        std::sort(this->container.begin(), this->container.end());
        for (size_t i = 0; i < this->container.size(); i++)
        {
            if (i + 1 != this->container.size())
            {
                int d = this->container[i + 1] - this->container[i];
                if (distance > d || i == 0)
                    distance = d;
            }
        }
        return distance;
    }
   return 0;
}

int Span::longestSpan(){
    if(this->container.size() <= 1)
        throw std::runtime_error("Not enough value");
    else if (this->container.size() == 2)
        return (this->container[0] > this->container[1] ? this->container[0] - this->container[1] : this->container[1] - this->container[0]);
    else
    {
        std::sort(this->container.begin(), this->container.end());
        return (this->container.back() - this->container.front());
    }
   return 0;
}

void Span::addRange(int begin, int end){
    if (end > begin)
    {
        int range = end - begin + 1;
        if (range + this->container.size() > this->size)
            throw std::runtime_error("Not enough capacity!");
        else{
            int i = 0;
            while (range--)
            {
                this->container.push_back(begin + i);
                i++;
            }
        } 
    }
    else if (begin > end)
    {
        int range = begin - end + 1;
        if (range + this->container.size() > this->size)
            throw std::runtime_error("Not enough capacity!");
        else{
            int i = 0;
            while (range--)
            {
                this->container.push_back(end + i);
                i++;
            }
        } 
    }
    else
        this->container.push_back(begin);
}

int Span::getValue(unsigned int index){
    if (index >= 0 && index < this->size)
        return this->container[index];
    else
        throw std::runtime_error("Invalid index!");
    return 0;
}

int Span::getSize(){
    return this->size;
}