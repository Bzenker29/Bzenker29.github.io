

const quoteCycle = () => {

  const quoteShowing = document.querySelector("#quote-container :not(.hidden)");

  quoteShowing.classList.add("hidden");

  let newQuote = quoteShowing.nextElementSibling;

  if (newQuote == null) {
      newQuote = document.querySelector("#quote-container :first-child");
  }

  newQuote.classList.remove("hidden");

}

const showRainbow = () => {
  
  const rainbowContainer = document.querySelector("#rainbow-showing");
  const gold = document.getElementById("gold-img");

  let colors = ["red", "orange", "yellow", "green", "blue", "purple"];
  let positioning = 0;

  const updateRainbow = setInterval(() => {

      if (positioning === colors.length) {
          gold.classList.remove("hidden");
          clearInterval(updateRainbow);
      }

      const nextRainbowColor = document.createElement("p");
      nextRainbowColor.classList.add("rainbow-colors");
      nextRainbowColor.style.setProperty("background", colors[positioning]);

      positioning++;
      rainbowContainer.append(nextRainbowColor);

  }, 100)
}

window.onload = () => {
  setInterval(quoteCycle, 2000);
  document.getElementById("rainbow-button").onclick = showRainbow;
}