<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta name="description" content="A github user search tool">

  <link rel="icon" type="image/png" sizes="32x32" href="./assets/favicon-32x32.png">
  <link rel="preconnect" href="https://fonts.googleapis.com"> 
  <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin> 
  <link href="https://fonts.googleapis.com/css2?family=Space+Mono:wght@400;700&display=swap" rel="stylesheet">
  <link rel="stylesheet" href="style.css">
  
  <title>Frontend Mentor | GitHub user search app</title>
</head>
<body class="container">

    <header class="header flex">
        <h1 id="header-title" class="fs-600 ff-bold text-dark">devfinder</h1>
        <button id="header-button" class="hoverClass1 mode uppercase ff-bold text-accent" data="dark" onclick="changeMode()">Dark <img src="./assets/icon-moon.svg" alt="icon-dark-mode"></button>
    </header>

    <main class="main">
        <div id="searchBar" class="searchBar flex">
            <img src="./assets/icon-search.svg" alt="search">
            <label for="search" class="sr-only">Search GitHub useername</label>
            <input id="search" class="fs-200" placeholder="Search GitHub username...">
            <div id="search-err" class="err-msg">No results</div>
            <button class="ff-bold" onclick="getData()">Search</button>
        </div>
        <article id="infos" class="infos">
            <div class="presentation flex">
                <img src="" alt="avatar" id="obj-avatar" class="avatar">
                <div class="right flex" style="--gap: .05rem;">
                    <h2 id="obj-name" class="ff-bold fs-500 text-dark"></h2>
                    <a id="obj-username" target="_blank" href=""></a>
                    <p id="obj-date"></p>
                </div>
            </div>

            <p id="obj-bio" class="bio"></p>
            <div id="grid-data" class="grid-data">
                <p class="repos fs-200">Repos</p>
                <p class="followers fs-200">Followers</p>
                <p class="following fs-200">Following</p>
                <p id="obj-repos" class="fs-500 ff-bold text-dark"></p>
                <p id="obj-followers" class="fs-500 ff-bold text-dark"></p>
                <p id="obj-following" class="fs-500 ff-bold text-dark"></p>
            </div>

            <ul class="list flow grid" style="--gap: 0;">
                <li id="list-item1"><img src="./assets/icon-location.svg" alt="icon-location" class="icon-location"><p id="obj-location"></p></li>
                <li id="list-item2"><img src="./assets/icon-website.svg" alt="icon-website"><a id="obj-website" target="_blank" href=""></a></li>
                <li id="list-item3"><img src="./assets/icon-twitter.svg" alt="icon-twitter"><a id="obj-twitter" target="_blank" href=""></a></li>
                <li id="list-item4"><img src="./assets/icon-company.svg" alt="icon-company"><a id="obj-company" target="_blank" href=""></a></li>
            </ul>

        </article>
    </main>

    <script src="index.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/moment.js/2.18.1/moment.min.js"></script>

</body>
</html>