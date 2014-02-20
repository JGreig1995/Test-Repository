// FILE: bag1.h
// CLASS PROVIDED: bag
//
// TYPEDEF AND MEMBER CONSTANTS for the bag class:
//  typedef _____ value_type
//    bag::value_type is the data type of the items in the bag. It may be any of
//    the C++ built-in types.
//
//  typedef _____ size_type
//    bag::size_type is the data type of a variable that keeps track of how many
//    items are in the bag.
//
//  static const size_type CAPACITY = _______
//    bag::CAPACITY is the maximum number of items that a bag can hold.
//    A bag is a partially filled array.
//
// CONSTRUCTOR for the bag class:
//    bag()
//    Postcondition: The bag has been created as an empty bag.
//    
// MODIFICATION MEMBER FUNCTIONS for the bag class:
//  size_type erase(const value_type& target)
//    Postcondition: All copes of target are removed from the bag.
//    Returned is the number of copies removed.
//
//  void erase_one(const value_type& target)
//    Postconditoin: If target was in the bag, then one copy has been removed;
//    otherwise the bag is unchanged.
//
//  void insert(const value_type& entry)
//    Precondition: size() < CAPACITY
//    Postcondition: A new copy of entry has been added to the bag.
//
// CONSTANT MEMBER FUNCTIONS for the bag class:
//  size_type size() const
//    Postcondition: The return value is the total number of items in the bag.
//
//  size_type count() const
//    Postcondition: The return value is number of times target is in the bag.
//
//  int minimum() const
//    Precondition: size() > 0
//    Postcondition: The function returns the value of the minimum element in
//      the bag.
//
// VALUE SEMANTICS for the bag class:
//  Assignments and the copy constructor may be used with bag objects.

#ifndef JARRETT_GREIG_BAG1_H
#define JARRETT_GREIG_BAG1_H
#include <cstdlib> //This gives us the size_t (natural numbers) data type.

namespace Jarrett_Greig
{
  class bag
  {
  public:
    // TYPEDEFS AND MEMBER CONSTANTS
    typedef int value_type;
    typedef std::size_t size_type;
    static const size_type CAPACITY = 30;
    // CONSTRUCTOR
    bag() { used = 0; }
    // MODIFICATION MEMBER FUNCTIONS
    size_type erase(const value_type& target);
    void erase_one(const value_type& target);
    void insert(const value_type& entry);
    // CONSTANT MEMBER FUNCTIONS
    size_type size() const { return used; }
    size_type count(const value_type& target) const;
    int minimum() const;
  private:
    value_type data[CAPACITY]; // The bag (array) to store items
    size_type used;            // How much of array is used
  };
}

#endif
