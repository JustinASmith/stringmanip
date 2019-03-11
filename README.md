# stringmanip
C++ cstring manipulation functions that are not available by default

### What I've Learned
* using char**

### Usage/Examples

* ```cpp
  const char** cs_split(const char* input, int key, int* out_s)
  ```
  * *input*  -> cstring to split
  * *key*    -> char to split at
  * *out_s*  -> size of the newly created array
  * **example**:
  ```cpp
  int size;
  const char* test = "This is a test";
  const char** testSplit = cs_split(test, ' ', &size);
  // testSplit would be {"This", "is", "a", "test"}
  ```
