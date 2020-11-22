// promises -> its an object, that gives us back either a result of
// async operation or failure operation
const promise = new Promise((resolve, reject) => {
    setTimeout( ()=> {
        console.log('got the user')
        // resolve({ user: 'eyakub'})
        reject(new Error("user not logged in"))
    }, 2000);
});

promise
.then(user => {
    console.log(user);
})
.catch(err => console.log(err.message));