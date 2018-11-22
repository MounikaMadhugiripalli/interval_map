/*
 * test_interval_map.cpp
 *
 *  Created on: Nov 19, 2018
 *      Author: mounika.madhugiripalli
 */
#include <bits/stdc++.h>
#include <map>
#include <limits>

template<typename K, typename V>
class interval_map {
    std::map<K,V> m_map;

public:
    // constructor associates whole range of K with val by inserting (K_min, val)
    // into the map
    interval_map( V const& val) {
        m_map.insert(m_map.end(),std::make_pair(std::numeric_limits<K>::lowest(),val));
    }

    // Assign value val to interval [keyBegin, keyEnd).
    // Overwrite previous values in this interval.
    // Conforming to the C++ Standard Library conventions, the interval
    // includes keyBegin, but excludes keyEnd.
    // If !( keyBegin < keyEnd ), this designates an empty interval,
    // and assign must do nothing.
    void assign( K const& keyBegin, K const& keyEnd, V const& val ) {
// INSERT YOUR SOLUTION HERE
        using iterator_t = typename std::map<K, V>::iterator;
        K kbegin = keyBegin;
        K kend = keyEnd;

       iterator_t Begin = m_map.lower_bound(keyBegin);
       while(kbegin < kend) {
           m_map.erase(kbegin);
           m_map.insert(Begin,std::make_pair(kbegin, val));
           Begin++;
           kbegin++;
       }

    }

    void insert(K const& keyBegin, V const& Val) {

       K kbegin = keyBegin;
       K kend = std::numeric_limits<K>::max();

       if (kbegin > kend)
           return;
       if (keyBegin < std::numeric_limits<K>::min())
           return;

       if (this->prevlowerbound != 0 && kbegin< this->prevlowerbound) {
           kend = this->prevlowerbound;
           this->prevlowerbound = keyBegin;
       }

       const K end = kend;
       this->assign(keyBegin, end, Val);

    }

    // function to print values of map
   void show() {
       std::cout << "Contents of Interval Map:" << std::endl;
       for(auto entry : m_map) {
           std::cout << entry.first <<"->" <<entry.second << std::endl;
       }
   }

   K prevlowerbound;
   // function to test interval map data structure
   void interval_map_test(interval_map &int_map) {

       int_map.insert(5,'a');
       int_map.insert(8,'z');
       int_map.insert(100,'f');


   }

    // look-up of the value associated with key
    V const& operator[]( K const& key ) const {
        return ( --m_map.upper_bound(key) )->second;
    }

};

// Many solutions we receive are incorrect. Consider using a randomized test
// to discover the cases that your implementation does not handle correctly.
// We recommend to implement a test function that tests the functionality of
// the interval_map, for example using a map of unsigned int intervals to char.
int main() {
    interval_map<unsigned char,char> int_map{'c'};

    int_map.show();
    int_map.interval_map_test(int_map);
    int_map.show();
    return 0;
}



