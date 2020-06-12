bubble_sort = (arr, arr_length) => {
  for(let i = 0; i < arr_length; i++){
    flag = false
    for(let j = 0; j < arr_length-i-1; j++){
      if(arr[j] > arr[j+1]){
        [arr[j], arr[j+1]] = [arr[j+1], arr[j]]
        flag = true
      }
    }
    if (flag == false) break
  }
  console.log(arr)
}

let arr = [5, 6, 7, 4, 3, 2]
bubble_sort(arr, arr.length)