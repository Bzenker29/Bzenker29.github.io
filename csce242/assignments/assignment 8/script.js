let totalFunds = 0; 

const updateMeter = () => {
    const moneyCount = parseFloat(document.getElementById("money-count").value);

    if (isNaN(moneyCount) || moneyCount < 0) {
        alert("Donation amount is invalid. Please enter another amount.");
        return;
    };

    totalFunds = totalFunds + moneyCount; 
    const fundGoal = 10000.00; 
    const amountAdded = (totalFunds / fundGoal) * 100;
    document.getElementById("counter").style.height = `${Math.min(amountAdded, 100)}%`;
};

document.addEventListener("DOMContentLoaded", function() {
    const image = document.getElementById("running");
    const startButton = document.getElementById("start-run");
    const stopButton = document.getElementById("stop-run");
    let animationId;
    let isRunning = false; 
    let direction = 1; 

    function updateMan() {
        const leftMargin = parseFloat(getComputedStyle(image).getPropertyValue("--left-margin")) || 0;

        if (isRunning) {
            image.src = "images/running.png";
        } else {
            image.src = "images/running_2.png";
        }

        const newMargin = leftMargin + 5 * direction;
        image.style.setProperty("--left-margin", newMargin + "px");

        const containerWidth = image.parentElement.clientWidth;
        if (newMargin <= 0 || newMargin >= containerWidth - image.clientWidth) {
            direction *= -1; 
        }

        isRunning = !isRunning; 
        animationId = requestAnimationFrame(updateMan);
    }

    function changeImage() {
        setInterval(() => {
            isRunning = !isRunning; 
        }, 10000); 
    }

    function startAnimation() {
        if (!animationId) {
            animationId = requestAnimationFrame(updateMan);
            startButton.disabled = true;
            stopButton.disabled = false;
        }
    }

    function stopAnimation() {
        if (animationId) {
            cancelAnimationFrame(animationId);
            animationId = null;
            startButton.disabled = false;
            stopButton.disabled = true;
        }
    }

    
    startButton.addEventListener("click", () => {
        changeImage(); 
        startAnimation(); 
    });
    stopButton.addEventListener("click", stopAnimation);
});




window.onload = () => {
    document.getElementById("funds-count").onclick = updateMeter;
}