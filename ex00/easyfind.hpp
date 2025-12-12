/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndogan <ndogan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:12:29 by ndogan            #+#    #+#             */
/*   Updated: 2025/09/03 17:12:31 by ndogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

template <typename E>

typename E::iterator easyfind(E &container, int i){
    typename E::iterator it = std::find(container.begin(), container.end(), i);
    if(it == container.end())
        throw std::runtime_error("Not Find Value");
    return it;
};
