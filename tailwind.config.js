/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["./*{.html,.js}"],
  darkMode: 'class',
  theme: {
    fontFamily: {
      mono: ['Space Mono']
    },
    extend: {
      colors:{
        lightModeBackground: "#f6f8ff",
        lightModeBodyColor:"#ffffff",
        iconButtonColor:"#0079ff",
        lightModeTextColor:"#697cb4",
        lightNotAvailableColor: "#bbb3ca",
        darKModeBackground: "#141d2f",
        darkModeBodyColor: "#1e2a47",
        darkModeTextColor: "#ffffff",

      }
    },
  },
  plugins: [],
}
