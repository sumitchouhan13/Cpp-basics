#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> V;
    int len;
    //push_back
    
    // begin() – Returns an iterator pointing to the first element in the vector
    // end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    // rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    // rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    // cbegin() – Returns a constant iterator pointing to the first element in the vector.
    // cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    // crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    // crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cin>>len;

    for(int i = 0;i<len;i++)
        V.push_back(i);

    cout << "Output of begin and end: "; 
    for (auto i = V.begin(); i != V.end(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = V.cbegin(); i != V.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = V.rbegin(); ir != V.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = V.crbegin(); ir != V.crend(); ++ir) 
        cout << *ir << " "; 


    
    // size() – Returns the number of elements in the vector.
    // max_size() – Returns the maximum number of elements that the vector can hold.
    // capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    // resize(n) – Resizes the container so that it contains ‘n’ elements.
    // empty() – Returns whether the container is empty.
    // shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    // reserve() – Requests that the vector capacity be at least enough to contain n elements.
    cout << "Size : " << V.size(); 
    cout << "\nCapacity : " << V.capacity(); 
    cout << "\nMax_Size : " << V.max_size(); 
    V.resize(6);
    cout << "\nSize : " << V.size(); 

    if (V.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
  
    // Shrinks the vector 
    V.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (auto it = V.begin(); it != V.end(); it++) 
        cout << *it << " "; 
    
    // reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    // at(g) – Returns a reference to the element at position ‘g’ in the vector
    // front() – Returns a reference to the first element in the vector
    // back() – Returns a reference to the last element in the vector
    // data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

    
    cout << "\nReference operator [g] : V[2] = " << V[2]; 
    cout << "\nat : V.at(4) = " << V.at(4); 
    cout << "\nfront() : V.front() = " << V.front(); 
    cout << "\nback() : V.back() = " << V.back(); 
  
    // pointer to the first element 
    int* pos = V.data(); 
    cout << "\nThe first element is " << *pos; 

    // assign() – It assigns new value to the vector elements by replacing old ones
    // push_back() – It push the elements into a vector from the back
    // pop_back() – It is used to pop or remove elements from a vector from the back.
    // insert() – It inserts new elements before the element at the specified position
    // erase() – It is used to remove elements from a container from the specified position or range.
    // swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    // clear() – It is used to remove all the elements of the vector container
    // emplace() – It extends the container by inserting new element at position
    // emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

    

    return 0;
}