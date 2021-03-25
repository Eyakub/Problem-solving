let spaceship = {
    'Fuel Type': 'Turbo Fuel',
    'Active Mission': true,
    homePlanet: 'Earth',
    numCrew: 5
};

let propName = 'Active Mission';

// single way to access object property
console.log(spaceship.homePlanet);

// another way to access object property
console.log(spaceship['Fuel Type']);


// making a function to get the property value of an object
let returnAnyProp = (objectName, propName) => objectName[propName]
console.log(returnAnyProp(spaceship, 'numCrew'))