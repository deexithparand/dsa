- by default when you pass arrays to functions
the param can be - array / pointer - will always point to address of the element in the first index
so its pass by reference by default when you pass arrays to methods in c
- using #define can be seen here - used to get the length of array
- methods cannot return array in c, cuzz they are pass by reference by default
- When an array is passed to a function, it decays into a pointer, which is a reference to the first element of the array. This behavior is why arrays can't be returned in the traditional sense.