const changeText = () => {
    const helloP = document.getElementById("date");
    helloP.innerHTML = "hi, to you Bradley";
    helloP.classList.add("special");
}

window.onload = () => {
    document.getElementById("button-click").onclick = () => {
        const helloP = document.getElementById("date");
    helloP.innerHTML = "hi";  
    }
}