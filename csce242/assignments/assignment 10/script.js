const legos = [
    { title: "Millennium Falcon", price: "849.99", age: "16+", rating: "5 Stars", picture: "falcon.jpeg" },
    { title: "R2-D2", price: "239.99", age: "18+", rating: "5 Stars", picture: "r2.jpeg" },
    { title: "AT-AT", price: "169.99", age: "10+", rating: "5 Stars", picture: "at.jpeg" },
    { title: "Captain Rex Helmet", price: "69.99", age: "18+", rating: "5 Stars", picture: "rex.jpeg" },
    { title: "Republic Fighter Tank", price: "39.99", age: "7+", rating: "4 Stars", picture: "tank.jpeg" },
    { title: "Tie Fighter", price: "49.99", age: "8+", rating: "4 Stars", picture: "tie-fighter.jpeg" }
  ];
  
  const container = document.querySelector('.container');
  
  legos.forEach((toy) => {
    const toyItem = document.createElement('div');
    toyItem.classList.add('images');
  
    const imgContainer = document.createElement('div');
    imgContainer.classList.add('img-container');
  
    const toyImage = document.createElement('img');
    toyImage.src = `images/${toy.picture}`;
    toyImage.alt = toy.title;
    toyImage.classList.add('img');
  
    const overlay = document.createElement('div');
    overlay.classList.add('overlay');
  
    const overlayTitle = document.createElement('h2');
    overlayTitle.textContent = toy.title;
  
    const overlayDescription = document.createElement('p');
    overlayDescription.textContent = `Age: ${toy.age} - Rating: ${toy.rating}`;
  
    const overlayPrice = document.createElement('p');
    overlayPrice.textContent = `$${toy.price}`;
  
    overlay.appendChild(overlayTitle);
    overlay.appendChild(overlayDescription);
    overlay.appendChild(overlayPrice);
  
    imgContainer.appendChild(toyImage);
    imgContainer.appendChild(overlay);
  
    toyItem.appendChild(imgContainer);
    container.appendChild(toyItem);
  
    toyItem.addEventListener('mouseenter', () => {
      overlay.style.display = 'block';
      toyImage.style.opacity = 0.7;
    });
  
    toyItem.addEventListener('mouseleave', () => {
      overlay.style.display = 'none';
      toyImage.style.opacity = 1;
    });
  });
  