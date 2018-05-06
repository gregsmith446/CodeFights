//program that takes in an array, finds if there is a duplicated number, then  return the number for which the second occurrence has a smaller index than the second occurrence of the other number does.
// If there are no such elements, return -1.

//Note --> used the given array to get this answer, did not make a copy
//first time using the input in such a way
int firstDuplicate(arr_integer a) {
    // printf("Size of the array, %i\n", a.size); //we now have the length
    // printf("Attemping to get index 1: %i", a.arr[1]); //first item in array
    for (int i; i < a.size; i++)
    {
        if (a.arr[abs(a.arr[i]) - 1] < 0) //starts off as (a.arr[a.arr[0] - 1])
        {
            return abs(a.arr[i]);
        }

        a.arr[abs(a.arr[i]) - 1] *= -1; // if you hit a duplicate
    }

    return -1;
}

// Definition for arrays:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//