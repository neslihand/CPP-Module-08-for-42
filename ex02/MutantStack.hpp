/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:12:52 by ndogan            #+#    #+#             */
/*   Updated: 2025/09/03 18:47:54 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename M>

class MutantStack : public std::stack<M>
{
    public:
        typedef typename std::stack<M>::container_type::iterator iterator;

        MutantStack(){};
        MutantStack(const MutantStack& other): std::stack<M>(other){}
        MutantStack& operator=(const MutantStack& other) {
            std::stack<M>::operator=(other);
            return *this;
        }
        ~MutantStack() {};

        iterator begin() { return this->c.begin(); }
        iterator end()   { return this->c.end(); }
};
