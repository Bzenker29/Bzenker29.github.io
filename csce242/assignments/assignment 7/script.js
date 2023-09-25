

const toggleNav = () => {
    document.getElementById("main-nav-items").classList.toggle("hidden");
};

const showInputs = () => {
    const nameOne = document.getElementById("name1").value;
    const ageOne = parseInt(document.getElementById("age1").value);
    const nameTwo = document.getElementById("name2").value;
    const ageTwo = parseInt(document.getElementById("age2").value);
    const nameThree = document.getElementById("name3").value;
    const ageThree = parseInt(document.getElementById("age3").value);

    const messageP = document.getElementById("message");

    if (isNaN(ageOne) || isNaN(ageTwo) || isNaN(ageThree)) 
    {
        messageP.textContent = "Error: Please enter the ages as numbers.";
    }
    else 
    {
        const names = [nameOne, nameTwo, nameThree];
        const ages = [ageOne, ageTwo, ageThree];
        
        const sortedData = names.map((name, index) => ({ name, age: ages[index] }))
                                .sort((a, b) => b.age - a.age);

        const sortedNamesAndAges = sortedData.map(entry => `${entry.name} is ${entry.age} years old`);

        messageP.textContent = `Oldest to Youngest: ${sortedNamesAndAges.join(', ')}`;
    }
};

const addExerciseOne = () => {
    document.getElementById("exercise1").style.display = 'block';
    document.getElementById("exercise2").style.display = 'none';
};

const addExerciseTwo = () => {
    document.getElementById("exercise1").style.display = 'none';
    document.getElementById("exercise2").style.display = 'block';
};

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

window.onload = () => {
    document.getElementById("nav-toggle").onclick = toggleNav;
    document.getElementById("compare-button").onclick = showInputs;
    document.getElementById("exercise-1-button").onclick = addExerciseOne;
    document.getElementById("exercise-2-button").onclick = addExerciseTwo;
    document.getElementById("funds-count").onclick = updateMeter;

};


