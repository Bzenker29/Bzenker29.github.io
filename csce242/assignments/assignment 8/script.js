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

const runningStart = () => [

]

const runningStop = () => {
    
}



window.onload = () => {
    document.getElementById("funds-count").onclick = updateMeter;
    document.getElementById("start-run").onclick = runningStart;
    document.getElementById("stop-run").onclick = runningStop;

}