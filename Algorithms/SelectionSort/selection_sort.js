selection_sort = (arr, arr_len) => {
    for(let i = 0; i < arr_len-1; i++){
        let min_index = i
        for(let j = i+1; j < arr_len; j++){
            if(arr[j] < arr[min_index]){
                min_index = j
            }
        }
        [arr[min_index], arr[i]] = [arr[i], arr[min_index]]
    }
    console.log(arr)
}

arr = [5, 6, 4, 3, 7, 1]
selection_sort(arr, arr.length)