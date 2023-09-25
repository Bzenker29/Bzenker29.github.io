

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
        
        // Combine names and ages and sort by age in descending order
        const sortedData = names.map((name, index) => ({ name, age: ages[index] }))
                                .sort((a, b) => b.age - a.age);

        // Create an array of strings containing names and ages
        const sortedNamesAndAges = sortedData.map(entry => `${entry.name} is ${entry.age} years old`);

        // Display the sorted names and ages
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




const updateMeter = () => {

};

window.onload = () => {
    document.getElementById("nav-toggle").onclick = toggleNav;
    document.getElementById("compare-button").onclick = showInputs;
    document.getElementById("exercise-1-button").onclick = addExerciseOne;
    document.getElementById("exercise-2-button").onclick = addExerciseTwo;
    document.getElementById("funds-count").onclick = updateMeter;

};


