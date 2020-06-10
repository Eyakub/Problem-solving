merge_sort = (arr) => {
    if (arr.length > 1){
        let mid = Math.floor(arr.length / 2)
        let L = arr.slice(0, mid)
        let R = arr.slice(mid, arr.length)

        merge_sort(L)   // sorting the first sub-array
        merge_sort(R)   // sorting the 2nd sub-array
        
        let i = j = k = 0

        // copy data to temp array L[] and R[]
        while (i < L.length && j < R.length){
            if (L[i] < R[j]){
                arr[k] = L[i]
                i++
            }
            else {
                arr[k] = R[j]
                j++
            }
            k++
        }

        // check if any elements was left
        // as above while checking to length, any array might have 1 value more
        while (i < L.length){
            arr[k] = L[i]
            i++
            k++
        }
        while(j < R.length){
            arr[k] = R[j]
            j++
            k++
        }
    }
}

arr = [6, 5, 7, 3, 1, 9, 8]
merge_sort(arr)
console.log(arr)