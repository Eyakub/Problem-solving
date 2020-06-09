insertion_sort = (arr) => {
    for(let i = 1; i < arr.length; i++){
        // get the 2nd index value 
        let key = arr[i];
        console.log('key----->', key)
        console.log('arr-> ', arr)
        // first index value of array
        let j = i-1;
        console.log('j: ', j, ' ', 'ar[j] > key: ', arr[j], '>', key)
        while (j >= 0 && arr[j] > key){
            // moving the right side element to one position backword, 
            // until it reaches to the correct position
            arr[j+1] = arr[j];
            j--;
        }
        // moving the last element to its correct position
        arr[j+1] = key
    }
    console.log("Sorted array using Insertion Sort: ",arr)
}

arr = [6, 5, 7, 3, 1, 9]
insertion_sort(arr)