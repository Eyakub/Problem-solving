const animals = ['hippo', 'tiger', 'lion', 'seal', 'cheetah', 'monkey', 'salamander', 'elephant'];

const foundAnimal = animals.findIndex(animal => animal == 'elephant');
console.log(foundAnimal)

const startWithS = animals.findIndex(animal => animal.startsWith('s'));
console.log(startWithS)