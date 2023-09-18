
window.onload = () => {
    document.getElementById("dance").onclick = danceBall;
    document.getElementById("show").onclick = showImage;
    document.getElementById("hide").onclick = hideImage;
    document.getElementById("comment-button").onclick = showUserComment;
};

const danceBall = () => {
    let ball = document.getElementById("ball");
    ball.classList.add("size-change");
}

const showImage = () => {
    document.getElementById("rocket-league").classList.remove("invisible");
}

const hideImage = () => {
    document.getElementById("rocket-league").classList.add("invisible");
}

const showUserComment = () => {
    document.getElementById("user-comment").classList.add("comment-style");

    const product = document.getElementById("txt-product").value;
    const productName = document.getElementById("show-product");
    
    const comment = document.getElementById("comment").value;
    const rating = document.getElementById("rating").value;
    const commentText = document.getElementById("show-comment");

    const user = document.getElementById("username").value;
    const userDisplay = document.getElementById("show-user");

    productName.innerHTML += `<section class="individual-comment"><strong>${product}</strong> <p class="small-text">${rating}/5 stars</p> <p class="small-text">${comment}</p> <p class="small-text">Username: ${user}</p></section>`;
}