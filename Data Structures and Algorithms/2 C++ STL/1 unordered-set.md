# Unordered Set in C++ STL

An unordered set in the C++ Standard Template Library (STL) is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity on average and takes O(n) in the worst case.

## What is an unordered set?

An unordered set is a collection of unique elements in C++ STL, where the order of elements is not defined.

## Syntax:

```cpp
unordered_set<object_type> variable_name;
```

```cpp
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    unordered_set<string> str;
    return 0;
}
```

## Functions in unordered set

### insert()

Inserts an element into the unordered set.

```cpp
unordered_set<int> s;
s.insert(1);
s.insert(2);
```

### begin()

Returns an iterator pointing to the first element in the unordered set.

```cpp
s.begin();
```


### end()

Returns an iterator to the theoretical element after the last element.

```cpp
s.end();
```

### count()

it returns 1 if the element is present in the container otherwise 0.

```cpp
unordered_set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true
```

### clear()

deletes all the elements in unordered set.

```cpp
s.clear();
```


### find() 

to search an element in the unordered set.

```cpp
unordered_set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;
```

### erase() 

to delete a single element or elements between a particular range.

```cpp
s.erase();
```


### size()

returns the size of the unordered set.

```cpp
s.size();
```


### empty() 

to check if the unordered set is empty or not.

```cpp
s.empty();
```

## Code : 

```cpp

#include<bits/stdc++.h>

using namespace std;

int main() {
  unordered_set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in unordered set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the unordered set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
}
```

### output : 

``` cpp

Elements present in the unordered set: 10 9 8 7 2 1 3 4 5 6
2 is present in unordered set
Elements after deleting the first element: 9 8 7 2 1 3 4 5 6
The size of the unordered set is: 9
The unordered set is not empty
Size of the unordered set after clearing all the elements: 0

```

### Other functions:

### cbegin()
it refers to the first element of the unordered set.

### cend()
it refers to the theoretical element after the last element of the unordered set.

### bucket_size() 
gives the total number of elements present in a specific bucket in an unordered set.

### emplace() 
to insert an element in the unordered set.

### max_size() 
the maximum elements an unordered_set can hold.

### max_bucket_count() 
to check the maximum number of buckets an unordered set can hold.