// Define an array of quotes
const quotes = [
    "The only way to do great work is to love what you do. - Steve Jobs",
    "Innovation distinguishes between a leader and a follower. - Steve Jobs",
    "Stay hungry, stay foolish. - Steve Jobs",
    "Life is what happens when you're busy making other plans. - John Lennon",
    "The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt"
  ];
  
  // Function to display a random quote
  function displayRandomQuote() {
    const randomIndex = Math.floor(Math.random() * quotes.length);
    const randomQuote = quotes[randomIndex];
    quoteText.textContent = randomQuote;
  }
  
  // Get a reference to the HTML element
  const quoteText = document.getElementById("quote-text");
  
  // Call the function to display the first quote when the page loads
  displayRandomQuote();
  
  // Set an interval to change the quote every 2 seconds (2000 milliseconds)
  setInterval(displayRandomQuote, 2000);
  