console.log('start')

function loginUser(email, password, callback) {
    setTimeout(() => {
        console.log("Now we have the data");
        // return {userEmail: email};
        callback({ userEmail: email });
    }, 2000)
}

function getUserVideos(email, callback) {
    setTimeout(() => {
        callback(['V1', 'v2', 'v3']);
    }, 1000);
}

function videoDetails(video, callback){
    setTimeout( ()=> {
        callback('Title of the video');
    }, 1000);
}

const user = loginUser('eyakub@gmail.com', 12345, user => {
    console.log(user);
    getUserVideos(user.userEmail, videos => {
        console.log(videos);
        videoDetails(videos[0], title => {
            console.log(title)
        });
    })
});
console.log('End');