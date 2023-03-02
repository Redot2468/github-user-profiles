const html = document.querySelector("html");
const img1 = document.querySelector(".img1");
const img2 = document.querySelector(".img2");
const mode = document.querySelector(".mode");

// toggle dark mode... 
mode.addEventListener("click", () => {
    html.classList.toggle("dark");
    img1.classList.toggle("hidden");
    img2.classList.toggle("hidden");
})

// searching...
const searchInput = document.querySelector(".search__input");
const submitBtn = document.querySelector(".submit__btn");
submitBtn.addEventListener("click", (e) => {
    e.preventDefault();
    getData(searchInput.value);
})

// fetching api...
async function getData(username){
    try{
        const res = await fetch(`https://api.github.com/users/${username}`)
        if(!res.ok)
         throw new Error(`Error with the api. ${res.status}`);

        //  getting data...
         const data = await res.json();
         displayData(data);
    }
    catch(err){
        console.log(err.message);
    }
}

// displaying data...
function displayData(profile){
    const dateJoined = new Date(profile.created_at);
    const dateToString= dateJoined.toString();
    const splittedDate = dateToString.split(" ");
    splittedDate.splice(4, 6);

    const joinedDate = splittedDate.join(" ")

    // adding the json data to the app
    document.querySelector(".avatar").src = profile.avatar_url;
    document.querySelector(".name").textContent = profile.name;
    document.querySelector(".username").textContent = `@${profile.login}`;
    document.querySelector(".joined__date").textContent = `Joined ${joinedDate}`
    let bio = document.querySelector(".bio");
    bio.textContent = profile.bio;    
    document.querySelector(".repos").textContent = profile.public_repos;
    document.querySelector(".followers").textContent = profile.followers;
    document.querySelector(".following").textContent = profile.following;
    document.querySelector(".location").textContent = profile.location;
    document.querySelector(".html__url").innerHTML = `
        <a href = "${profile.html_url}">${profile.html_url}</a>`;
    document.querySelector(".twitter").textContent = profile.twitter_username;
    document.querySelector(".company").textContent =  profile.company;

    // for sections that have null value;
    if(bio.textContent === ""){
        bio.textContent = "This profile has no bio";
        bio.style.color = "lightgray"
     }

    //  for the company location and the twitter handle
     let details = document.querySelectorAll(".details");
     details.forEach(detail => {
        if(detail.textContent === ""){
            detail.textContent = "Not Available";
            detail.style.color = "lightgray"
        }
     })
}
