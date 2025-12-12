/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:12:46 by ndogan            #+#    #+#             */
/*   Updated: 2025/09/03 17:12:48 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

class Span
{
    private:
        std::vector<int> container;
        unsigned int size;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addRange(int begin, int end);

        int getValue(unsigned int index);
        int getSize();
};


