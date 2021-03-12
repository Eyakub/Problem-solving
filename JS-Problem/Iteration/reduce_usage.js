const newNumbers = [1, 2, 3, 4, 5, 6]

// accumulator -> returns the sum of total + currentValue
// next iteration number of list to be sum with accumulator
const result = newNumbers.reduce((accumulator, currentValue) => {
    return accumulator + currentValue;
});

console.log(result);
