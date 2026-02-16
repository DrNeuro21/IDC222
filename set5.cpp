#include <iostream>
#include <set>
#include <vector>
using namespace std;

void printSet(set<int> s)
{
    for (int num : s)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1 = {1, 3, 4, 5, 7};
    vector<int> v2 = {2, 3, 5, 6};

    set<int> unionSet, intersectionSet;

    // Insert elements of first vector
    for (int num : v1)
    {
        unionSet.insert(num);
    }
    // Insert elements of second vector
    for (int num : v2)
    {
        unionSet.insert(num);
    }

    // Convert first vector to set for intersection
    set<int> set1(v1.begin(), v1.end());

    // Find common elements
    for (int num : v2)
    {
        if (set1.find(num) != set1.end())
        {
            intersectionSet.insert(num);
        }
    }

    cout << "Union: ";
    printSet(unionSet);

    cout << "Intersection: ";
    printSet(intersectionSet);

    return 0;
}

