# Introduction
WTF is a header-only c++11 library that helps you introduce a lot of swearing in your code. Since my english is not the best at that kind of exercise, feel free to contribute. Every pull request will be happily merged, for as long as it makes me laugh!

Happy swearing!

## Examples
### Testing null pointers

```
if(!pointer)
   exit();
```
becomes
```
if(pointer sucks)
   then_fuck_it
```

### Testing empty containers

```
std::vector<size_t> ints;
if(ints.empty())
  ...
```
becomes
```
std::vector<size_t> ints;
if(ints.contains_shit)
  ...
```

Conversely,
```
std::vector<size_t> ints;
if(!ints.empty())
  ...
```
becomes
```
std::vector<size_t> ints;
if(ints.doesnt_contain_shit)
  ...
```

### Exceptions

```
throw std::runtime_error("...");
```
becomes
```
throw the_finger("...");
```

## Building from source

```
mkdir build
cd build
cmake ..
make
```
