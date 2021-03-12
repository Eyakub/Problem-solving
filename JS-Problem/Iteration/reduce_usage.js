const newNumbers = [1, 2, 3, 4, 5, 6]

// accumulator -> returns the sum of total + currentValue
// next iteration number of list to be sum with accumulator
const result = newNumbers.reduce((accumulator, currentValue) => {
    return accumulator + currentValue;
});

console.log(result);

const cities = ['Orlando', 'Dubai', 'Edinburgh', 'Chennai', 'Accra', 'Denver', 'Eskisehir', 'Medellin', 'Yokohama'];
const word = cities.reduce((acc, currVal) => {
    return acc + currVal[0]
}, "C")
console.log(word);


const nums = [1, 50, 75, 200, 350, 525, 1000];
// Choose a method that will return a boolean value
console.log(nums.reduce(num => num < 0))