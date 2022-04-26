#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Declare a vector of 4 uniquely set elements
    vector<int> sample_1 = {1,2,3,4};
    //Initialize a vector iterator
    vector<int>::iterator pointer;
    for (pointer = sample_1.begin(); pointer != sample_1.end() ; ++pointer)
    {
        cout << *pointer << "\t";
    } cout << endl;
    pointer = sample_1.begin();
    cout << "First element of a vector: " << *pointer << endl;

    pointer = sample_1.begin() + 2;
    cout << "3rd element of a vector: " << *pointer << endl;

    // Due to end() returns value *after* the final value in a vector
    // 1-subtraction must be used in order to get final value correctly
    pointer = sample_1.end() - 1;
    cout << "Last element of a vector: " << *pointer << endl;
    
    return 0;
}
